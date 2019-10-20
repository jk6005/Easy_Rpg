#include "Interface.h"

bool Player_Attack(int iP_ATK, int iM_DEF)	// 플레이어가 공격하는 함수 
{
	float Percent = rand() % 10000 / ATTACK_PERCENT;
	float Attacker = LOW_LIMIT_ATK + (float)iP_ATK - (float)iM_DEF;
	
	cout << "기본 확률(" << LOW_LIMIT_ATK << ") + 공격력(" << iP_ATK << ") - 몬스터의 방어력(" << iM_DEF << ")" << endl;
	if(Percent <= Attacker)
	{
		cout << "공격 성공!" << endl;
		return true;
	}
	else 
	{
		cout << "공격 실패!" << endl;
		return false;
	}
}

bool Monster_Attack(int iM_ATK, int iP_DEF)	// 몬스터가 공격하는 함수 
{
	float Percent = rand() % 10000 / ATTACK_PERCENT;
	float Attacker = LOW_LIMIT_ATK + (float)iM_ATK - (float)iP_DEF;
	
	cout << "기본 확률(" << LOW_LIMIT_ATK << ") + 공격력(" << iM_ATK << ") - 몬스터의 방어력(" << iP_DEF << ")" << endl;
	if(Percent <= Attacker)
	{
		cout << "방어 실패!" << endl;
		return true;
	}
	else 
	{
		cout << "방어 성공!" << endl;
		return false;
	}
}

Print_Combat_Interface()	// 전투 인텅페이스 출력
{
	// 이거 만들어야함
	// 1. 공격 2. 스킬 3. 아이템 등등.. 
} 

// Bandit = 0, Wolf = 1
Combat(cl_Player * Player, int MOB_TYPE)	// 전투하는 함수 
{
	cl_Monster * Monster = new cl_Monster(MOB_TYPE);	// 몬스터 생성
	
	while(true)
	{
		system("cls");
		Monster->Print_Monster_Info();	
		cout << endl << endl;
		Player->iPrint_Profil(true);
		getch();
	} 
	
}
