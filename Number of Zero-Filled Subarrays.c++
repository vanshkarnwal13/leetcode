// class Solution {
// public:
//     long long zeroFilledSubarray(vector<int>& nums) {
//         int n = nums.size();
//         long long ans = 0;
//         for (int i = 0; i < n; i++) {
//             int cnt = 0;
//             for (int j = i; j < n; j++) {
//                 if (nums[j] == 0) 
//                 {
//                     cnt++;
//                 }
                
//                 else  break;
                
                
//             }
//             ans=ans+cnt;
//         } 
//         return ans;
//     }
// };



class Solution {
 public:
  long long zeroFilledSubarray(vector<int>& nums) {
    long long ans = 0;
    int j = -1;

    for (int i = 0; i < nums.size(); ++i)
      if (nums[i])
        j = i;
      else
        ans =ans+ i - j;

    return ans;
  }
};
[0,0,0,2,0,0]
i=0
j=-1
ans=1
i=1
j=-1
ans=3
i=2
j=-1
ans=6
i=3
j=3
i=4
j=3
ans=7
i=5
j=3
ans=8






