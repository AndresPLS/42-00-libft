/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:56:27 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/04 11:19:55 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int digit;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    digit = n % 10 + '0';
    write(fd, &digit, 1);
}
