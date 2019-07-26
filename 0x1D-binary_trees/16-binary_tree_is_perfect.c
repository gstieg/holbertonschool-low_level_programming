#include "binary_trees.h"
/**
 *binary_tree_is_perfect- checks if tree is perfect
 *@tree: pointer to tree
 *Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (tree->left->left == NULL && tree->left->right == NULL)
		if (tree->right->left == NULL && tree->right->right == NULL)
			return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}
