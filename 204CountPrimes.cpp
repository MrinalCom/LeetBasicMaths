class Solution {
public:
    bool isPrime(int n){
        if(n<=1) 
            return false;
        for(int i=2;i<n;i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    int countPrimes(int n) {
        int c=0;
        for(int i=0;i<n;i++){
            if(isPrime(i)){
                ++c;
            }
        }
        return c;
    }
};
