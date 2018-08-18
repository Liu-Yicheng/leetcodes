class Solution(object):
	def hamming_distance(self, a, b):
		distance = 0
		z = a ^ b
		while z:
			z &= z-1
			distance += 1
		return  distance
	
	def hamming_distance1(self, a, b):
		return bin(a^b).count('1')

if __name__ == '__main__':
	s = Solution()
	result1  = s.hamming_distance(1,2)
	result2  = s.hamming_distance1(1,2)
	print(result1, result2)

