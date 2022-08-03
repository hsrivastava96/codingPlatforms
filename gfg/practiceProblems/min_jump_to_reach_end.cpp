



    int max(int a, int b)
    {
        if(a > b)
            return a;
        return b;
    }
    int minJumps(int arr[], int n)
    {
        // Your code here
        if(n == 1)
            return 0;
        if(arr[0] == 0)
            return -1;
        else
        {
            int step = arr[0], maxReach = arr[0], j = 1;
            for(int i = 1; i < n; i++)
            {
                if(i == n-1)
                    return j;

                maxReach = max(maxReach, arr[i] + i);    
                step--;
                
                if(step == 0)
                {
                    j++;
                    if(maxReach <= i)
                        return -1;
                    step = maxReach - i;
                }
            }
            return j;
        }
    }
