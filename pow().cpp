class Solution {
public:
    double myPow(double x, int n) {
        int i=0;
        double product=1.0;
        if(n>0){
            while(i<n){
            product=product*x;
            i++;
            }
            }
        else if(n==0){
                return 1;
            }
        else if(n<0){
            while(i>n){
            product=product*(1/x);
            i--;

            }
            }
        
   return product; }
};
