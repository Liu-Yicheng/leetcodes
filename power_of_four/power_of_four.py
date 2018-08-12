class Solution:
	def func(self, n):
		num = bin(n)
		print(num)
		print(len(num[2:]),num.count('0'))
		return True if num[2:].startswith('1') and len(num[2:]) == num.count('0') and num.count('0') % 2 and '-' not in num else False
		

if __name__ == '__main__':
	s = Solution()
	print(s.func(4))
