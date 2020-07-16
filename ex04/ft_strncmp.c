/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:56:24 by ledube            #+#    #+#             */
/*   Updated: 2020/07/16 17:05:04 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		unsigned int i;

		i = 0;
		if (n == 0)
			return (0);
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n -1)
			i++;
		return (s1[i] - s2[i]);
	}
