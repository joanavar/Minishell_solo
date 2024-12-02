/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expansor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:17:46 by joanavar          #+#    #+#             */
/*   Updated: 2024/12/02 17:44:44 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paquito.h"

static void	expansor(t_token *token)
{
	int i;

	i = 0;
	while(token->content[i])
	{
		if (token->content[i] == '$')
			$(token, i);
		i++;
	}
}

void	expandir(t_token **stack)
{
	t_token *tmp;
	
	tmp = *stack;
	while (tmp)
	{
		if (tmp->type == 1 || tmp->type == 3)
			expansor(tmp)
		tmp = tmp->next;
	}
}
