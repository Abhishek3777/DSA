class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = 0;
        int n = s.size();

        while (i < s.size()) {
            string temp = "";
            // gaps
            while (i < n && s[i] == ' ')
                i++;
            // some character
            while (i < n && s[i] != ' ') {
                temp += s[i];
                i++;
            }
            if (temp.size() > 0) {
                if (ans.size() == 0) {
                    ans = temp;
                    i++;
                } else {
                    ans = temp + ' ' + ans;
                    i++;
                }
            }
        }

        return ans;
    }
};