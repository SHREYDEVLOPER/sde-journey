class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int longg=0;
        int l,r;
        if(n<3)
        {
            return 0;
        }
        for(int i=1;i<n-1;i++)
        {
            l=i-1;
            r=i+1;
            if(arr[i]>arr[i-1]&&arr[i+1]<arr[i])
            {
                while(l>0&&arr[l]>arr[l-1])
                {
                    l--;
                }
                while(r<n-1&&arr[r]>arr[r+1])
                {
                    r++;
                }
                int cl=r-l+1;
                longg=max(longg,cl);
            }
        }
        return longg;
    }
};