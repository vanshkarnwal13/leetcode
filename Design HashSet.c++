class MyHashSet {
public:
    
    MyHashSet() {
        vector<int> v;
    }
    
    void add(int key) {
        for(int i = 0; i < v.size(); i++){
            if(v[i] == key){
                return;
            }
        }
        v.push_back(key);
    }
    
    void remove(int key) {
        for(int i = 0; i < v.size(); i++){
            if(v[i] == key){
                v.erase(v.begin() + i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        for(int i = 0; i < v.size(); i++){
            if(v[i] == key){
                return true;
            }
        }
        return false;
    }
};