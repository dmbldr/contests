class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end = letters.size();
        char result;
        
        if(target >= letters[end - 1])
        {
            return letters[0];
        }
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(letters[mid] <= target)
            {
                start = mid + 1;
            }
            if(letters[mid] > target)
            {
                result = letters[mid];
                end = mid - 1;
            }
        }
        return result;
    }
};
