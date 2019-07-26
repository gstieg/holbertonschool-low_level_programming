#include "binary_trees.h"
/**
 *binary_tree_is_full - checks if a tree is full
 *
 *@tree: pointer to the root
 *
 *Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
