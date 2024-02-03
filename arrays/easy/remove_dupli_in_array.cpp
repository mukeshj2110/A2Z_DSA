#include<bits/stdc++.h>
using namespace std;

//Brute:  1) put the arr into set ds  get ize of set in k
        //   2)  traverse till k and put back all elements from set to arr till K;
        //  tC -> O(NlogN)[insert in set] + O(N) [put back to arr]
//Optimal: 2 Ptr approach 
            // take i & place it on arr[0] & start j from 1st index;
            // check the element who is not equivalent and replace it at index i+1 & move i ptr; 
        //  -> tc-> O(N)


int fnBrute(vector<int> &arr){
    int n = arr.size();
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int i=0;
    int k = s.size();
    for(int it : s){
        arr[i] = it;
        i++;
    }
    return k;
}

int fnOptimal(vector<int> &arr){
    int n = arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
void pf(vector<int> &arr,int k){
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr ={1,1,2,3,3,5,6};
    //{1} {2,4,6,7,1,1,3,4,10,2} {1,1,2,3,3,5,6} {1,2,3,4,5,6} {2,77,3,1,9,9,77,101}
    // int k= fnBrute(arr);
    int k =fnOptimal(arr);
    cout<<k<<endl;
    pf(arr,k);
    return 0;
}