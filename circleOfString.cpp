// Q.Given an array arr of lowercase strings, determine if the strings can be chained together to form a circle.
 // Date - 10-09-24

int isCircle(vector<string> &arr) 
    {
        int n = arr.size();
        vector<int> visited(n,0);
        vector<int>indegree(26,0);
        vector<int>outdegree(26,0);
        unordered_map<char,vector<int>>mp;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            indegree[arr[i][0]-'a']++;
            outdegree[arr[i].back()-'a']++;
            mp[arr[i][0]].push_back(i);
        }
        for(auto x:mp)
        {
            if(indegree[x.first-'a']!=outdegree[x.first-'a'])
            return 0;
        }
        q.push(0);
        visited[0]=1;
        int ans = 1;
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            for(auto x:mp[arr[temp].back()])
            {
                if(!visited[x])
                {
                    ans++;
                    visited[x]=1;
                    q.push(x);
                }
            }
        }
        if(ans==n)
        return 1;
        else 
        return 0;
    }

      // ex

// Input: arr[] = ["ab" , "bc", "cd", "da"]
// Output: 1
// Explaination: These strings can form a circle of strings.
