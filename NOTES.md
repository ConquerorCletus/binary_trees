# Binary Tree
A binary tree is a tree data structure in which each node has at most 2 children. Usually, known as the left and the right child.

                ROOT
				(O)
				/ \
			   /   \
              /     \
             /       \
Left sub   (O)       (O) right subtree



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


### 1.In-order Traversal
- left subtree
- ROOT
- right subtree

                  ROOT
                   (2)
                  /   \
                 /     \
                /       \
 Left Subtree(1)         (3) right subtree

### 2.Pre-order Traversal
- ROOT
- Left Subtree
- right subtree

                ROOT
				(1)
				/ \
			   /   \
              /     \
             /       \
Left sub   (2)       (3) right subtree

### 3.Post-order Traversal
- Left subtree
- RIGHT subtree
- ROOT

                ROOT
				(3)
				/ \
			   /   \
              /     \
             /       \
Left sub   (1)       (2) right subtree

-----------------------------------------------------------

### Checking for a leaf in a binary tree
A leaf is a node that has no children in a binary tree.

a pseudocode for checking for a leaf can be;
1. if node is NULL return NULL
2. if node->left is equal to NULL and node->right is equal to NULL return (1)
3. return 0

so this codes would return an integer if leaf = 1 && if not leaf = 1.

### Checking for a ROOT
A root node is the originator of the binary tree the top most node of the tree.
a node with no parent is the root node, that means root == NULL

a pseudocode for checking for a root can be;
1. if node is NULL return NULL
2. if node->parent is equal to NULL return (1)
3. return 0

### height of a binary tree
The height of a binary tree is the length of the longest path from the root node to any leaf node in the tree


