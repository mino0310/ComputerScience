#include <stdio.h>
#include <stddef.h>
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

	printf("%ld\n", offsetof(struct PacketHeader, flags));
	printf("%ld\n", offsetof(struct PacketHeader, seq));
	return 0;
}
