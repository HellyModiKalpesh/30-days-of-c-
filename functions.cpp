/*print fibonnaci series*/
/* for ex:-0,1,1,2,3,5,8*/
#include<iostream>
using namespace std;
/*
void fib(int n){

    int t0=0;
    int t1=1;
    int nextterm;

    for(int i=1;i<=n;i++){
        cout<<t0<<endl;
        nextterm=t0+t1;
        t0=t1;
        t1=nextterm;
    }
    return ;
}

int main(){
int n;
cin>>n;


fib(n);

return 0;
}*/
//factorial of a number

/*int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
    
}

int main(){
    int n;
    cin>>n;
    int answer= fact(n);
    cout<<answer;
}*/
//find nCr//
//formula=n!/r!*(n-r!)
int fact(int n){
int factorial=1;
for(int i=2;i<=n;i++){
    factorial=factorial*i;
}
return factorial;
}

int main(){
    int n,r;
    cin>>n>>r;
    int answer= fact(n)/(fact(r)*fact(n-r));
    cout<<answer;
}