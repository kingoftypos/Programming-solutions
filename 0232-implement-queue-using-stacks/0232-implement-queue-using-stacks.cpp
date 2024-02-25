class MyQueue {
public:
stack<int> st1,st2;
    MyQueue() {

    }
    
    void push(int x) {
        if(!st1.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            st2.push(x);
            while(!st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }
        else
        st1.push(x);
        
    }
    
    int pop() {
        if(st1.empty())
        return -1;
        int temp=st1.top();
        st1.pop();
        return temp;
        
    }
    
    int peek() {
        if(st1.empty())
        return -1;
        return st1.top();
    }
    
    bool empty() {
        if(st1.empty())
        return true;
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */