#include<bits/stdc++.h>
using namespace std;

	int findKRotation(int arr[], int n) {
	   int low = 0, high = n-1;
	   
	   while(low<high)
	   {
	       int mid = low+(high-low)/2;
	       
	       if(mid!=0 && arr[mid] <= arr[mid+1] && arr[mid]<arr[mid-1])
	       {
	           return mid;
	       }
	       else if(mid == 0 && arr[mid]>arr[mid+1])
	       {
	           return 1;
	       }
	       else if(arr[mid]<arr[mid+1])
	       {
            low = mid+1;
	           
	       }
	       else{
	           high = mid;
	       }
	   }
	   return 0;
	}

    int main(int argc, char const *argv[])
    {
        int arr[] = {66, 72, 79, 86, 95, 104, 106, 110, 
        119, 123, 124, 129, 132 ,136, 137, 142, 150 ,2 ,12, 14, 17, 26, 30, 36, 38, 46 ,52 ,60};
        cout<<findKRotation(arr,sizeof(arr)/sizeof(int));
        return 0;
    }
    