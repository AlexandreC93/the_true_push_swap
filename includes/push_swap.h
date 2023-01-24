#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"

typedef struct s_elem
{
	int					nbr;
	int					pos;
	struct s_elem	*next;
}						t_elem;

typedef struct s_list
{
	t_elem	*first;
	int			nb_elem;
}				t_list;

#endif
