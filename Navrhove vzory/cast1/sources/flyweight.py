# Flyweight pattern
class Lamp(object):
	__slots__ = ['color']
	def __init__(self,color):
		self.color = color
 
# Flyweight pattern
class TreeBranch(object):
	__slots__ = ['branch_number']
	def __init__(self,branch_number):
		self.branch_number = branch_number
	def hang(self,lamp):
		print("Hang {} lamp on branch {}".format(lamp.color,self.branch_number))
 
class ChristmasTree(object):
	def __init__(self):
		self.lamps_hung = 0
		self.dress_up_the_tree()
 
	def hang_lamp(self,color, branch_number):
		TreeBranch(branch_number).hang(Lamp(color))
		self.lamps_hung += 1
 
	def dress_up_the_tree(self):
		self.hang_lamp('red', 1)
		self.hang_lamp('blue', 1)
		self.hang_lamp('yellow', 1)
		self.hang_lamp('red', 2)
		self.hang_lamp('blue', 2)
		self.hang_lamp('yellow', 2)
		self.hang_lamp('red', 3)
		self.hang_lamp('blue', 3)
		self.hang_lamp('yellow', 3)
		self.hang_lamp('red', 4)
		self.hang_lamp('blue', 4)
		self.hang_lamp('yellow', 4)
		self.hang_lamp('red', 5)
		self.hang_lamp('blue', 5)
		self.hang_lamp('yellow', 5)
		self.hang_lamp('red', 6)
		self.hang_lamp('blue', 6)
		self.hang_lamp('yellow', 6)
		self.hang_lamp('red', 7)
		self.hang_lamp('blue', 7)
		self.hang_lamp('yellow', 7)
 
if __name__ == '__main__':
	ChristmasTree()