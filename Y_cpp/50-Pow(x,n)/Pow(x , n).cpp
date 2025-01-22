class Solution {
public:
    double myPow(double x, int n) {
        long binform = n;
        double ans = 1;
        //Corner Cases
        if(n==0) return 1.0;
        if(x==0) return 0.0;
        if(x==1) return 1.0;
        if(x==-1 && n%2==0) return 1.0;
        if(x==-1 && n%2!=0) return -1.0;



        if(n < 0){
            x = 1/x;
            binform = -binform;
        }
        while(binform > 0){
            
            if(binform %2 == 1){
                ans *= x;
            }
            x *= x;
            binform /= 2;
        }
    return ans;
//Time Complexity = O(logn)




//TLE (worstest)
    //     double ans = 0;
    //     if(n>0){
    //        ans = pow(x,n);
    //     }
    //     else if(n<0){
    //         n = -1 * n;
    //         ans = 1/pow(x,n);
    //     }
    //     else if(x==0){
    //         ans = 0;
    //     }
    //     else{
    //         ans = 0;
    //     }
    //     return ans;
    }
};