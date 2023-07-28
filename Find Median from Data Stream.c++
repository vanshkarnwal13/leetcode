class MedianFinder {
public:
    priority_queue<double> maxHeap;

    MedianFinder() {
        maxheap = priority_queue<int>();
    }
    
    void addNum(int num) {
        maxHeap.push(num);
        //print();
    }

    void print() {
        priority_queue<int> temp = maxHeap;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
    
    double findMedian() {
        int size = maxHeap.size();
        priority_queue<int> temp = maxHeap;
        if (size % 2 == 0) {
            for (int i = 0; i < size / 2 - 1; i++) {
                temp.pop();
            }
            int a = temp.top();
            temp.pop();
            int b = temp.top();
            return (a + b) / 2.0;
        } else {
            for (int i = 0; i < size / 2; i++) {
                temp.pop();
            }
            return temp.top();
        }
    }
};