#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - function that outputs node depth of binary tree.
 * @tree: pointer to the node to measure depth of tree.
 *
 * Return: 0, if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)

		return (0);

	size_t left_depth = binary_tree_depth(tree->left);
	size_t right_depth = binary_tree_depth(tree->right);

	if (left_depth > right_depth)

		return (left_depth + 1);

	else

		return (right_depth + 1);

}
