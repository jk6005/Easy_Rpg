#include "Header.h"

Checking_Int(int iInput, int iType)	// int 값을 검사해주는 함수 
{
	if(iType == 1)	// 값이 1, 2 일떄
	{
		if(iInput < 0 || iInput > 2)
			return INT_MAX;
		else return iInput;
	}
	
	else if(iType == 2)	// 전투인터페이스 선택 화면
	{
		if(iInput < 0 || iInput > 4)
			return INT_MAX;
		else return iInput;
	}
	
	else if(iType == 3)	// 스킬 인터페이스 화면
	{
		if(iInput < 0 || iInput > 3)
			return INT_MAX;
		else return iInput;
	} 
}

Choice_Event(int iType)	// 선택하는 함수 
{
	if(iType == 1)	// 1.예 2. 아니오  
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
	else if(iType == 2) // 2지선다형 Ex )) 1. 무기1 2. 무기2 
	{
		Choice_POS2:
		int iInput = getch();
		iInput -= '0';
		if(Checking_Int(iInput , 1) != INT_MAX)
			return iInput;
		else goto Choice_POS2;
	}
	else if(iType == 3)	// 전투 인터페이스 선택화면
	{
		Choice_POS3:
		int iInput = getch();
		iInput -= '0';
		if(Checking_Int(iInput, 2) != INT_MAX)
			return iInput;
		else goto Choice_POS3;
	} 
	else if(iType == 4)	// 스킬 선택화면
	{
		Choice_POS4:
		int iInput = getch();
		iInput -= '0';
		if(Checking_Int(iInput, 3) != INT_MAX)
			return iInput;
		else goto Choice_POS4;
	} 
}

Percent_Make(int iTemp, int iUp)	// int 형 퍼센트를 반환하는 함수
{
	return (iTemp * iUp) / 100;
} 
