class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int l = prerequisites.size();
        if(l == 0) 
            return true;
        if(numCourses == l )
            return false;

    }
};