class MyStack {
public:
queue<int> qu;
    MyStack() {
        
    }
    
    void push(int x) {
        if(qu.empty())
        {
            qu.push(x);
        }
        else{
        int s=qu.size();
        qu.push(x);
        while(s-->0)
        {
            qu.push(qu.front());
            qu.pop();
        }
        }

       
    }
    
    int pop() {
        if(qu.empty())
        return -1;
        int temp=qu.front();
        qu.pop();
        return temp;
        
    }
    
    int top() {
        if(qu.empty())
        return -1;
        return qu.front();
        
    }
    
    bool empty() {
        return qu.empty();
        
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