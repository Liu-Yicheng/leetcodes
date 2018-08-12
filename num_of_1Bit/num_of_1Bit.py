class Solution:
	def num_of_Bits1(self, n):
		if n<0:
			print('please input the right num')
		else:
			string = bin(n)
			num = string.count('1')
		return num

if __name__ == '__main__':
	s = Solution()
	result = s.num_of_Bits1(6)
	print(result)
		
