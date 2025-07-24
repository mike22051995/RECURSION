#include<iostream>
#include<vector>

using namespace std;
double power(double x, long long n){
    if(n==0){
        return 1;
    }
    double Xn=power(x,n/2);
    double ans=Xn*Xn;
    if(n%2!=0){
        ans=ans*x;
    }
    return ans;
}
double MyPow(double x, int n){
    long long N=n;
    if(n<0){
        x=1/x;
        N=-N;
    }
    return power(x,N);

}


    // if(n%2==0){
    //     return power(x,n/2)*power(x,n/2);
    // }
    // else{
    //     return x*power(x,n/2)*power(x,n/2);
    // }


int main(){
    cout<<MyPow(3,4);
    return 0;
}