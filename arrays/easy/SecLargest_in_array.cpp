#include<bits/stdc++.h>
using namespace std;

//Brute: sort the array and return the second last index element -> tC -> O(NlogN)
//better: In first traverse get the largest & then in second traverse secL = -1 -> if arr[i]>secL && arr[i]!=largest -> secL = arr[i]; -> O(2N)
//Optimal: Traverse the array and 
            // 1) if arr[i] is greater than maxi -> secL = maxi && maxi=arr[i];
            // 2) else if arr[i]<maxi && arr[i]< secL -> secL = arr[i];

int fnBrute(vector<int> &arr){
    int n = arr.size();
    if(n<=1){
        cout<<"no second largest";
        return 0;
    }
    sort(arr.begin(),arr.end());
    return arr[n-2];
}

int fnBetter(vector<int> &arr){
    int n = arr.size();
    int maxi = -1;
    int secL =-1;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secL && arr[i]!=maxi){
            secL = arr[i];
        }
    }
    return secL;
}

int fnOptimal(vector<int> &arr){
    int n = arr.size();
    int maxi = arr[0];
    int sec = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){\
            sec= maxi;
            maxi = arr[i];
            
        }else if(arr[i]<maxi && arr[i]>sec){
            sec = arr[i];
        }
        
    }
    return sec;
}
int main(){
    vector<int> arr ={1,2,3,4,5,6};
    //{1} {2,4,6,7,1,1,3,4,10,2} {1,1,2,3,3,5,6} {1,2,3,4,5,6} {2,77,3,1,9,9,77,101}
    int slargest =fnBrute(arr);
    // int slargest =fnOptimal(arr);
    // int slargest =fnBetter(arr);
    cout<<"second Largest: "<<slargest<<endl;
    return 0;
}