#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves
 * @tree: tree
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL)
		return (1);
	if (tree->left == NULL)
		return (1);
	return (binary_tree_leaves(tree->right)
		+ binary_tree_leaves(tree->right));
}
