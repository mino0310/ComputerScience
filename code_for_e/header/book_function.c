#include <stdio.h>
#include "str.h"
#include "book_function.h"
int add_book(char (*book_name)[30], char (*auth_name)[30],
		char (*publ_name)[30], int *borrowed, int *num_total_book)
{
	printf("추가할 책의 제목: ");
	scanf("%s", book_name[*num_total_book]);

	printf("추가할 책의 저자 : ");
	scanf("%s", auth_name[*num_total_book]);

	printf("추가할 책의 출판사 : ");
	scanf("%s", publ_name[*num_total_book]);

	borrowed[*num_total_book] = 0;
	printf("추가 완료! \n");
	(*num_total_book)++;

	return 0;
}

int search_book(char (*book_name)[30], char (*auth_name)[30],
		char (*publ_name)[30],  int num_total_book)
{
	int user_input;
	int i;
	char user_search[30];

	printf("어느 것으로 검색하실 것인가요? \n");
	printf("1. 책 제목 검색 \n");
	printf("2. 지은이 검색 \n");
	printf("3. 출판사 검색 \n");
	scanf("%d", &user_input);

	printf("검색할 단어를 입력해주세요 : ");
	scanf("%s", user_search);

	printf("검색 결과 \n");

	if (user_input == 1)
	{
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(book_name[i], user_search))
			{
				printf("번호: %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n", i,
						book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if (user_input == 2)
	{
		printf("num_total_book =  %d\n", num_total_book);
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(auth_name[i], user_search))
			{
				printf("번호: %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n", i,
						book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}
	else if (user_input == 3)
	{
		for (i = 0; i < num_total_book; i++)
		{
			if (compare(publ_name[i], user_search))
			{
				printf("번호: %d // 책 이름 : %s // 지은이 : %s // 출판사 : %s \n", i,
						book_name[i], auth_name[i], publ_name[i]);
			}
		}
	}

	return 0;
}

int borrow_book(int *borrowed)
{
	int book_num;

	printf("빌릴 책의 번호를 말해주세요 \n");
	printf("책 번호: ");
	scanf("%d", &book_num);

	if (borrowed[book_num] == 1)
	{
		printf("이미 대출된 책입니다! \n");
	}
	else
	{
		printf("책이 성공적으로 대출되었습니다. \n");
		borrowed[book_num] = 1;
	}
	return 0;
}

int return_book(int *borrowed)
{
	int num_book;

	printf("반납할 책의 번호를 써주세요 \n");
	printf("책 번호 : ");
	scanf("%d", &num_book);

	if (borrowed[num_book] == 0)
	{
		printf("이미 반납되어 있는 책입니다.");
	}
	else
	{
		borrowed[num_book] = 0;
		printf("성공적으로 반납되었습니다\n");
	}
	return 0;
}
