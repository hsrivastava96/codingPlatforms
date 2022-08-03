/*
    Algo:
    The number's digit sum wil either repeat it's previously generated digit sq sum or will get to 1
*/

class Solution {
public:
    int digSqSum(int n)
    {
        int sum = 0;
        while(n != 0)
        {
            int rem = n%10;
            n = n/10;
            sum+=(rem*rem);
        }
        return sum;
    }
    bool isHappy(int n) 
    {
        int dSum = n;
        unordered_set<int> us;
        us.insert(dSum);
        while(true)
        {
            dSum = digSqSum(dSum);
            if(dSum == 1)
                return true;
            if(us.find(dSum) != us.end())
                return false;
            else
                us.insert(dSum);
        }
    }
};