int	ft_ne(int n)
{
	if (n % 2 != 0)
		return (-1);
	return (1);
}

int	len_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	return (i);
}

int	power(int i)
{
	int	aws;

	aws = 1;
	while (i > 0)
	{
		aws *= 10;
		i--;
	}
	return (aws);
}

int	to_int(char *str, int l)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	l--;

	while (l >= 0)
	{
		result += (str[l] - '0') * power(i);
		l--;
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	return (to_int(&str[i], len_num(&str[i])) * sign);
}