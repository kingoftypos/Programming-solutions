class MinStack {
public:
        stack<int> s;
        stack<int> t;
    MinStack() {
        
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            t.push(val);
        }
        else
        {
            s.push(val);
            t.push(min(val,t.top()));
        }
        
    }
    
    void pop() {
        if(s.empty())
        return;
        else
        {
            s.pop();
            t.pop();
        }
        
    }
    
    int top() {
            if(s.empty())
            return -1;
            return s.top();
        
    }
    
    int getMin() {
        if(s.empty())
        return -1;
        return t.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */