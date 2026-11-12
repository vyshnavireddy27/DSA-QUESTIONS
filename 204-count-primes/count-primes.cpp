class Solution {
public:
    int countPrimes(int n) {
        vector<bool>b(n+1,true);
        int count = 0;
        if(n <= 1){
            count = 0;

            
        }
        for(int i=2; i*i<=n ;i++){
            if(b[i] == true){
                for(int j=i*i; j<=n; j+=i){
                   b[j] = false;
                }
            }
        }
        for(int i=2; i<n; i++){
            if(b[i] == true ){
                count+=1;
            }
        }
        return count;
    }
};