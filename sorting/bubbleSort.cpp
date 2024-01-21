#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

// {13,46,24,52,20,9}
// {6,5,3,4,2,1}
// {100,406,204,5,2,9}
int main(){
    int n;
    vector<int> arr={6,5,3,4,2,1};
    n = arr.size();
    cout<<"before sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,n);
    cout<<endl;
    cout<<"After sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}






// Bubble sort -> pushing the max element to the last by adjacent swap




