class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--;
            }
            else
            {
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
        while(j>=0)
        {
            nums1[k]=nums2[j];
            j--;
            k--;
        }
    }
};

nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
i=2,j=2,k=5
nums1[k]=nums2[j]=nums1[5]=nums2[2]=6
i=2,j=1,k=4
nums1[k]=nums2[j]=nums1[4]=nums2[1]=5
i=2,j=0,k=3
nums1[k]=numsi[i]=nums1[3]=nums1[0]=3
i=1,j=0,k=2
nums1[k]=nums2[j]=nums1[2]=nums2[0]=2
i=1,j=-1,k=1
nums1[k]=numsi[i]=nums1[1]=nums1[1]=2
i=0,j=-1,k=0
nums1[k]=numsi[i]=nums1[0]=nums1[0]=1
