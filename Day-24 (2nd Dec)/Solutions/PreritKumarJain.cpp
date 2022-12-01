class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        int c=0,m=0;
        for(int i=0;i<s.length()/2;i++) {
            if(st.find(s[i]) != st.end())
                c++;
        }
        for(int i=s.length()/2;i<s.length();i++) {
            if(st.find(s[i]) != st.end())
                m++;
        }
        if(c==m)
            return true;
        else
            return false;
    }
};