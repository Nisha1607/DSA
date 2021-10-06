Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
  
Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 2
Explanation: There are 2 triplets: 
1 + 2 = 3 and 3 +2 = 5 
  
  method-I 
  
  	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int> umap;
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        umap[arr[i]]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            int sum=(arr[i]+arr[j]);
	            if(umap.find(sum)!=umap.end())
	                cnt++;
	        }
	    }
	    return cnt;
	}

TC - O(n2)
SC - O(n)
  
Method 2
 	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	    int cnt=0;
	    for(int i=n-1;i>=0;i--)
	    {
	       int j=0,k=i-1;
	       while(j<k)
	       {
	           if(arr[j]+arr[k] == arr[i]){
	                cnt++;
	                k--;
	                j++;
	           }
	           else if(arr[j]+arr[k] > arr[i])
	                k--;
	           else
	                j++;
	       }
	    }
	    return cnt;
	}
TC - O(n2)
SC - O(1)
