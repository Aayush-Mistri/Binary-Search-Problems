#include<iostream>
using namespace std;
int lowerBound(int arr[] , int target , int n){
    int low = 0 , high = n - 1;
    int mid;
    int ans = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    int arr[5] = { 2 , 4 , 7 , 8 , 10 };
    int n = 5;
    int lb = 5;
    int ans = lowerBound(arr , lb , n);
    cout<<"The lower bound for following array is :"<<ans<<endl;
return 0;
}