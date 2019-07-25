#include "binary_trees.h"

/**
 * binary_trees_size - check the size of the tree
 * @tree: tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (0);
	return (binary_tree_size(tree->right) + binary_tree_size(tree->left)
		+ 1);
}
