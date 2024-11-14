class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        //given kya haiu
        // integer array prices
        //single ineteger prices is also given

        //humme 2 choco aise kahridini hai ki jo sum hai voh nonnegative bacche matlab zero se kamna ho
        //ya toh zero rahe,ya usse thoda bada rahei
        //humme total 2 chocolates kahridini hai
        //bina debt mai jaye gue

        int ct=0;
        sort(prices.begin(),prices.end());
        //differnce dekhta jaunga money mere pass hai and jo money left hai

        //pehle corner case handle 
        if (prices.size() < 2 || prices[0] + prices[1] > money) {
            return money;  
        }

        int notused=money;
        int d;
        for(int i=0;i<prices.size();i++)
        {
            d=money-prices[i];
            ct++;
            if(d>=0&&ct==2)
            {
                break;
            }
            money=money-prices[i];
        }
        if(ct==2)
        {
            return d;
        }
        return notused;

    }
};