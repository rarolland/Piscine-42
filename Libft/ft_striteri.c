#include <stdio.h> 

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if(s != NULL && f)
	{
		while(s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

void my_function(unsigned int i, char *str)
{
	printf("je suis: index = %d et la chaine de caractere est %s\n", i, str);
}

int main ()
{
	char str[] = "ton peRE";
	printf("Le resultat est %s\n", str);
	ft_striteri(str, my_function);
	printf("le resultat est %s\n", str);
	return(0);
}
