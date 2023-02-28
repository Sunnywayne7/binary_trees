#include "binary_trees.h"

/**
 *binary_tree_leaves - function that counts the leaves in a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
 *Return: number of leaves; or 0 if tree is NULL
 * A NULL pointer is not a leave
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
	return (0);
}

