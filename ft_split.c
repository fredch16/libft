/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:54:11 by fcharbon          #+#    #+#             */
/*   Updated: 2023/11/15 21:16:47 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	i;

	dup = malloc(n + 1);
	if (!dup)
		return (NULL);
	while (i < n)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	int			word_index;
	char		**result;
	const char	*start;

	if (!s)
		return (NULL);
	result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	word_index = 0;
	while (*s)
	{
		if (*s != c)
		{
			*start = s;
			while (*s && *s != c)
				s++;
			result[word_index++] = ft_strndup(start, s - start);
			else
				s++;
		}
	}
}
