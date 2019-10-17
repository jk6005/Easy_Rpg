#include "Header.h"

Checking_Int(int iInput, int iType)	// int 값을 검사해주는 함수 
{
	if(iType == 1)	// 값이 1, 2 일떄
	{
		if(iInput < 0 || iInput > 2)
			return INT_MAX;
		else return iInput;
	} 
}


