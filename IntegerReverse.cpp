#include <iostream>
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int last = 0;
        while(x != 0)
        {
            last = x % 10;
            if((result >= 214748365 || result <= -214748365) 
                    || (result == 214748364 && (last > 7 || last < -8)))
            {
                result = 0;
                break;
            }
            result = result * 10 + last;
            std::cout << "result " << result << std::endl;
            x = x / 10;
        } 
        
        return x >= 0? result : -result;
    }
};

int main()
{
	Solution solution;
	std::cout << solution.reverse(-2147483648) << std::endl;
}
