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
