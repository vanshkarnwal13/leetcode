class MyQueue {
public:
    MyQueue() {
        int s1[1000];
        int s2[1000];
        int top1=-1;
        int top2=-1;
        int count=0;

    }
    
    void push(int x) {
        if(top1==1000)
        {
            cout<<"Stack Overflow";
            return;
        }
        else
        {
            top1++;
            s1[top1]=x;
        }
        count++;
    }
    int pop() {
        if(top1==-1 && top2==-1)
        {
            cout<<"Stack Underflow";
            return 0;
        }
        else if(top2==-1)
        {
            while(top1!=-1)
            {
                top2++;
                s2[top2]=s1[top1];
                top1--;
            }
        }
        int x=s2[top2];
        top2--;
        count--;
        while(  top2!=-1)
        {
            top1++;
            s1[top1]=s2[top2];
            top2--;
        }
        return x;

        
    }
    
    int peek() {
        return s1[0];
    }
    
    bool empty() {
        if(count==0)
            return true;
        else
            return false;
    }
};
