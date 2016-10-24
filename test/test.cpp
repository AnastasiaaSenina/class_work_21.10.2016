#include <gtest/gtest.h>
#include "Palindrom.h"

TEST(test_for_palindrom, palindrom)
{
 CNode *list=0;
	for (int i = 0; i < 7; i++){
		CNode *node = new CNode;
		node->next = list;
		if(i<3)
			node->date = i;
		else 
			node->date = 6 - i;

		list = node;
	}

	EXPECT_TRUE(CheckOnPalindrom(list));

}

TEST(test_for_palindrom, empty_list)
{
	EXPECT_TRUE(CheckOnPalindrom(0));

}

TEST(test_for_palindrom, can_check_on_palindrom_onenode)
{
	CNode *list = 0;
	for (int i = 0; i < 1; i++){
		CNode *node = new CNode;
		node->next = list;
		node->date = i;
		list = node;
	}

	EXPECT_TRUE(CheckOnPalindrom(list));

}

TEST(test_for_palindrom, No_palindrom)
{
	CNode *list = 0;
	for (int i = 0; i < 5; i++){
		CNode *node = new CNode;
		node->next = list;
		node->date = i;
		list = node;
	}

	EXPECT_FALSE(CheckOnPalindrom(list));

}

int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}