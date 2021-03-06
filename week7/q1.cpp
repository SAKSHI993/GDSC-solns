class MyStack {
    queue<int>q1;
    queue<int>q2;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }
    
    int pop() {
        int x= q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
       return q1.front();
    }
    
    bool empty() {
        if(q1.empty()){
            return true;
        }
        return false;
    }
};
