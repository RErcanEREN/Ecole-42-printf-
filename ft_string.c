/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reren <reren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:16:07 by reren             #+#    #+#             */
/*   Updated: 2024/11/30 14:23:32 by reren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libftprintf.h"
#include <sys/_types/_null.h>

int ft_string(char *str)
{  
    int i;
    i = 0;
    
    if(str == NULL)
        {
            if(ft_string("(null)") == -1)
                return(-1);
            return(6);
        }
    while(str[i])
    {
        if(ft_char(str[i]) == -1)
            return(-1);
        i++;
    }
    return(i);
}

/* 
void	ft_putstr(char *str) {
	int i = 0;
	while(str[i]) ft_putchar(str[i++]);
}
*/