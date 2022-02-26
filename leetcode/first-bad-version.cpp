class Solution {
public:
    int firstBadVersion(int n) 
    {
        int left = 1;
        int right = n;
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            
            bool first = isBadVersion(mid-1);
            bool second = isBadVersion(mid);
            if(!first && second)
            {
                return mid;
            }
            if(!first)
            {
                left = mid + 1;
            }
            if(second)
            {
                right = mid - 1;
            }
        }
        
        return -1;
    }
};
