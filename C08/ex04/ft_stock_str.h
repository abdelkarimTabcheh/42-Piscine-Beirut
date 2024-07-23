/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:44:08 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/27 13:51:29 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H

# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int			size;
	char		*str;
	char		*copy;
}			t_stock_str;

#endif