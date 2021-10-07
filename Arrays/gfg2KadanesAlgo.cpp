Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
  
method - I) 
  long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long curr_sum=0,max_sum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            curr_sum=0;
           for(int j=i;j<n;j++)
           {
               curr_sum+=arr[j];
               max_sum=max(max_sum,curr_sum);
           }
        }
        return max_sum;
}

TC - O(n2)
SC - O(1)
  
  
  
method - II) 
 long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long curr_sum=0,max_sum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            curr_sum+=arr[i];
            max_sum=max(max_sum,curr_sum);
            if(curr_sum<0)
                curr_sum=0;
        }
        return max_sum;
    }

TC - O(n)
SC - O(1)
