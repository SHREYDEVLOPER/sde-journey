class Solution {
public:
    bool isValid(string s) {
        //valid kab hai koi string
        //starting from the empty string
        //after perfroming any number of times
        //insert abc to any position in t
        //t=tleft+tright
        stack<char>st;
        for(char c:s)
        {
            st.push(c);
            if(st.size()>=3)
            {
                char th=st.top();
                st.pop();

                char se=st.top();
                st.pop();

                char fr=st.top();
                st.pop();
                if(fr=='a'&&se=='b'&&th=='c')
                {
                    //yha iski maa chudegi matlanb substring valid hai
                }
                else{
                    st.push(fr);
                    st.push(se);
                    st.push(th);
                }

            }
        }
        return st.empty();
        
    }
};