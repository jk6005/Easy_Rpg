#ifndef __INTERFACE__
#define __INTERFACE__

#include "Header.h"
#include "Character.h"

// -- ����
bool Player_Attack(int iP_ATK, int iM_DEF);	// �÷��̾ �����ϴ� �Լ� 
bool Monster_Attack(int iM_ATK, int IP_DEF);	// ���Ͱ� �����ϴ� �Լ� 

int Print_Combat_Interface();	// ���� �������̽� ��� 

// ���� �Լ� 
int Combat(cl_Player * Player, int MOB_TYPE);	// �����ϴ� �Լ� 


#endif
