class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        //iss question ko simple priority queue se karene
        //pehle saaare words ki length nikalenege
        //uske baad unke pair bnakar priority queue mai daalenege
        //phir uske baad jo common hai unhe ad
        unordered_map<string,int>mp;//done to count worrd count of each sender
        for(int i=0;i<messages.size();i++)
        {
            string messg=messages[i];
            int ct=0;


            for(int j=0;j<messg.size();j++)
            {
                 if(messg[j]==' ')
                 {
                    ct++;
                 }
            }
             ct++;

             mp[senders[i]]+=ct;

        }
        priority_queue<pair<int,string>>pq;
        for(auto&[sender,count]:mp)
        {
            pq.push({count,sender});
        }

        pair<int,string>pp=pq.top();
        return pp.second;
       
    }
};