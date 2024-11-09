class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ct=0;
         //arr[i]&&arr[i-1]
         //arr[i]&&arr[i+1]
         int flag=0;
        for(int i=1;i<arr.size()-1;i++)
        {
              int a=arr[i-1];
              int b=arr[i];
              int c=arr[i+1];
              if((a%2!=0)&&(b%2!=0))
              {
                if((b%2!=0)&&(c%2!=0))
                {
                    flag=1;
                    break;
                }

              }
        }
        return flag==1;
    }
};