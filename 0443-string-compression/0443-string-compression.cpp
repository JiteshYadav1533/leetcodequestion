class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansindex=0;
        int n = chars.size();
        while(i<n){
            int j=i+1;
            while(j<n  &&  chars[i]==chars[j]){
                j++;
            }
            chars[ansindex++]=chars[i];
            int count=j-i;
            if(count>1){
                string cnd=to_string(count);
                for(char ch:cnd){
                    chars[ansindex++]=ch;
                }
            }
            i=j;
        }
        return ansindex;
    }
};