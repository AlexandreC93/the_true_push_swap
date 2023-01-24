/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:18:37 by lcadinot          #+#    #+#             */
/*   Updated: 2023/01/24 16:18:40 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list *a;

	if (ac < 2)
		return (0);
	if (ac == 2)
		a = convert_one_str();
	else
		a = parsing(0, ac, av, -1);
	if (a == NULL)
	{
		free_tab(a);
		return (0);
	}
	if (a_is_sorted(a) < 0)
	{
		supp_lists(a);
		return (0);
	}
	if (a->nb_elem <= 5)
		small_sort(a);
	else
		big_sort(a);
	supp_lists(a);
	return (0);
}
