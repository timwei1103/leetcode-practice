class Solution {
public:
    int strStr(string haystack, string needle) {
     if(needle.empty())return 0;
     int n = needle.size();
     int j = 0;
        cout<<n;
        if(n>haystack.size())return -1;
        for(int i = 0;i<haystack.size() ; i++)
        {
            while(haystack[i+j]==needle[j]){
                j++;
                if(j==n)
                    return i;
            }
            if(haystack[i+j]!=needle[j])
                j=0;
        }
        return -1;
    }
};
