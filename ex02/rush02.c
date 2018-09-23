/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 19:32:48 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 20:04:06 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
void    rush_with_custum_char(int width, int height, char output[6]);

void    rush(int width, int height)
{
    char output[6];

    output[0] = 'A';
    output[1] = 'A';
    output[2] = 'C';
    output[3] = 'C';
    output[5] = 'B';
    output[6] = 'B';
    rush_with_custum_char(width, height, output);
}

void    rush_with_custum_char(int width, int height, char output[6])
{
    int w;
    int h;
    
    w = 0;
    h = 0;
    while (h < height)
    {
        while (w < width)
        {
            if(h == 0 && w == 0)
                ft_putchar(output[0]);
            if(h == 0 && w == width -1)
                ft_putchar(output[1]);
            if(h == height - 1 && w == 0)
                ft_putchar(output[2]);
            if(h == height - 1 && w == width -1)
                ft_putchar(output[3]);
            else if (h == 0 || h == height -1)
                ft_putchar(output[4]);
            else
                ft_putchar(output[5]);
            w++;
        }
        h++;
    }
}