class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt=count(s.begin(),s.end(),letter);
        int result=(cnt*100)/s.size();
        return result;
    }
};