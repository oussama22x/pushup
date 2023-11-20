/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilspars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:17:02 by oelboukh          #+#    #+#             */
/*   Updated: 2023/11/20 01:17:06 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_bonus.h"

void	number_dir(char *s)
{
	if (ft_strlen(s) > 2)
	{
		printf("unvalide\n ERROR\n");
		exit(1);
	}
}

void	virg(char **str, int i, int l, int *x)
{
	if (str[i][l] == ',')
		*x += 1;
	if (str[i][l] != ',' && (str[i][l] < '0' || str[i][l] > '9'))
	{
		printf("UNVALIDE\n ERROR\n ");
		exit(1);
	}
}

void	just_check(int x, int *arr)
{
	if (x != 7)
	{
		printf("unvalid :(\nERROR");
		exit(0);
	}
	if (arr[0] > 1 || arr[1] > 1 || arr[2] > 1 || arr[3] > 1 || arr[4] > 1
		|| arr[5] > 1 || arr[6] > 1)
	{
		printf("unvalid :(\nERROR");
		exit(0);
	}
}
