class MinStack {
public:
    MinStack() {
        public:
        vector<int> v;
        int top=-1;
    }
     void push(int val) {
        v.push_back(val);
        top++;
    }
    
    void pop() {
        v.pop_back();
        top--;
    }
    
    int top() {
        return v[top];
    }
    
    int getMin() {
        int min=v[0];
        for(int i=0;i<=top;i++)
        {
            if(v[i]<min)
                min=v[i];
        }
        return min;
    }
};