  // Date - 09-09-24
// Q. Given an array arr containing only 0s, 1s, and 2s. Sort the array in ascending order.
       //  Method 1
void swap(int *x,int *y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }

    void sort012(vector<int>&arr)
    {
        // code here 
        int n=arr.size();
        int l=0;
        int h=n-1;
        int current=0;
        while(current<=h){
            if(a[current]==0){
                swap(&a[current],&a[l]);
                current++;
                l++;
            }
            else if(a[current]==2){
                swap(&a[current],&a[h]);
                h--;
            }
            else
                current ++;
        }
    }


        // method 2
    void sort012(vector<int>& arr) 
    {
        // code here
        sort(arr.begin(),arr.end());
    }

    // ex

// Input: arr[]= [0, 2, 1, 2, 0]
// Output: 0 0 1 2 2
// Explanation: 0s 1s and 2s are segregated into ascending order.
