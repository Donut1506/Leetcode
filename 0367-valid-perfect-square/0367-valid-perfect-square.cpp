class Solution {
public:
    bool isPerfectSquare(int num)
    {
       
        for(int i =1; num > 0; )
        {
            num = num - i;
            i = i + 2;
        }
        
        return num == 0;
    }
};