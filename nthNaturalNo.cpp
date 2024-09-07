// Q.   You have to find nth natural number after removing all the numbers containing the digit 9.
        //    Approach
//   converting into 9 base system -->(0,1,2,3,4,5,6,7,8) will present only

     // Maruf's code
    long long findNth(long long n) 
    {
        long long ans=0;
        long long place=1;
        while(n!=0)
        {
            long long dig=n%9;
            ans+=place*(dig);
            n/=9;
            place*=10;
        }
        return ans;
    }

             //  ex
// Input: n = 9
// Output: 10
// Explanation: After removing natural numbers which contains digit 9, first 9 numbers are 1,2,3,4,5,6,7,8,10 and 9th number is 10.
