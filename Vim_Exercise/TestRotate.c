#include <stdlib.h> 
#include <string.h>
#include <stdio.h>

char rotate(const char in, char pivot, int offset)
{
	return pivot + (in - pivot + offset) % 26;
}

void caesar(const char *in, char *outbuf, int offset)
{
	int i;
	char *out = outbuf;
	for (; *in; ++in, ++out) {
		if (*in >= 'A' && *in <= 'Z')
			*out = rotate(*in, 'A', offset);
		else if (*in >= 'a' && *in <= 'z')
			*out = rotate(*in, 'a', offset);
		else
			*out = *in;
	}
	*out = 0;
}

int
main(int argc, char *argv[])
{
	char *buf = strdup(argv[1]);
	caesar(buf, buf, 13);
	printf("%s\n", buf);
	free(buf);
	return 0;
}
