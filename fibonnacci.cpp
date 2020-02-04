#include <iostream>
using namespace std;
//recursion
int fib(int n){
    if(n==0|| n==1){
        return n;
    }
    return fib(n-1) + fib(n-2); 
}

//top downappoach = recursion+ memonization
int fibdp(int n, int *dp){
    if(n==0||n==1){
        dp[n]=n;
        return n;
    }
    //Already computes 
if(dp[n]!=-1){
    return dp[n];

}
else{
    //compute and store it
     dp[n] = fibdp(n-1,dp)+fibdp(n-2,dp);
     return dp[n];
}

}


int main() {
    cout<<fib(8)<<endl;

   int dp[100];
   for(int i=0;i<100;i++){
       dp[i] = -1;
   } 
   cout<<fibdp(8,dp)<<endl;
   
}
