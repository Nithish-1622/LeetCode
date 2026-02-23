class MyStack {
public:
    MyStack() {
    }
    queue<int> q;
    void push(int x) {
        int s = q.size();
        q.push(x);
        for(int i=0; i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int n = q.front();
        q.pop();
        return n;
    }
    
    int top() {
        int t = q.front();
        return t;
    }

    bool empty() {
        bool e = q.empty();
        return e;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */