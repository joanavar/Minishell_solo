/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expansor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:17:46 by joanavar          #+#    #+#             */
/*   Updated: 2024/12/02 18:29:18 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paquito.h"

int correct_expansor(t_token *token, int i)
{
	if (token->content[i] >= 'a' && 
			token->content[i] <= 'z')
		return (1);
	else if (token->content[i] >= 'a' && 
			token->content[i] <= 'z')
		return (1);

}
void $(t_token *token, int i)
{
	i++;
	if (token->content[i])
}
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
