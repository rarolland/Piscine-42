/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adohou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:27:14 by adohou            #+#    #+#             */
/*   Updated: 2022/03/20 18:02:21 by adohou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_check_error(int nbArgs, char *args);
int	**init_tab(void);
int	ft_backtrack(int **tab, int pos);
void	ft_print_tab(int **tab);
void	ft_destroy_tab(char **tab);

int	main(int argc, char *argv[])
{
	int	**tab;
	int	nb_args;
	char	*args;

	nb_args = argc;
	args = *argv[1];
	tab = ft_init_tab();
	ft_check_error(nbArgs, args);
	ft_backtrack(tab, );
	ft_print_tab(tab);
	ft_destroy_tab(tab);
	retrun (0);
}
