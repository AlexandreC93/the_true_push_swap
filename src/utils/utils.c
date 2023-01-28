/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:57:00 by lcadinot          #+#    #+#             */
/*   Updated: 2023/01/26 17:57:01 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	a_is_sorted(t_list *list)
{
	t_element	*tmp1;
	t_element	*tmp2;

	tmp1 = list->first;
	tmp2 = list->first->next;
	while (tmp2 != NULL)
	{
		if (tmp1->nbr < tmp2->nbr)
		{
			tmp1 = tmp2;
			tmp2 = tmp2->next;
		}
		else
			return (0);
	}
	return (-1);
}

void	swap_element(t_element *a, t_element *b)
{
	int	tmp;

	tmp = a->nbr;
	a->nbr = b->nbr;
	b->nbr = tmp;
}

void	nbr_become_pos(t_list *a)
{
	int			i;
	t_element	*tmp;

	i = 0;
	tmp = a->first;
	while (i < a->nb_elem)
	{
		tmp->nbr = tmp->pos;
		tmp = tmp->next;
		i++;
	}
}

void	attribute_order(t_list *to_order, t_list *sorted)
{
	int			i;
	t_element	*cmp1;
	t_element	*cmp2;

	i = 0;
	cmp1 = to_order->first;
	cmp2 = sorted->first;
	while (i < to_order->nb_elem)
	{
		if (cmp2->nbr == cmp1->nbr)
		{
			cmp1->pos = i;
			i++;
			cmp2 = cmp2->next;
			cmp1 = to_order->first;
		}
		else
		{
			cmp1 = cmp1->next;
		}
	}
	// print_list(to_order);
	nbr_become_pos(to_order);
}
