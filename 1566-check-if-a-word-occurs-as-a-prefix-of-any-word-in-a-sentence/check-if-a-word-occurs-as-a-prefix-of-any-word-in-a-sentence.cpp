class Solution {
public:
    int isPrefixOfWord(string sent, string sw) {
        //what question is asking
        //question bol rha hai ke
        //jo search word de rakha hai
        //vo string mai hai ya mahi

        //pehle semtemce ko ek vector mai daal le

        vector<string>temp;
        string supp;
        for(auto& i:sent)
        {
            if(i==' ')
            {
              temp.push_back(supp);
              supp.clear();
            }
            else
            {
                supp+=i;
            }
        }

        if(!supp.empty())
        {
            temp.push_back(supp);
        }

        int ind=-1;
        int flag=0;

        for(int i=0;i<temp.size();i++)
        {
            string loda=temp[i];
            if(loda.find(sw)==0)
            {
                ind=i;
                flag=1;

                break;
            }
        }
        if(flag==1)
        {
            return ind+1;
        }
        return ind;
        
     }
};