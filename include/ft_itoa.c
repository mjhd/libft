#include <stddef.h>

void *ft_memalloc(size_t);

char *ft_returnnum(int val, int length)
{
	int len = length + ((val < 0) ? 1 : 0);
	char *output = (char*)ft_memalloc(sizeof(char) * (len + 1));
	int value;
	int num;
	int i;

	output[len] = '\0';
	i = len;

	value = (val < 0) ? (val * -1) : val;
	while(i-- > ((val < 0) ? 1 : 0)) {
		num = value % 10;
		output[i] = num + '0';
		value -= num;
		value /= 10;
	}
	output[i + 1] = (val < 0) ? '-' : output[i + 1];
	return output;
}

char *ft_itoa(int val)
{
	int value;
	int num;
	int length;

	if(val == 0)
		return "0";
	value = (val < 0) ? (val * -1) : val;
	length = 0;
	while(value > 0)
	{
		num = value % 10;
		value -= num;
		value /= 10;
		length++;
	}
	return ft_returnnum(val, length);
}