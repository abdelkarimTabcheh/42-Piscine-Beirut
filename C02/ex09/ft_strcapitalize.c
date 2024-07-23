/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:12:56 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/17 18:55:50 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new_word;
	char	a;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		a = str[i];
		if (new_word == 1 && a >= 'a' && a <= 'z')
			str[i] -= 32;
		else if (new_word == 0 && a >= 'A' && a <= 'Z')
			str[i] += 32;
		if (a < '0' || (a > '9' && a < 'A') || (a > 'Z' && a < 'a') || a > 122)
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
