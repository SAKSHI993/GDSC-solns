class MyQueue {
    stack<int> st1;
    stack<int> st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        }
        int x=st2.top();
        st2.pop();
        return x;
    }
    
    int peek() {
        if(!st2.empty()){
           return st2.top();
        }
        
         while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
        return st2.top();
        
    }
    
    bool empty() {
        if(st1.empty()&&st2.empty())
            return true;
        return false;
    }
};
