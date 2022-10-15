class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a=coordinates[0]-'a';
        int b=coordinates[1]-'0';
        if(a&1 && b&1)return true;
        if(!(a&1) && !(b&1))return true;
        return false;
    }
};