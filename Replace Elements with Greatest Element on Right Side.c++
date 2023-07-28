class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int l = arr.size();
        if(l == 0)
            return arr;
        int max1 = arr[l-1];
        arr[l-1] = -1;
        for(int i = l-2; i >= 0; i--)
        {
            int temp = arr[i];
            arr[i] = max1;
            if(temp > max1)
                max1 = temp;
        }
        return arr;
        
    }
};