class Solution {
public:
    string removeOccurrences(string s, string part) {
        int f=0;
        while(f>=0){
            f=s.find(part);
            if(f<0)break;
            s.erase(f,part.size());
        }
        return s;
    }
};