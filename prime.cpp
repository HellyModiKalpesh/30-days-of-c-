/*#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i;
for(int i=2;i<n;i++){

if(n%i==0){
    cout<<"non prime"<<endl;
    break;
}
}
if(i==n){
cout<<"prime no"<<endl;
}return 0;

}
/* check a number is prime or not*/
/*#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=1;
            cout<<"not a prime no";
            break;
        }
        if(flag==0){
            cout<<"primr no";
        }
    }
}
/*print a prime no between two number*/
/*#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a;
    int b;
    int i;
    cin>>a;
    cin>>b;
    
    while(a<b){
        bool flag=0;
    for(i=2;i<=a/2;++i){
        if(a%i==0){
        flag=1;
        break;
    }
    }
    if(flag==0)
        cout<<a<<" ";
        ++a;
    }
    cout<<endl;
    
    return(0);
}*/
/* print a prime no between two no by using funcction*/
#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
}