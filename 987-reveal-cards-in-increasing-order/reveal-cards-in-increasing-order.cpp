class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        vector<int>result(n);
        queue<int>jhaat;
        for(int i=0;i<n;i++)
        {
            jhaat.push(i);
        }
        for(int c:deck)
        {
             result[jhaat.front()]=c;
             jhaat.pop();
             if(!jhaat.empty())
             {
                jhaat.push(jhaat.front());
                jhaat.pop();
             }
        }
       return result;
    }
};