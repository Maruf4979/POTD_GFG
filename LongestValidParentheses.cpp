// Q.Find length of the longest valid parenthesis substring.
// Date : 16-09-2024

int maxLength(string s)
{
    int max_len = 0;
    stack<int>st;
    st.push(-1);
    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == '(') 
            st.push(i); 
        else 
        {
            st.pop(); 
            if (!st.empty()) 
                max_len = max(max_len, i - st.top()); 
            else
                st.push(i); 
        }
    }
    return max_len;
}
            // ex
// Input: str = )()())
// Output: 4
// Explaination: The longest valid parenthesis substring is "()()".
