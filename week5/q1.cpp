int postfix(string s){
  
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int opr2=st.top();
            st.pop();
            int opr1=st.top();
            st.pop();
            switch(s[i]){
                case '+':st.push(opr1+opr2);       
            break;         
                case '-':st.push(opr1-opr2);         
            break;            
                case '*':st.push(opr1*opr2);
            break;
                case '/':st.push(opr1/opr2);           
            break;           
                case '^':st.push(pow(opr1,opr2));
            break;
            }
        }
    }
    return st.top();
}
