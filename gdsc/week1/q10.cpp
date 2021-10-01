class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n = a.size();
        vector<int> res(2, 0);
        for(int num = 0; num< n; num++){
            for(int comp = num + 1;  comp <  n;  comp++){
                if(a[num] + a[comp] == target){
                    res[0] = num;
                    res[1] = comp;
                    return res;
                }
            }
        }
    return res;
    }
};