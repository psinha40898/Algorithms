# Python3 program to for tree traversals
from collections import deque


# A class that represents an individual node in a
# Binary Tree
class Node:
	def __init__(self, key):
		self.left = None
		self.right = None
		self.val = key
		#nlr
def goodNodes(root):
	g = 0
	def dfs(root, maxN):
		if not root:
			return
		nonlocal g
		if root.val >= maxN:
			g += 1
		maxN = max(maxN, root.val)
		dfs(root.left, maxN)
		dfs(root.right, maxN)
	dfs(root, root.val)
	return g
def printPreOrderIterative(root):
	cur = root
	stack = []
	while cur or stack:
		# print("outerloop")
		while cur: #causes outer loop to execute half as many times as the if statement
			print(cur.val, end=" ")
			stack.append(cur.right)
			cur = cur.left
		cur = stack.pop()
			
	#lnr
def printInOrderIterative(root):
	stack = []
	cur = root
	while cur or stack:
		while cur:
			stack.append(cur)
			cur = cur.left
		cur = stack.pop()
		print(cur.val, end=" ")
		cur = cur.right
def printPostOrderIterative(root):
	stack = []
	visit = []
	if not root:
		return
	stack.append(root)
	visit.append(False)
	while stack:
		v = visit.pop()
		cur = stack.pop()
		if cur:
			if v:
				print(cur.val, end = " ")
			else:
				stack.append(cur)
				visit.append(True)
				stack.append(cur.right)
				visit.append(False)
				stack.append(cur.left)
				visit.append(False)
	 


# A function to do inorder tree traversal
# Traverse the left subtree, i.e., call Inorder(left->subtree)
# Visit the root.
# Traverse the right subtree, i.e., call Inorder(right->subtree)
def printInorder(root):

	if not root:
		return

		# First recur on left child
	printInorder(root.left)

		# Then print the data of node
	print(root.val, end=" "),

		# Now recur on right child
	printInorder(root.right)

# A function to do preorder tree traversal
# Visit the root.
# Traverse the left subtree, i.e., call Preorder(left->subtree)
# Traverse the right subtree, i.e., call Preorder(right->subtree) 

def printPreorder(root):
 
	if not root:
		return
 
		# First print the data of node
	print(root.val, end=" "),
 
		# Then recur on left child
	printPreorder(root.left)
 
		# Finally recur on right child
	printPreorder(root.right)

# A function to do postorder tree traversal
# Traverse the left subtree, i.e., call Postorder(left->subtree)
# Traverse the right subtree, i.e., call Postorder(right->subtree)
# Visit the root
def printPostorder(root):
 
	if not root:
		return
 
		# First recur on left child
	printPostorder(root.left)
 
		# The recur on right child
	printPostorder(root.right)
 
		# Now print the data of node
	print(root.val, end=" "),

#Level order traversal implemented iteratively
# We need to visit the nodes in a lower level before any node in a higher level, 
# this idea is quite similar to that of a queue. Push the nodes of a lower level in the queue. 
# When any node is visited, pop that node from the queue and push the child of that node in the queue.
# This ensures that the node of a lower level are visited prior to any node of a higher level
def printLevelOrder(root):
 
	# Base Case
	if not root:
		return
	levels = 0
	# Create an empty queue
	# for level order traversal
	queue = deque()
 
	# Enqueue Root and initialize height
	queue.append(root)

	while queue:
		lenQ = len(queue)
		for i in range(lenQ):
			cur = queue.popleft()
			if cur:
				print(cur.val, end=" ")
				queue.append(cur.left)
				queue.append(cur.right)

			  
# Driver code
if __name__ == "__main__":
	#regular binary tree not bst.
	root = Node(1)
	root.left = Node(2)
	root.right = Node(3)
	root.right.left = Node(4)
	root.right.right = Node(5)
	root.right.left.right = Node(6)
	root.right.left.right.left = Node(7)
	root.right.left.right.left.right = Node(8)
	# Function calls
	print("RECURSIVE Inorder traversal of binary tree is \n")
	printInorder(root)
	print("\n")
	print("ITERATIVE Inorder traversal of binary tree is \n")
	printInOrderIterative(root)
	print("\n")
	print("RECURSIVE Preorder traversal of binary tree is \n")
	printPreorder(root)
	print("\n")
	print("ITERATIVE Preorder traversal of binary tree is \n")
	printPreOrderIterative(root)
	print("\n")
	print("RECURSIVE Postorder traversal of binary tree is \n")
	printPostorder(root)
	print("\n")
	print("ITERATIVE Postorder traversal of binary tree is \n")
	printPostOrderIterative(root)
	print("\n")
	print("Levelorder traversal of binary tree is \n")
	printLevelOrder(root)
	print("\n")

	# root = Node(3)
	# root.left = Node(1)
	# root.left.left = Node(3)
	# root.right = Node(4)
	# root.right.left = Node(1)
	# root.right.right = Node(5)

	# test = goodNodes(root)
	# print(test)




