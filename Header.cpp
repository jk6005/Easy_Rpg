#include "Header.h"

Checking_Int(int iInput, int iType)	// int ���� �˻����ִ� �Լ� 
{
	if(iType == 1)	// ���� 1, 2 �ϋ�
	{
		if(iInput < 0 || iInput > 2)
			return INT_MAX;
		else return iInput;
	} 
}


