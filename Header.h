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

int Checking_Int(int iInput, int iType); 	// int ���� �˻����ִ� �Լ� 
int Choice_Event(int iType);	// 1, 2 �� �����ϴ� �Լ� 

#endif
