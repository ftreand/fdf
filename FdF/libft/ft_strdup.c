/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ftreand <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/27 21:45:10 by ftreand      #+#   ##    ##    #+#       */
/*   Updated: 2018/01/31 19:40:21 by ftreand     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*mal;
	int		j;

	i = ft_strlen(s);
	mal = (char*)malloc(sizeof(*mal) * i + 1);
	if (mal == NULL)
		return (NULL);
	j = 0;
	while (s[j])
	{
		mal[j] = s[j];
		j++;
	}
	mal[j] = '\0';
	return (mal);
}
