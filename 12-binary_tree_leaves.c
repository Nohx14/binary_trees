#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: counted number of leaves in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
return (1);
else
return binary_tree_leaves(tree->left) +
binary_tree_leaves(tree->right);
}

