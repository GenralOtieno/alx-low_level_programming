 #include <Stdio.n>
/**
 * main - A programm that prints the size of various types of computer
 * Return 0 (sucess)
 */
int(void)
{
print main(void)
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char; %lu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of a int; %lu byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a long int; %lu bytes(s)\n",(unsigned long)sizeof(c));
printf("Size of a long long int; %lu bytes(s)\n",(unsigned long)sizeof(d));
printf("size of float; %lu bytes(s)\n",(unsigned long)sizeof(f));
return (0);
}
