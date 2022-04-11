#include "pipex.h"

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (*s++ != '\0')
		a++;
	return (a);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*sm1;
	unsigned char	*sm2;
	size_t			i;

	i = 0;
	sm1 = (unsigned char *)s1;
	sm2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (sm1[i] == sm2[i] && i < (n - 1) && sm1[i])
	{
		i++;
	}
	if (sm2[i] < sm1[i])
		return (1);
	else if (sm2[i] == sm1[i])
		return (0);
	else
		return (-1);
}

int	ft_wrdcnt(char const *s, char c)
{
	unsigned int	a;
	int				counter;
	
	a = 0;
	counter = 0;
	while (s[a])
	{
		while (s[a] == c)
			a++;
		if (s[a] != '\0')
			counter++;
		while (s[a] && (s[a] != c))
			a++;
	}
	return (counter);
}

char	*ft_strndup2(const char *s, size_t n)
{
	char	*str;
	size_t	a;

	if (!(str = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	a = 0;
	while (a < n)
	{
		str[a] = s[a];
		a++;
	}
	str[a] = '\0';
	return (str);
	
}


char	**ft_split(char const *s, char c, t_list *list)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (list->n_split = ft_wrdcnt(s, c)) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup2(s + j, i - j);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		str[a + b] = s2[b];
		b++;
	}
	str[a + b] = '\0';
	return (str);
}
