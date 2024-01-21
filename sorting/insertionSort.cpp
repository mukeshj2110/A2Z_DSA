#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        int j= i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

// {13,46,24,52,20,9}
// {6,5,3,4,2,1}
// {100,406,204,5,2,9}
// {1}
// {2,1}
int main(){
    int n;
    vector<int> arr={100,406,204,5,2,9};
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






// Bubble sort -> take an element & place in its correct position



