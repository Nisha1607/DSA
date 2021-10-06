Q 1 .Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S .
 
 Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.

vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> v;
        int sum_till_now=arr[0];
        int j=0;
        for(int i=1;i<=n;i++)
        {
            while(sum_till_now>s&&j<=i)
            {
                sum_till_now-=arr[j];
                j++;
            }
            if(sum_till_now==s)
            {
                v.push_back(j+1);
                v.push_back(i);
                return v;
            }
            if(i<n)
            sum_till_now+=arr[i];
        }
        v.push_back(-1);
        return v;
    }
