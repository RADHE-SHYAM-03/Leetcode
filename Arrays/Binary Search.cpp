class Solution {
public:
    int search(vector<int>& arr, int k) {
     int n = arr.size()-1;
     int s=0;
     int  e=n;
     int mid=s+(e-s)/2;
    while(s<=e){
         if(arr[mid]==k){
             return mid;
         }
         if(arr[mid]>k){
             e=mid-1;
         }
         else{
             s=mid+1;
         }
         mid=s+(e-s)/2;
        
     }
        return -1;
    }
};
