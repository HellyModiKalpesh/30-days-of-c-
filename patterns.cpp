#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*for(int i=n;i>=1;i--){

    for(int j=i;j>0;j--){
        cout<<"*";
    }
    cout<<endl;
    }
}*/
//pattern 2//
/*for(int i=1;i<=n;i++){
    for(int k=n-i;k>=0;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}*/
//pattern 3//
/*for(int i=n;i>0;i--){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
}
*/
/*char alphabet='a';
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<alphabet;
        alphabet++;
    }
    cout<<endl;
}
}*/
/*for(int i=1;i<=n;i++){
    for(int k=n-i;k>=0;k--){
        cout<<" ";
    }
    for (int j=1; j<=n;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
}*/
/*for(int i=1;i<=n;i++)
{ int num=1;
    for(int k=n-i;k>=0;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}
}*/
for(int i=1;i<=n;i++){
    for(int k=n-i;k>=0;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=n-1;i>=0;i--){
    for(int k=n-i;k>=0;k--){
        cout<<" ";
    }
    for(int j=i;j>0;j--){
        cout<<"* ";
    }
    cout<<endl;
}
}
