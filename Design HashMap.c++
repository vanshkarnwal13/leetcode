class MyHashMap {
public:
    MyHashMap() {
        vector<pair<int, int>> data;
    }
    
    void put(int key, int value) {
        for (int i = 0; i < data.size(); i++) {
            if (data[i].first == key) {
                data[i].second = value;
                return;
            }
        }
        data.push_back(make_pair(key, value));
    }
    
    int get(int key) {
        for (int i = 0; i < data.size(); i++) {
            if (data[i].first == key) {
                return data[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for (int i = 0; i < data.size(); i++) {
            if (data[i].first == key) {
                data.erase(data.begin()+i);
                return;
            }
        }
    }
};
