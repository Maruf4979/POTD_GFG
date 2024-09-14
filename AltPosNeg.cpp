
// Q. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.

// Date - 14-09-24
    void rearrange(vector<int> &arr) 
    {
      int n=arr.size();
      vector<int>pos;
      vector<int>neg;
    //   sepearting both pos.. and neg..
      for(int i=0;i<n;i++)
      {
          if(arr[i]>=0)
          pos.push_back(arr[i]);
          else if(arr[i]<0)
          neg.push_back(arr[i]);
      }
      int i=0,j=0,k=0;
      int n1=pos.size();
      int n2=neg.size();
      bool flag=true;
      while(i<n1 and j<n2)
      {
         if(flag)
         arr[k++]=pos[i++];
         else
         arr[k++]=neg[j++];
         flag=!flag;
      }
      while(i<n1)
      arr[k++]=pos[i++];
      while(j<n2)
      arr[k++]=neg[j++];
    }

        // ex

// Input: arr[] = [9, 4, -2, -1, 5, 0, -5, -3, 2]
// Output: 9 -2 4 -1 5 -5 0 -3 2
