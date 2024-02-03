#include<bits/stdc++.h>
using namespace std;

//Brute: start from ind 1 and check for prev index 
//            if prev greater than current index return false else after loop end return true as everything is sorted -> tC -> O(NlogN)



bool fnBrute(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        cout<<arr[i-1]<<" "<<arr[i]<<endl;
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}

int main(){
    vector<int> arr ={1,2,3,4,5,6};
    //{1} {2,4,6,7,1,1,3,4,10,2} {1,1,2,3,3,5,6} {1,2,3,4,5,6} {2,77,3,1,9,9,77,101}
    bool sorted =fnBrute(arr);

    cout<<"Sorted/Not: "<<sorted;
    return 0;
}