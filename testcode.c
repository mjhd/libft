#include "include/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    fucky(char *c)
{
    *c += 2;
}

void    fucky2(unsigned int index, char *c)
{
    *c -= 2;
    printf("%d\n", index);
}

char    fucky3(char c)
{
    return c + 2;
}

char    fucky4(unsigned int index, char c)
{
    printf("%d\n", index);
    return c - 2;
}

t_list  *shitlook(char content, t_list **alst)
{
    t_list  *shitlink;
    shitlink = (*alst);
    char *c;
    c = &(*(*shitlink).content);
    //int i = 2;
    //printf("%c\n", (*c));
    while((*c) != content/* && i--*/)
    {
        shitlink = &(*(*shitlink).next);
        c = &(*(*shitlink).content);
    }

    return shitlink;
}

void    ft_linkdel(void *pnt, size_t size)
{
    free(&(*pnt));
}

void ft_linkprint(t_list *list)
{
    printf("%s\n", (*list).content);
}

t_list  *ft_addone(t_list *elem)
{
    return ft_lstnew((*elem).content, (*elem).content_size);
}

t_list  *ft_modlst(t_list *elem)
{
    char *c;
    void *src;

    c = (char *)malloc(sizeof(char));
    src = &(*(*elem).content);
    c = memcpy(c, src, 1);
    (*c) += 2;
    return ft_lstnew(c, (*elem).content_size);
}

