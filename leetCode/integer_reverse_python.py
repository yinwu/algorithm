class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x >=0:
            val = int(str(x)[::-1])
        else:
            val = -int(str(-x)[::-1])

        if (-2 ** 31)<= val <= (2 ** 31 - 1):
            return val
        else: 
            return 0
