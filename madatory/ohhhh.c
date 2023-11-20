/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ohhhh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelboukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 05:01:27 by oelboukh          #+#    #+#             */
/*   Updated: 2023/11/19 05:01:29 by oelboukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

void	nor_things(t_all *all, t_go *go, int *x, int i)
{
	if (ft_strnstr(all->map[i], "NO", 2))
	{
		*x = *x + 1;
		go->arr[0]++;
		all->map[i] = remove_char(all->map[i]);
		go->tmp = ft_strdup((all->map[i]));
		ft_lst_add_back(&all->garb, ft_lst_new(go->tmp));
		all->txt->no = ft_split(go->tmp, ' ');
		number_dir(all->txt->no[0]);
		ft_lst_add_back(&all->garb, ft_lst_new(all->txt->no));
		all->map[i] = ft_strdup("\0");
	}
}

void	nor_things2(t_all *all, t_go *go, int *x, int i)
{
	if (ft_strnstr(all->map[i], "SO", 2))
	{
		*x = *x + 1;
		go->arr[1]++;
		all->map[i] = remove_char(all->map[i]);
		go->tmp = ft_strdup((all->map[i]));
		ft_lst_add_back(&all->garb, ft_lst_new(go->tmp));
		all->txt->so = ft_split(go->tmp, ' ');
		number_dir(all->txt->so[0]);
		ft_lst_add_back(&all->garb, ft_lst_new(all->txt->so));
		all->map[i] = ft_strdup("\0");
	}
	if (ft_strnstr(all->map[i], "WE", 2))
	{
		*x = *x + 1;
		go->arr[2]++;
		all->map[i] = remove_char(all->map[i]);
		go->tmp = ft_strdup((all->map[i]));
		ft_lst_add_back(&all->garb, ft_lst_new(go->tmp));
		all->txt->we = ft_split(go->tmp, ' ');
		number_dir(all->txt->we[0]);
		ft_lst_add_back(&all->garb, ft_lst_new(all->txt->we));
		all->map[i] = ft_strdup("\0");
	}
}

void	test(char *map, char c)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (map[i])
	{
		if (map[i] == c)
			x++;
		i++;
	}
	if (x > 1)
	{
		printf("not valid\nERROR\n");
		exit(1);
	}
}

void	nor_things3(t_all *all, t_go *go, int *x, int i)
{
	if (ft_strnstr(all->map[i], "EA", 2))
	{
		*x = *x + 1;
		go->arr[3]++;
		all->map[i] = remove_char(all->map[i]);
		go->tmp = ft_strdup((all->map[i]));
		ft_lst_add_back(&all->garb, ft_lst_new(go->tmp));
		all->txt->ea = ft_split(go->tmp, ' ');
		number_dir(all->txt->ea[0]);
		ft_lst_add_back(&all->garb, ft_lst_new(all->txt->ea));
		all->map[i] = ft_strdup("\0");
	}
	else if (ft_strnstr(all->map[i], "F", 1))
	{
		*x = *x + 1;
		go->arr[4]++;
		all->map[i] = remove_char(all->map[i]);
		test(all->map[i], 'F');
		all->map[i] = remove_space(all->map[i]);
		go->tmp = ft_strdup((all->map[i]));
		ft_lst_add_back(&all->garb, ft_lst_new(go->tmp));
		all->txt->colorf = ft_split(go->tmp, ' ');
		ft_lst_add_back(&all->garb, ft_lst_new(all->txt->colorf[0]));
		all->map[i] = ft_strdup("\0");
	}
}

void	nor_things4(t_all *all, t_go *go, int *x, int i)
{
	if (ft_strnstr(all->map[i], "C", 1))
	{
		*x = *x + 1;
		go->arr[5]++;
		all->map[i] = remove_char(all->map[i]);
		test(all->map[i], 'C');
		all->map[i] = remove_space(all->map[i]);
		go->tmp = ft_strdup((all->map[i]));
		ft_lst_add_back(&all->garb, ft_lst_new(go->tmp));
		all->txt->colorc = ft_split(go->tmp, ' ');
		ft_lst_add_back(&all->garb, ft_lst_new(all->txt->colorc));
		all->map[i] = ft_strdup("\0");
	}
}
