#ifndef __HEADER__
#define __HEADER__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <string>

#define ATTACK_PERCENT 100.f		// ���� ���� �ִ�
#define LOW_LIMIT_ATK 30.f	// 	�ּ� ���ݰ� 

using namespace std;

enum BUFF_LANG
	{
		B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG
	};

int Checking_Int(int iInput, int iType); 	// int ���� �˻����ִ� �Լ� 
int Choice_Event(int iType);	// 1, 2 �� �����ϴ� �Լ� 
int Percent_Make(int iTemp, int iUp);	// int �� �ۼ�Ʈ�� ��ȯ�ϴ� �Լ� 

#endif
