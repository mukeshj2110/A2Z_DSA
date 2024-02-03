#include<bits/stdc++.h>
using namespace std;

//Brute: sort the array and return the lat index element -> tC -> O(NlogN)
//Optimal: Traverse the array and if arr[i] is greater than maxi variable then update maxi , set maxi to INT_MIN at start -> tc-> O(N)


int fnBrute(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

int fnOptimal(vector<int> &arr){
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        
    }
    return maxi;
}
int main(){
    vector<int> arr ={2,3,6,77,9,1};
    int largest =fnBrute(arr);
    // int largest =fnOptimal(arr);
    cout<<"Largest: "<<largest;
    return 0;
}