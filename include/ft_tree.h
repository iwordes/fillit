#ifndef FT_TREE_H
# define FT_TREE_H

# include <stdlib.h>

typedef struct	s_tree
{
	void		*data;
	size_t		data_size;
	void		*left;
	void		*right;
}				t_tree;

void			ft_treeclr(t_tree *tree);
void			ft_treedel(t_tree *tree);
t_tree			*ft_treefind(t_tree *t, void *data, int (*cmp)(void*, void*));
void			ft_treeins(t_tree *tree, void *data, int (*cmp)(void*, void*));
t_tree			*ft_treenew(void *data);

#endif
