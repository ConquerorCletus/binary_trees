# Binary Tree
A binary tree is a tree data structure in which each node has at most 2 children. Usually, known as the left and the right child.

####
			O ------------ROOT
		   / \
LEFT CH	 O/   \O ---------> RIGHT CHILD


####
	/**
	 * struct binary_tree_s - Binary tree node
	 *
	 * @n: Integer stored in the node
	 * @parent: Pointer to the parent node
	 * @left: Pointer to the left child node
	 * @right: Pointer to the right child node
	 */
	struct binary_tree_s
	{
		int n;
		struct binary_tree_s *parent;
		struct binary_tree_s *left;
		struct binary_tree_s *right;
	};
## Traversal of tree
1. In-order	Traversal
2. Pre-order Traversal
3. Post-order Traversal




