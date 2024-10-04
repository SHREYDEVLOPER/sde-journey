class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long ans=0;
        sort(skill.begin(),skill.end());
        int i=0;
        int j=skill.size()-1;
        set<long long>st;
        long long s=0;
        while(i<j)
        {
          s=skill[i]+skill[j];
          st.insert(s);
          i++;
          j--;
        }
        if(st.size()==1)
        {
         i=0;
        j=skill.size()-1;
        while(i<j)
        {
          ans+=skill[i]*skill[j];
          i++;
          j--;
        }
             return ans;
        }
        else 
        {
          return -1;
        }
        
     
    }
};