int		main(void)
{

    char *l;
    char *v;
    char *n;
    char *x;
    l = (char *)ft_memalloc(sizeof(char));
    *l = 'l';
    v = (char *)ft_memalloc(sizeof(char));
    *v = 'v';
    n = (char *)ft_memalloc(sizeof(char));
    *n = 'n';
    x = (char *)ft_memalloc(sizeof(char));
    *x = 'x';
    const void *value1 = l;
    const void *value2 = v;
    const void *value3 = n;
    const void *value4 = x;
    t_list *mylist;
    mylist = ft_lstnew(value1, sizeof(char));
    ft_lstadd(&mylist, ft_lstnew(value2, sizeof(char)));
    ft_lstadd(&mylist, ft_lstnew(value3, sizeof(char)));
    ft_lstadd(&mylist, ft_lstnew(value4, sizeof(char)));
    t_list *shitresponse = (shitlook('n', &mylist));

    ft_lstiter(mylist, ft_linkprint);
    //t_list *newlist = ft_lstmap(mylist, ft_addone);
    t_list *newlist = ft_lstmap(mylist, ft_modlst);
    ft_lstiter(newlist, ft_linkprint);
    //printf("%c\n", (*n));
    //ft_lstdel(&shitresponse, ft_linkdel);
    //printf("%c\n", (*n));



    //ft_putnbr_fd(199, /* DONT FUCK AROUND WITH THIS : */ 1);

/*  FUCKYS!!!

    char const *fuckystring = "\tshit on shit\n";
    ft_putstr((char *)fuckystring);
    ft_putstr(ft_strtrim(fuckystring));
*/

    char dest[15] = "fuck";
    const char *src = " offmydood";

    char *str = "don't eat poop";
    //const char *sub = " eat food";
    //const char c = ' ';

    //const char *str = "*hello*fellow***students*butt**********butt***";
    const char *sub = "*eat food";
    const char c = '*';

    char **strArr = ft_strsplit(ft_strjoin(str, sub), c);
    //const char *str = "a*aa*****a*aa*****a**";
    //char **strArr = ft_strsplit(str, c);


    //while(strArr[i])
    //    printf("%s\n", strArr[i++]);

    char *fuckystr = (char *)ft_memalloc(sizeof(char) * 15);
    ft_strcpy(fuckystr, "don't eat poop");

    //printf("%s\n", fuckystr);
    //char *newstr = ft_strmap(fuckystr, fucky3);
    //printf("%s\n", ft_strmap(fuckystr, fucky3));
    //printf("%s\n", ft_strmapi(fuckystr, fucky4));

    //ft_striter(fuckystr, fucky);
    //printf("%s\n", fuckystr);
    //ft_striteri(fuckystr, fucky2);
    //printf("%s\n", fuckystr);
    //printf("%s%s\n", str, sub);

    //printf("%s\n", ft_strjoin(str, sub));

    /*
    char *str = (char *)ft_memalloc(sizeof(char) * 15);
    ft_strcpy(str, "don't eat poop");
    const char *sub = "eat";

    printf("%s\n", ft_strsub(str, 6, -2));

     */

    //printf("%s\n", str);
    //ft_strclr(str);
    //printf("%s\n", str);

    //printf("%s\n", ft_strnstr(str, sub, 9));
    //printf("%s\n", ft_strrchr(ft_strcat(dest, src), 'o'));

    //printf("%zd\n", ft_strlcat(dest, src, 9));
    //printf("%zd\n", strlcat(dest, src, 9));
    //printf("%s", dest);

    //printf("%s", ft_strncat(dest, src, 12));
    //printf("%s", strncat(dest, src, -1));

    //char str[6] = "Hello\0";
    //const void *pnt = &str[0];
    //printf("%s", ft_memchr(pnt, 'l', 2));

    //char str[6]= "Hello\0";
    //const void *pnt = &str[0];
    //printf("%s\n", (char *)ft_memchr("abcdefg", 'g', 7));
    //printf("%s\n", ft_strcat(dest, src));

    //ft_putnbr(ft_strlen(dst));
    //ft_putstr("126");

    //if(ft_isalpha('7'))
        //ft_putchar('y');
    //if(ft_isalpha('A'))
        //ft_putchar('n');
    //ft_putchar('\n');
    //ft_putstr(ft_itoa(126));


    //*ft_strcat(dst, src);
    //ft_putstr(dst);

/*
    char src[] = "fuckoffmydood";
    char dst[14];


    ft_strcpy(dst, src);
    ft_putstr(dst);
*/

/*
    char src[] = "fuckoffmydood";
    char dst[14];


    ft_strncpy(dst, src, 4);
    ft_putstr(dst);
*/




    //mem test cases:

    //rd_pnt = &str[1];
    //wrt_pnt = &str[0];
    //rd_pnt = &str[0];
    //wrt_pnt = &str[0];
    //rd_pnt = &str[0];
    //wrt_pnt = &str[1];



/*      // ft_memset() [1]

    char str[] = "fuckoffmydood";
    char *wrt_pnt;

    wrt_pnt = &str[0];
    ft_putstr(str);
    ft_memset(wrt_pnt, 'a', 4);
	ft_putstr(str);
*/

/*      // ft_bzero() [2]

    char str[] = "fuckoffmydood";
    char *wrt_pnt;

    wrt_pnt = &str[0];
    ft_putstr(str);
    ft_bzero(wrt_pnt, 4);
	ft_putstr(str);
*/

/*      // ft_memcpy() [3]

    char str[] = "fuckoffmydood";
    char repl[] = "01234";
    char *wrt_pnt;
    char *rd_pnt;

    wrt_pnt = &str[0];
    rd_pnt = &repl[0];

    ft_putstr(str);
    ft_memcpy(wrt_pnt, rd_pnt, 4);
	ft_putstr(str);
*/

/*      // ft_memccpy() [4]

    char str[] = "fuckoffmydood";
    char repl[] = "01234";
    char *wrt_pnt;
    char *rd_pnt;

    wrt_pnt = &str[0];
    rd_pnt = &repl[0];

    ft_putstr(str);
    ft_memccpy(wrt_pnt, rd_pnt, '2', 4);
	ft_putstr(str);
*/

/*      // ft_memmove() [5]

    char str[] = "fuckoffmydood";
    char repl[] = "01234";
    char *wrt_pnt;
    char *rd_pnt;

    wrt_pnt = &str[0];
    // memmove vs memcpy testcase:
    //rd_pnt = &str[1];
    rd_pnt = &repl[0];

    ft_putstr(str);
    ft_memmove(wrt_pnt, rd_pnt, 4);
	ft_putstr(str);
//*/

/*      // ft_memchr() [6]

	char str[] = "fuckoffmydood";
	char *rd_pnt;

    rd_pnt = &str[0];
    char *out = ft_memchr(rd_pnt, 'k', 5);
	ft_putchar(*out);
*/

/*      // ft_memcmp() [7]

	char str_a[] = "fackoffmydood";
	char str_b[] = "fuckoffmydood";
	char *rd_pnt_a;
	char *rd_pnt_b;

    rd_pnt_a = &str_a[0];
    rd_pnt_b = &str_b[0];
	ft_putnbr(ft_memcmp(rd_pnt_a, rd_pnt_b, 5));
*/

/*      // ft_strlen() [8]

	char str[] = "fuckoffmydood";

	ft_putnbr(ft_strlen(str));
*/

/*      // ft_strdup() [9]
    char str[] = "fuckoffmydood";
    char *str_out;

    str_out = ft_strdup(str);
    ft_putstr(str_out);
*/



/* -------------------------------------------------------------
                                                                |
    // ft_memrchr()  --   WHOOPSY EXTRA FUNCSHUION :D           |
                                                                |
	char *out = ft_memrchr(rd_pnt, '2', 4);                     |
                                                                |
	ft_putchar(*out);                                           |
                                                                |
*/ // ----------------------------------------------------------



    //ft_putstr("poop");

    return(0);
}