      
  //  Q.  Find the minimum number of jumps to reach the end of the array starting from the first element. If an element is 0, then you cannot move through that element. 

  // Date ---> 08-09-24

int minJumps(vector<int>& arr) 
{
    int n = arr.size();
    if (n == 1) return 0;
    if (arr[0] == 0) return -1;
    int farthest = 0;
    int currentEnd = 0;
    int jumps = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        farthest = max(farthest, i + arr[i]);
        if (i == currentEnd) 
        {
            jumps++;
            currentEnd = farthest;
            if (currentEnd >= n - 1)
                return jumps;
        }
        if (farthest <= i)
            return -1;
    }
    return -1;
    }

                   //  ex 
//  Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
//  Output: 3  
 // Explanation:First jump from 1st element to 2nd element with value 3. From here we jump to 5th element with value 9, and from here we will jump to the last.  
