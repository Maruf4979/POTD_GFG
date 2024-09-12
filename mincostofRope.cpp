// Q. Given an array arr containing the lengths of the different ropes, we need to connect these ropes to form one rope.
  // The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.  
 // Date  11-09-24

   long long minCost(vector<long long>& arr) 
    {
      int n=arr.size();
      priority_queue<long long, vector<long long>, greater<long long>> pq;
      long long cost=0;
      for (int i=0;i<n;i++) 
      { 
        pq.push(arr[i]); 
      } 
        while (pq.size()>=2) 
        {
          long long a=pq.top();
          pq.pop();
          long long b=pq.top();
          pq.pop();
          long long sum=a+b;
          pq.push(sum);
          cost+=sum;
       }
       return cost;
    }

       // ex

// Input: arr[] = [4, 2, 7, 6, 9]
// Output: 62 
// Explanation: First, connect ropes 4 and 2, which makes the array [6, 7, 6, 9]. Cost of this operation 4 + 2 = 6. 
// Next, add ropes 6 and 6, which results in [12, 7, 9]. Cost of this operation 6 + 6 = 12.
// Then, add 7 and 9, which makes the array [12,16]. Cost of this operation 7 + 9 = 16. And
// finally, add these two which gives [28]. Hence, the total cost is 6 + 12 + 16 + 28 = 62.
