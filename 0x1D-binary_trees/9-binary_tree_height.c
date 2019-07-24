#include "binary_trees.h"
/**
 *binary_tree_height- measures the height of a tree
 *@tree: pointer to tree to measure
 *
 *Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);

	if (right >= left)
		return (right);
	return (left);
}
