#include <string.h>
#include <stdio.h>

int	in_str(char c, char *reject)
{
	int i = 0;
	while (reject[i])
	{
		if (reject[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	char *search = (char *)reject;
	size_t i = 0;
	while (*s)
	{
		if (!in_str(*s, search))
			i++;
		s++;
	}
	return (i);
}

int main()
{
	char *str = "Hello";
	char *re = "He";
	size_t len = ft_strcspn(str, re);
	size_t value = strcspn(str, re);
	printf("%zu\n", len);
	printf("%zu\n", value);
}