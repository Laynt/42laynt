#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char* argv[])
{
	const char haystack[20] = "TutorialsPoint";
    const char needle[10] = "";
    char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

    return 0;
}