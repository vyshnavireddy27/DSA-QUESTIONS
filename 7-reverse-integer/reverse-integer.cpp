class Solution {
public:
    int reverse(int x) {
        long long sign = 1;
        if(x < 0)
            sign = -1;
        long long a = x;
        if(a < 0){
            a = -a;
        }
        long long ore=0;
        while(a > 0){
            int digit = a % 10;
            ore = ore*10 + digit;
            a = a / 10;                
        }
        ore = ore*sign;
        if(ore > INT_MAX || ore < INT_MIN){
            return 0;
        }
        else{
            return ore;
        }
    }

};