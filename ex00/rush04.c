/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 19:32:48 by seli              #+#    #+#             */
/*   Updated: 2018/09/23 22:59:20 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush_with_custum_char(int width, int height, char output[6]);
int		char_to_print(int w, int h, int width, int height);

void	rush(int width, int height)
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

void	rush_with_custum_char(int width, int height, char output[7])
{
	int w;
	int h;
	int c;

	h = -1;
	while (++h < height)
	{
		w = -1;
		while (++w < width)
		{
			c = char_to_print(w, h, width, height);
			if (c < 0)
				ft_putchar(' ');
			else
				ft_putchar(output[c]);
		}
		ft_putchar('\n');
	}
}

int		char_to_print(int w, int h, int width, int height)
{
	if (h == 0 && w == 0)
		return (0);
	else if (h == 0 && w == width -1)
		return (1);
	else if (h == height - 1 && w == 0)
		return (2);
	else if (h == height - 1 && w == width -1)
		return (3);
	else if (h == 0 || h == height -1)
		return (4);
	else if (w == 0 || w == width - 1)
		return (5);
	else
		return (-1);
}