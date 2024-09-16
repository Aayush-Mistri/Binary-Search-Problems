#include<iostream>
using namespace std;
int binarySearch(int arr[] , int target , int n){
    int low = 0 , high = n-1;
    int mid;
    while (low <= high)     
    {
        mid = (low + high) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target){
            high = mid - 1;
        }
        else if(arr[mid] >= target){
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int arr[5] = { 2 , 4 , 7 , 8 , 10 };
    int n = 5;
    int lb = 5;
    int ans = binarySearch(arr , 7 , n);
    cout<<"The element found at index:"<<ans<<endl;
return 0;
}