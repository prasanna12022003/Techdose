class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double ans =0;
        int back=0;
        for(auto x:brackets){
            int upper = x[0], percent=x[1];
            if(upper>income){
                ans += (income-back)*percent; break;}
            else ans += (upper-back)*percent;
            back = upper;
        }
        return (ans/100);
    }
};