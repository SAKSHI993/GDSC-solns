class MinStack {
    stack<int> st;
    public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size() == 0)
        {
            st.push(val);
            st.push(val);
            return;
        }
       
        int mn = min(st.top(),val);
        st.push(val);
        st.push(mn);
        
    }
    
    void pop() {
        st.pop();
        st.pop();
        
    }
    
    int top() {
        int x = st.top();
        st.pop();
        int top = st.top();
        st.push(x);
        return top;
    }
    
    int getMin() {
        return st.top();
    }
};
