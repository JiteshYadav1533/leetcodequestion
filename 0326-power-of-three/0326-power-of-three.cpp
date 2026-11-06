class Solution {
public:
    bool isPowerOfThree(int n) {
        for (int i=0;i<30;i++){
            long long ans =pow(3,i);
            if(ans==n){
                return 1;
            }
        }
        return 0;
    }
};