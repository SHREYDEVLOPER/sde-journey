class Solution {
public:
        vector<int> rearrangeArray(vector<int>& a) {
        
        int n=a.size();
        for (int i = 1; i < n; i += 2)
        {
            if (a[i - 1] > a[i]) 
			{
                swap(a[i-1],a[i]);
			}
            if (i + 1 < n && a[i + 1] > a[i]) 
			{
                swap(a[i+1],a[i]);
			}
        }
        return a;
    }
};