/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lectur.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:54:07 by joanavar          #+#    #+#             */
/*   Updated: 2024/10/30 11:32:33 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"


char *	token(char *s, int i)
{
	int j;
	char *new_token

	j = 0;
	while ()
}


void	lectur_imput(char *str)
{
	int i = 0;

	if (!str)
		return ;
	while (str[i])
	{
		if (str[i] == ' ')
			is_caracter_token(str[i]);
		else if (str[i] == '|')
			is_caracter_token(str[i]);
		else if (str[i] == '>' && str[i] == '<')
			is_caracter_token(str[i]);
		else if (str[i] == '<' && str[i + 1] == '<' ||
				str[i] == '>' && str[i + 1] == '>')
		{
			is_redireccion(str, i);
			i++;
		}
		else 
			while ()
			tengo que guardar en una string hasta que se encuentre algo de arriba;
		i++;
	}


}
