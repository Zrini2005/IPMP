class Solution {
public:
    string largestGoodInteger(string num) {
        char maxChar = '\0';  
        for (int i = 0; i + 2 < num.size(); i++) {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
                if (num[i] > maxChar) {
                    maxChar = num[i];
                }
            }
        }
        if (maxChar == '\0') {
            return "";  
        } else {
            return string(3, maxChar);
        }
    }
};
