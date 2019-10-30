#ifndef __HEADER__
#define __HEADER__

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <string>

#define ATTACK_PERCENT 100.f		// 공격 난수 최댓값
#define LOW_LIMIT_ATK 30.f	// 	최소 공격값 

using namespace std;

enum BUFF_LANG
	{
		B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG
	};

int Checking_Int(int iInput, int iType); 	// int 값을 검사해주는 함수 
int Choice_Event(int iType);	// 1, 2 를 선택하는 함수 
int Percent_Make(int iTemp, int iUp);	// int 형 퍼센트를 반환하는 함수 

#endif
