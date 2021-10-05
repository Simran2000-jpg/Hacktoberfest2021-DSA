/*
For an integer N find the number of trailing zeroes in N!.

Example 1:

Input: N = 5
Output: 1
Explanation: 5! = 120 so the number of trailing zero is 1.

Example 2:

Input: N = 4
Output: 0
Explanation: 4! = 24 so the number of trailing zero is 0.

Your Task:  
You don't need to read input or print anything. 
Your task is to complete the function trailingZeroes() which take an integer N as an input parameter and returns the count of trailing zeroes in the N!.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int cnt = 0;
        while(n)
        {
            n /= 5;
            cnt += n;
        }
        cout << cnt << endl;
    }
    return 0;
}
