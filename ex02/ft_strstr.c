/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:38:38 by ledube            #+#    #+#             */
/*   Updated: 2020/07/16 16:45:00 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr( char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0') 
	{
		j = 0;
		while (to_find[j] == str[i +j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
