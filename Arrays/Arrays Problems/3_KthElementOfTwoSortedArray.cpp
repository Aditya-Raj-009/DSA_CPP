 #include<bits/stdc++.h>
 using namespace std;

    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    { 
        int i = 0,j=0,posNumber=0;
        while(i<n && j<m)
        {
            if(arr1[i]<=arr2[j])
            {
                
                k--;
                if(k==0)
            {
                posNumber= arr1[i];
                break;
            }
            i++;
            }
            else{
                
                k--;
                if(k==0)
            {
                posNumber= arr2[j];
                break;
            }
            j++;
            }
            
        }
        return posNumber;
    }

    int main(int argc, char const *argv[])
    {
      int  arr1[] = {12,15,18,19,20};
      int  arr2[] = {10,12,13,17};
      cout<<kthElement(arr1,arr2, sizeof(arr1)/sizeof(int),sizeof(arr2)/sizeof(int),5)<<endl;
        return 0;
    }
    