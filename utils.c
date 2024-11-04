#include "minishell.h"

void	lectur_token(char *str)
{
	t_token *token;

	token->content = str;
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

void    is_caracter_token(char c)
{
    char *token;

    token = malloc(sizeof(char *) * 2);
    token[0] = c;
    token[1] = '\0';
    lectur_token(token);
}

void    is_redireccion(char *str, int i)
{
    char *token;
    int j;

    j = 0;
    token = malloc(sizeof(char *) * 3);
    while (str[i] = '<' || str[i])
    {
        token[j] = str[i];
        j++;
        i++;
    }
    token[j] = '\0';
    lectur_token(token);
}

void    is_string(char *str, int i)
{
    char *token;
    int j;
    int count;

    j = i;
    count = 0;
    while (str[j] != ' ' || str[j] != '|' ||
            str[j] != '<' || str[j] != '>')
    {
        count++;
        j++;
    }
    j = 0;
    token = malloc(sizeof(char *) * (count + 1));
    while (str[j] != ' ' || str[j] != '|' ||
            str[j] != '<' || str[j] != '>')
        token[j++] = str[i++];
    Token[j] = '\0';
    lectur_token(token);
}
