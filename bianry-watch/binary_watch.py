class solution(object):
	def binary_watch(self,num):
		return["{0}:{1}".format(str(h), str(m).zfill(2))
		        for h in range(12) for m in range(60)
			if (bin(h)+bin(m)).count('1') == num]


if __name__ == '__main__':
	s = solution()
	result = s.binary_watch(2)
	print(result)	
