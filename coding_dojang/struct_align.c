#include <stdio.h>

#pragma pack(push, 1)

struct PacketHeader
{
	char flags;
	int seq;
};

#pragma pack(pop)

int main(void)
{
	struct PacketHeader header;

	printf("%ld\n", sizeof(header.flags));
	printf("%ld\n", sizeof(header.seq));
	printf("%ld\n", sizeof(header));
	return 0;
}
