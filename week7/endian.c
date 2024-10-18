// endian.c
#include <stdio.h>

void check_endianness() {
	// 첫 메모리 주소가 0x12이면, 빅 엔디언
	// 0x78이면 리틀 엔디언.
	unsigned int num = 0x12345678;
	unsigned char* byte_ptr = (unsigned char*)&num;

	// 모든 바이트 주소와 값을 출력
	for (int i = 0; i < sizeof(num); i++) {
		printf("%p    0x%02x\n", (byte_ptr + i), byte_ptr[i]);
	}

	// 첫 바이트 주소를 확인하고 엔디언니스 출력하기
	if (byte_ptr[0] == 0x12) {
		printf("\nThis is a big-endian system.");
	}
	else if (byte_ptr[0] == 0x78) {
		printf("\nThis is a little-endian system");
	}
	else {
		printf("\nUnknown endianness!~");
	}
}

int main(void) {
	check_endianness();

	getch();
	return 0;
}