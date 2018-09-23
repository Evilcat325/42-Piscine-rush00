/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 19:32:48 by seli              #+#    #+#             */
/*   Updated: 2018/09/22 20:59:38 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
void    rush_with_custum_char(int width, int height, char output[6]);

void    rush(int width, int height)
{
    char output[7];

    output[0] = 'A';
    output[1] = 'C';
    output[2] = 'C';
    output[3] = 'A';
    output[4] = 'B';
    output[5] = 'B';
    rush_with_custum_char(width, height, output);
}

void    rush_with_custum_char(int width, int height, char output[7])
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            if (h == 0 && w == 0)
                ft_putchar(output[0]);
            else if (h == 0 && w == width -1)
                ft_putchar(output[1]);
            else if (h == height - 1 && w == 0)
                ft_putchar(output[2]);
            else if (h == height - 1 && w == width -1)
                ft_putchar(output[3]);
            else if (h == 0 || h == height -1)
                ft_putchar(output[4]);
            else if (w == 0 || w == width - 1)
                ft_putchar(output[5]);
            else
                ft_putchar(' ');
            w++;
        }
        ft_putchar('\n');
        h++;
    }
}