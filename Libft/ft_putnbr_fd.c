/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/16 11:08:44 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *i;

    if (n == -2147483648){
        ft_putstr_fd("-2147483648", fd);
    } else {
        if (n < 0){
            ft_putchar_fd('-' , fd);
            n = n * -1;
        }
        if (n/10 > 0)
        {
            ft_putnbr_fd(n / 10, fd);
        }
        ft_putchar_fd((n % 10) + '0' , fd);
    }
}