#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}
void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void print6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void print9(int n){
    print7(n);
    print8(n);
}
void print10(int n){
    for(int i=0;i<n;i++){
        if(i<=n/2){
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
        }else{
            for(int j=0;j<n-i;j++){
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
}
int main(){
    //print1(5);
    // print2(3);
    // print3(3);
    // print4(5);
    // print5(3);
    // print6(3);
    // print7(5);
    // print8(5);
    // print9(5);
    print10(5);
    return 0;
}