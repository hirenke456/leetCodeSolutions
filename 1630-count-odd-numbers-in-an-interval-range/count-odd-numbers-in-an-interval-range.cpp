class Solution {
public:
    int countOdds(int low, int high) {
        if(low>=0&&high<=1000000000)
        {
            if(low%2==0&&high%2==0)
            {
                return (high-low)/2;
            }
            else
            {
                return ((high-low)/2)+1;
            }
        }
        return 0;
    }
};