class Solution {
public:
    int splitNum(int num) {
        vector<int>n;
        int n1;
        int n2;
        int s=0;
        while(num>0)
        {
          int rem=num%10;
          n.push_back(rem);
          num=num/10;
        }
        sort(n.begin(),n.end());

        string nh;
        string nhh;
        for(int i=0;i<n.size();i=i+2)
        {
          nh+=to_string(n[i]);
        }
        for(int i=1;i<n.size();i=i+2)
        {
          nhh+=to_string(n[i]);
        }
        n1=stoi(nh);
        n2=stoi(nhh);
        return n1+n2;
        

    }
};