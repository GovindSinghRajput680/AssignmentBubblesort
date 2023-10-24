#include<iostream>
#include<algorithm>
using namespace std;
int main(){// Q 4
    int n ;
cout<<"Enter number of elements in array : ";
cin>>n;
int arr[n];
cout<<"Enter Elements of array : ";
for(int i = 0;i<n;i++){
cin>>arr[i];
}
for(int i =0;i<n-1;i++){
    bool check = true;
    for(int j =0;j<n-1-i;j++){
        if(arr[j+1]>arr[j]) {swap(arr[j+1],arr[j]);
        check = false;}
    }
    if(check) break;
}
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}
//Q 5
int m ;
cout<<"Enetr number of elements in array : ";
cin>>m;
cout<<"Enter elements of the array : ";
int brr[m];
for(int i =0;i<m;i++) cin>>brr[i];

bool remark = false;
for(int i =0;i<m-1;i++){
    if(brr[i+1]>brr[i]) remark = true;

if (remark) {cout<<"NO";
            break;}
        
}
if (!remark) cout<<"YES";
}