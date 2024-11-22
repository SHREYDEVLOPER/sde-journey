class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<int>st;
        for(int i=1;i<arr.size();i++)
        {
            int d=arr[i]-arr[i-1];
            st.insert(d);
        }
        if(st.size()==1)
        {
            return true;
        }
        return false;
    }
};