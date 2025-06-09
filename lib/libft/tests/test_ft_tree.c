/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 18:27:16 by vviterbo          #+#    #+#             */
/*   Updated: 2025/02/20 14:05:12 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

bool	test_ft_tree(void);
void	print_node(void *content);

bool	test_ft_tree(void)
{
	t_tree	*tree;
	char	*values[14];
	int		fd;
	char	*printed;

	for (int i = 0; i < 14; i++)
		values[i] = ft_ctoa(i + 'a');
	tree = ft_tree_new(values[0]);
	tree->left = ft_tree_new(values[1]);
	tree->left->left = ft_tree_new(values[2]);
	tree->left->left->left = ft_tree_new(values[3]);
	tree->left->left->left->right = ft_tree_new(values[4]);
	tree->left->left->left->right->right = ft_tree_new(values[5]);
	tree->left->left->right = ft_tree_new(values[6]);
	tree->left->right = ft_tree_new(values[7]);
	tree->right = ft_tree_new(values[8]);
	tree->right->left = ft_tree_new(values[9]);
	tree->right->left->right = ft_tree_new(values[10]);
	tree->right->right = ft_tree_new(values[11]);
	tree->right->right->left = ft_tree_new(values[12]);
	tree->right->right->left->left = ft_tree_new(values[13]);
	fd = open("tree_traversal.txt", O_CREAT | O_WRONLY | O_TRUNC, 0777);
	close(fd);
	ft_tree_trav(tree, print_node, PRE_ORDER);
	fd = open("tree_traversal.txt", O_RDONLY);
	printed = ft_readfile(fd);
	close(fd);
	if (ft_strcmp(printed, "abcdefghijklmn"))
	{
		printf("test_ft_tree failed on test 1\n");
		printf("order is\n%s\nshould be\abcdefghijklmn\n", printed);
		return (false);
	}
	free(printed);
	fd = open("tree_traversal.txt", O_CREAT | O_WRONLY | O_TRUNC, 0777);
	close(fd);
	ft_tree_trav(tree, print_node, IN_ORDER);
	fd = open("tree_traversal.txt", O_RDONLY);
	printed = ft_readfile(fd);
	close(fd);
	if (ft_strcmp(printed, "defcgbhajkinml"))
	{
		printf("test_ft_tree failed on test 2\n");
		printf("order is\n%s\nshould be\ndefcgbhajkinml\n", printed);
		return (false);
	}
	free(printed);
	fd = open("tree_traversal.txt", O_CREAT | O_WRONLY | O_TRUNC, 0777);
	close(fd);
	ft_tree_trav(tree, print_node, POST_ORDER);
	fd = open("tree_traversal.txt", O_RDONLY);
	printed = ft_readfile(fd);
	close(fd);
	if (ft_strcmp(printed, "fedgchbkjnmlia"))
	{
		printf("test_ft_tree failed on test 3\n");
		printf("string is\n%s\nshould be\nfedgchbkjnmlia\n", printed);
		return (false);
	}
	free(printed);
	ft_tree_clear(tree, free);
	return (true);
}

void	print_node(void *content)
{
	int	fd;

	fd = open("tree_traversal.txt", O_APPEND | O_WRONLY, 0777);
	if (fd < 3)
		exit(EXIT_FAILURE);
	write(fd, content, 1);
	close(fd);
}

/* Tree should look like

			    a
			 /     \
			/       \
			b        i
		   / \	    / \
		  c   h    j   l
		 / \	  /		\
		d   g    k		 m
		 \				   \
		  e					n
		   \
			f

pre-order traversal (abcdefijklm)
in-order traversal (defcgbhajkinml)
post-order traversal (fedgchbkjnmlia)
*/