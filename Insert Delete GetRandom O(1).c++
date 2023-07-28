class RandomizedSet {
public:
    RandomizedSet() {
        set<int> s;
    }
    
    bool insert(int val) {
        if(count(s.begin(), s.end(), val) == 0){
            s.insert(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(count(s.begin(), s.end(), val) == 1){
            s.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int r = rand() % s.size();
        
    }
};
