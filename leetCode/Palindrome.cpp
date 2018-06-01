class Solution {
public:
    bool isPalindrome(int x) {
        int i = x;
        std::vector<int> tmp;
        if(x < 0) return false;
        while(i)
        {
            tmp.push_back(i % 10);
            i = i / 10;
        }
        for(i = 0;  i < tmp.size()/2; i++)
        {
            if(tmp[i] != tmp[tmp.size()-1-i])
                return false;
        }
        return true;
    }
};
