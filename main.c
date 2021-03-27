#include "libasm.h"

int	main()
{
	int n;
	int bz = 20;
	char *s = malloc(10);
	char *d = malloc(20);
	printf("================= WRITE FUNC : ================ \n");
	ft_write(1,"|that's hahahah|\n", 17);
	write(1,"|that's hahahah|\n", 17);
	printf("================ READ FUNC : ================= \n");
	int fd = 0;
	int fd1 = 0;
	n = ft_read(fd, s, bz);
	printf("\n|ASM| ==> |%d| and |%s|\n", n, s);
	n = read(fd1, s, bz);
	printf("\n  |C| ==> |%d| and |%s|\n", n, s);
	close(fd);
	close(fd);
	printf("================== STRLEN FUNC ================ \n");
	printf("ft_strlen.s ==> |%lu|\n", ft_strlen("hello world"));
	printf("     strlen ==> |%lu|\n", strlen("hello world"));
	printf("=================== STRCMP FUNC =============== \n");
	printf("ft_strcmp.s ==> |%d|\n", ft_strcmp("hello world", "hello world"));
	printf("	strcmp ==> |%d|\n", strcmp("hello world", "hello world"));
	printf("=================== STRCPY FUNC =============== \n");
	printf("ft_strcpy.s ==> |%s|\n", ft_strcpy(d, "hahhahhahha"));
	printf("	strcpy ==> |%s|\n", strcpy(d, "hahhahhahha"));
	printf("=================== STRDUP FUNC =============== \n");
	printf("ft_strdup.s ==> |%s|\n", ft_strdup("hello world its me "));
	printf("	strdup ==> |%s|\n", strdup("hello world its me "));
}