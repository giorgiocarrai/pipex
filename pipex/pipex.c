/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarrai <gcarrai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:17:13 by gcarrai           #+#    #+#             */
/*   Updated: 2022/04/11 21:04:24 by gcarrai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	correctav(char **av, char **envp, t_list *list)
{
	char *path2split;
	//int fd;
	char **lesbica;
	int a;
	char *temp;

	a = 0;
	path2split = envp[ft_index_position(envp, "PATH=")] + 5;
	lesbica = ft_split(path2split, ':', list);
	printf("L' N_SPLIT è :%i\n", list->n_split);
	while (a < list->n_split)
	{
		//usare stringa temporanea per joinare
		temp = ft_strjoin(lesbica[a], "/");
		printf("%s\n", ft_strjoin(temp, av[2]));
		if (access(ft_strjoin(temp, av[2]), X_OK) == 0)
		{
			printf("ho trovato il comando\n");
		}
		a++;
	}
	printf("giorgio mongolo\n");
	// for (int i = 0; i < 6; i++)
	// {
	// 	printf("\n lesbica[%i] è: ", i);
	// 	a = ft_strlen(lesbica[i]);
	// 	for (int o = 0; o < a; o++)
	// 		printf("%c", lesbica[i][o]);
	// }
	/*fd = open("testfile.txt", O_RDONLY);
	if (fd < 0)
		exit(0);*/

}

void ilcazzodifile(char **argv, char **envp)
{
	char *PWD;

	PWD = envp[ft_index_position(envp, "PWD=")] + 4;
	prontf("il PWD è: %s\n", PWD);
}


//controlla i file
/*int	ft_access_file(char *path)
{
	if (access(path, F_OK) == -1)
		ft_putstr_fd("open: no such file or directory\n", 2);
	else if (access(path, R_OK) == -1)
		ft_putstr_fd("open: READ permission denied\n", 2);
	else if (access(path, W_OK) == -1)
		ft_putstr_fd("open: WRITE permission denied\n", 2);
	else
		return (1);
	return (0);
}*/

//acces(/bin/ls, X_OK) != -1;

//unlink

//tu tieni questa perchè è una funzione che ti ritorna il primo indice che trova in srcs se la stringa è uguale a tofind
int	ft_index_position(char **src, char *to_find)
{
	int i;

	i = 0;
	while (src[i] && ft_strncmp(src[i], to_find, ft_strlen(to_find)))
		i++;
	printf("la I è: %i\n", i);
	return (i);
}

int	main(int argc, char **argv, char **envp)
{
	t_list	list;
	(void)argc;
	correctav(argv, envp, &list);
	ilcazzodifile(argv, envp);
	
	printf("\nhola");
	printf("\n");
}

