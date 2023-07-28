class Solution {
 public:
  vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                              long long success) {
    vector<int> ans;
    sort(begin(potions), end(potions));

    for (const int spell : spells)
      ans.push_back(potions.size() -
                    firstIndexSuccess(spell, potions, success));

    return ans;
  }

 private:
  // First index i s.t. spell * potions[i] >= success
  int firstIndexSuccess(int spell, const vector<int>& potions,
                        long long success) {
    int l = 0;
    int r = potions.size();
    while (l < r) {
      const int m = (l + r) / 2;
      if (static_cast<long long>(spell) * potions[m] >= success)
        r = m;
      else
        l = m + 1;
    }
    return l;
  }
};

spells = [5,1,3], potions = [1,2,3,4,5], success = 7
ans = []
portions = [1,2,3,4,5]
spell = 5
l = 0
r = 5
m = 2
spell * potions[m] = 15
r = 2
l = 0
r = 2
m = 1
spell * potions[m] = 10
r = 1
l = 0
r = 1
m = 0
spell * potions[m] = 5
l = 1
ans = [4]