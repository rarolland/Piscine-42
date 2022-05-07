#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*buf;

	if (s == NULL || !f)
		return (NULL);
	buf = (char *)malloc(sizeof(*buf) * (ft_strlen(s) + 1));
	if (buf == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		buf[i] = f(i, s[i]);
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
 	return (str - 32);
}

int main()
{
 	char str[10] = "hello.";
 	printf("The result is %s\n", str);
 	char *result = ft_strmapi(str, my_func);
 	printf("The result is %s\n", result);
 	return (0);
}
