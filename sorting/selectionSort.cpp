#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]) mini =j;
        }
        swap(arr[mini],arr[i]);
        cout<<"["<<i<<","<<mini<<"]"<<endl;
    }
}

int main(){
    int n;
    vector<int> arr={13,46,24,52,20,9};
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






// selection sort -> select min & swap so that min comes to left 

// Dry Run

// [13,46,24,52,20,9] 

// s1-> [13,46,24,52,20,9]  9 is min , in first iteration of outer for loop from 13 -> 9 found min as 9 store the min index & swap 13 & 9 ()
//        |             |
//        swap         swap
// s2 -> [9,46,24,52,20,13]  13 is min , in second iteration of outer for loop from 46 -> 13 found min as 13 store the min index & swap 13 & 46
//           |           |
//           swap       swap
// s3 -> [9,13,24,52,20,46]  20 is min , in second iteration of outer for loop from 24 -> 46 found min as 20 store the min index & swap 24 & 20
//             |      |
//             swap  swap
// s4 -> [9,13,20,52,24,46]  24 is min , in second iteration of outer for loop from 52 -> 46 found min as 24 store the min index & swap 24 & 52
//                 |  |
//              swap  swap
// s5 -> [9,13,20,24,52,46]  46 is min , in second iteration of outer for loop from 52 -> 46 found min as 46 store the min index & swap 46 & 52
//                   |  |
//                swap  swap
// s6 -> [9,13,20,24,46,52]  final result as sorted array

// 6 element -> 5 swaps we will run the outer for loop till n-2 , coz last index will already be sorted



