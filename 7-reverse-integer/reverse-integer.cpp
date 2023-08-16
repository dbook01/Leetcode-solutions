class Solution {
public:
    int reverse(int x) {
       long digit=0,sum=0;
      //  if(x<0){
         
      //    x*=-1;
      //  }

       
       while( x!= 0){
           digit = x%10;
           if((sum > INT_MAX/10) || (sum < INT_MIN/10)){
         return 0;
       }
           sum= (sum*10)+digit;
           x/=10;
       } 
       
       
       return  sum;
    }
};