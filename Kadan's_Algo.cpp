// Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) 
    {
      long long sum=0;
      long long maxi=arr[0];
      int n=arr.size();
      if(n==1)
      return maxi;
      for(int i=0;i<n;i++)
      {
         sum+=arr[i];
         maxi=max(maxi,sum); 
         if(sum<0)
          sum=0;
      }
      return maxi;
    }
    //   ex
// Input: arr[] = [1, 2, 3, -2, 5]
// Output: 9
// Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.