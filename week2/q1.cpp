class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>> res; 
    sort(num.begin(), num.end()); 

    for (int i = 0; i < (int)(num.size())-2; i++) {
        
        if (i == 0 || (i > 0 && num[i] != num[i-1])) {
            
            int l = i+1, h = (int)(num.size())-1;
            
            while (l < h) {
                if (num[l] + num[h] +num[i] == 0) {
                    
                    vector<int> temp; 
                    temp.push_back(num[i]); 
                    temp.push_back(num[l]); 
                    temp.push_back(num[h]); 
                    res.push_back(temp);
                    
                    while (l < h && num[l] == num[l+1])
                        l++;
                    while (l < h && num[h] == num[h-1])
                        h--;
                    
                    l++; 
                    h--;
                } 
                else if (num[l] + num[h]+ num[i]< 0) 
                    l++;
                else 
                    h--;
           }
        }
    }
    return res;
    
}
    
};
