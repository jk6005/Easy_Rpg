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

Choice_Event(int iType)	// �����ϴ� �Լ� 
{
	if(iType == 1)	// 1.�� 2. �ƴϿ�  
	{
		Choice_POS1:
		int iInput = getch();
		iInput -= '0';
		if(Checking_Int(iInput , 1) != INT_MAX)
		{
			if(iInput == 1)return true;
			else return false;
		}
		else goto Choice_POS1;
	}
	else if(iType == 2) // 2�������� Ex )) 1. ����1 2. ����2 
	{
		Choice_POS2:
		int iInput = getch();
		iInput -= '0';
		if(Checking_Int(iInput , 1) != INT_MAX)
			return iInput;
		else goto Choice_POS2;
	}
}
