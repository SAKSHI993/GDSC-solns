class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
    int n=arr.size();
    stack<int> s;
    s.push(-1);
    int area = arr[0];
    int i = 0;
   
    vector<int> ps(n, -1), ns(n, n);
    while(i<n){
        while(!s.empty()&&s.top()!=-1&&arr[s.top()]>arr[i]){
            ns[s.top()] = i;
            s.pop();
        }
        if(i>0&&arr[i]==arr[i-1]){
            ps[i] = ps[i-1];
        }else{
            ps[i] = s.top();
        } 
        s.push(i);
        i++;
    }
    for(int j = 0; j<n; j++){
        area = max(area, arr[j]*(ns[j]-ps[j]-1));
    }
    return area;   
    }
};