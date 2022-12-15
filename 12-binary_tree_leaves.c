#include "binary_trees.h"



/**

 * binary_tree_leaves - counts the leaves in a binary tree

 * @tree:  pointer to the root node of the tree to count the number of leaves

 * Return: count of leaves

 */



size_t binary_tree_leaves(const binary_tree_t *tree)

{

	size_t leaf_count = 0;



	if (!tree)

		return (0);



	if (!tree->left && !tree->right)

		leaf_count = 1;

	leaf_count += binary_tree_leaves(tree->left);

	leaf_count += binary_tree_leaves(tree->right);



	return (leaf_count);

}
