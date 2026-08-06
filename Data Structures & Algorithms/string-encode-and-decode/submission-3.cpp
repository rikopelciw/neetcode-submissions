class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (int i = 0; i < strs.size(); i++) {
            result += '#';
            result += to_string(strs[i].length());
            result += '#';
            result += strs[i];
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> v;
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '#') {
                string num = "";
                while (i + 1 < s.length() && isdigit(s[i+1])) {
                    num += s[i+1];
                    i++;
                }
                if (num == "")
                    continue;
                int len = stoi(num);
                if (len)
                    i++;
                i++;
                for (int j = 0; j < len; j++) {
                    temp += s[i];
                    i++;
                }
                i--;
                v.push_back(temp);
                temp = "";
            }
        }
        return v;
    } 
       
};
