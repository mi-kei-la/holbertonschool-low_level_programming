#include "binary_trees.h"

/**
  *
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		left = binary_tree_size(tree->left) + 1;
	if (tree->right)
		right = binary_tree_size(tree->right) + 1;

	return (left + right);
}
