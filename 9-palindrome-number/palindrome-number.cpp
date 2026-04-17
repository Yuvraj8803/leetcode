class Solution {
public:
    bool isPalindrome(int x) {
        int m=x;
        long long int pal=0;
        while(x>0){
            int d=x%10;
            pal=pal * 10 + d;
            x=x/10;
        }
        if(x<0){
           return false;
        }
        if(pal==m){
            return true;
        }
        else{
           return false;
        }
    }
};