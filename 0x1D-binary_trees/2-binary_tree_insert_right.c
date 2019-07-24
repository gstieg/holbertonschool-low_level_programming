#include "binary_trees.h"
/**
 *binary_tree_insert_right- inserts a node in the right child
 *@parent: pointer to the new node
 *@value: value for the new node
 *
 *Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent == NULL)
		return (NULL);
	rightNode = malloc(sizeof(binary_tree_t));
	if (rightNode == NULL)
		return (NULL);

	rightNode->n = value;
	rightNode->parent = parent;
	rightNode->left = NULL;
	rightNode->right = parent->right;

	if (parent->right)
		parent->right->parent = rightNode;
	parent->right = rightNode;

	return (rightNode);
}
