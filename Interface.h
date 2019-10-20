#ifndef __INTERFACE__
#define __INTERFACE__

#include "Header.h"
#include "Character.h"

// -- 전투
bool Player_Attack(int iP_ATK, int iM_DEF);	// 플레이어가 공격하는 함수 
bool Monster_Attack(int iM_ATK, int IP_DEF);	// 몬스터가 공격하는 함수 

int Print_Combat_Interface();	// 전투 인터페이스 출력 

// 전투 함수 
int Combat(cl_Player * Player, int MOB_TYPE);	// 전투하는 함수 


#endif
