class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        bool checker = false;
        // start the loop from the end of the string
        // then, count the length of the word until it encounters a space
        for (int i = (int) s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                cnt++;
                checker = true;
            } else if (s[i] == ' ' && checker) {
                break;
            }
        }
        return cnt;
    }
};
