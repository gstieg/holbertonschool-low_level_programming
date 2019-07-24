#include "binary_trees.h"
/**
 * binary_tree_insert_left- inserts left node
 * @parent: pointer to the new node
 * @value: value of the new node
 *
 *Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
		return (NULL);

	leftNode = malloc(sizeof(binary_tree_t));
	if (leftNode == NULL)
		return (NULL);

	leftNode->n = value;
	leftNode->parent = parent;
	leftNode->left = parent->left;
	leftNode->right = NULL;

	if (parent->left)
		parent->left->parent = leftNode;
	parent->left = leftNode;

	return (leftNode);

}
