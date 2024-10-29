/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lectur.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joanavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:54:07 by joanavar          #+#    #+#             */
/*   Updated: 2024/10/29 19:40:26 by joanavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	*lectur_token(char *str)
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
	return (0);
}
void lectur_token2(char *str)
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

	i = 0;

}
