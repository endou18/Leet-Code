class Solution {
public:
    int maxRepeating(string a, string b) {
        if(a.find(b)==a.length())
        {
            return 0;
        }
        int k=0;
        string str=b;
        while(true)
        {
            if(a.find(str)<a.length())
            {
                str+=b;
                k++;
            }
            else
            {
                break;
            }
        }
        return k;
}
};
// "aaabaaaabaaabaaaabaaaabaaaabaaaaba"