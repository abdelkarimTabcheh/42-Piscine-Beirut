# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 07:00:47 by atabcheh          #+#    #+#              #
#    Updated: 2024/03/01 07:03:09 by atabcheh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Wextra -Werror -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete
