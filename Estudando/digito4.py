# User function Template for python3

class Solution:
    res = 0

    def countNumberswith4(self, N):
        if '4' in str(N):
            self.res += 1
        else:
            return self.countNumberswith4(N-1)
        return self.res

# {
#  Driver Code Starts
# Initial Template for Python 3


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())

        ob = Solution()
        print(ob.countNumberswith4(N))
# } Driver Code Ends
