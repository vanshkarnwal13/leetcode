class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = m + n;
        if (total & 0x1) {
            return find_kth(nums1.begin(), m, nums2.begin(), n, total / 2 + 1);
        } else {
            return (find_kth(nums1.begin(), m, nums2.begin(), n, total / 2) +
                    find_kth(nums1.begin(), m, nums2.begin(), n, total / 2 + 1)) / 2.0;
        }
    }
    private:
    static int find_kth(vector<int>::iterator A, int m, vector<int>::iterator B, int n, int k) {
        // always assume that m is equal or smaller than n
        if (m > n) return find_kth(B, n, A, m, k);
        if (m == 0) return *(B + k - 1);
        if (k == 1) return min(*A, *B);
        
        // divide k into two parts
        int pa = min(k / 2, m), pb = k - pa;
        if (*(A + pa - 1) < *(B + pb - 1)) {
            return find_kth(A + pa, m - pa, B, n, k - pa);
        } else if (*(A + pa - 1) > *(B + pb - 1)) {
            return find_kth(A, m, B + pb, n - pb, k - pb);
        } else {
            return A[pa - 1];
        }
    }

};