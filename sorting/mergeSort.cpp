#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low, int mid, int high){
    int left = low;
    int right = mid+1;

    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
        while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void sort(vector<int> &arr,int low,int high){
    if(low>=high) return;
    int mid = low + (high-low)/2;
    sort(arr,low,mid);
    sort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    sort(arr,0,n-1);
    cout<<endl;
    cout<<"After sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}






// Bubble sort -> take an element & place in its correct position



