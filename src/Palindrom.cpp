#include "Palindrom.h"
#include "malloc.h"

bool CheckOnPalindrom(CNode *list){
	bool result = true;
	int len = 0;

	CNode *list1 = list;

	while (list1 != 0){
		len++;
		list1 = list1->next;
	}

	int *mas;
	mas=(int*)malloc(sizeof(int)*len);
	for (int i = 0; i < len; i++){
		mas[i] = list->date;
		list=list->next;
	}

	for (int i = 0; i < len / 2; i++){
		if (mas[i] != mas[len - 1 - i]){
			result = false;
			break;
		}
	}
	return result;

}

