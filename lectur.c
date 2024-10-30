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
void	lectur_token(char *str)
{
	t_token *token;

	token->content = ft_strdup(str);
	if (str[0] == ' ')
		token->type = 0;
	else if (str[0] == is_alpha(str))// hacer is_alpha en utilsc o cojer de libft;
		token->type = 1;
	else if (str[0] == "'")
		token->type = 2;
	else if (str[0] == 4)
		token->type == 3;
	else if (str[0] == "|")
		token->type = 4;
	else
		lectur_token2(str);

}
void	lectur_token2(char *str)
{
	t_token	*token;

	if (str[0] == "<")
	{
		token->type = 8;
		if (str[1] == "<")
			token->type = 5;
	}
	else if (str[0] == ">")
	{
		token->type = 6;
		if (str[1] == ">")
			token->type = 7;
	}	
}

void	lectur_imput(char *str)
{
	int i;
	char *token;
	int j;

	i = 0;
	j = 0;
	if (!str)
		return ;
	while (str[i])
	{
		if (str[i] == ' ')
			tengo que pasarle el espacio como token;
		else if (str[i] == '|')
			tengo que pasarle la pipe como token;
		else if (str[i] == '>')
			compruebo la siguiente posicion si es > si no le mando tal cual;
		else if (str[i] == '<')
			compruebo la siguiente posicion si es < si no la mando tal cual;
		else 
			while ()
			tengo que guardar en una string hasta que se encuentre algo de arriba;
	}

}
