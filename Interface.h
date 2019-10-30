#ifndef __INTERFACE__
#define __INTERFACE__

#include "Header.h"
#include "Character.h"

	//	B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG

class cl_Player_Buff	// 전투중 플레이어의 버프/디버프를 표시하는 클래스
{
	private:
		// -- 버프 
		bool P_Buff_Dodge;
		bool P_Buff_Rest;
		bool P_Buff_Atk;
		bool P_Buff_Def;
		bool P_Buff_Eng;
		bool P_Buff_Eng_Max;
		bool P_Buff_Eng_Re;
		bool P_Buff_Dmg;
		
		// -- 디버프 
		bool P_DeBuff_Atk;
		bool P_DeBuff_Def;
		bool P_DeBuff_Eng;
		bool P_DeBuff_Eng_Max;
		bool P_DeBuff_Eng_Re;
		bool P_DeBuff_Dmg;
	public:
		cl_Player * PLAYER; 
		cl_Player_Buff(cl_Player * Player);	// 생성자
	//	~cl_Player_Buff();	// 소멸자 
		
		// -- 인터페이스 
		int Checking_Buff();	// 버프를 체크하는 함수
		int BUFF_ON(int iType, int iTemp = 0);	// 버프를 키는 함수 
		
		
		// -- 값을 반환
		bool Return_Buff_Dodge();	// 방어자세 버프 반환
		bool Return_Buff_Rest();	// 숨고르기 버프 반환 
		bool Return_Buff_Atk();	// 공격공격 버프 반환 
		bool Return_Buff_Def();	// 근접방어 버프 반환 
		bool Return_Buff_Eng();	// 기력 버프 반환 
		bool Return_Buff_Eng_Max();	// 기력_최대치 버프 반환 
		bool Return_Buff_Eng_Re();	// 기력_회복 버프 반환 
		bool Return_Buff_Dmg();	// 무기피해 버프 반환 
		
		bool Return_DeBuff_Atk();	// 근접공격 디버프 반환 
		bool Return_DeBufF_Def();	// 근접방어 디버프 반한 
		bool Return_DeBuff_Eng();	// 기력 디버프 반환 
		bool Return_DeBuff_Eng_Max();	// 기력_최대치 디버프 반환 
		bool Return_DeBuff_Eng_Re();	// 기력_회복 디버프 반환 
		bool Return_DeBuff_Dmg();	// 무기피해 디버프 반환 
};

class cl_Monster_Buff	// 전투중 몬스터의 버프/디버프를 표시하는 클래스 
{
	private:
		// -- 버프 
		bool M_Buff_Dodge;
		bool M_Buff_Atk;
		bool M_Buff_Def;
		bool M_Buff_Eng;
		bool M_Buff_Eng_Max;
		bool M_Buff_Eng_Re;
		bool M_Buff_Dmg;
		
		// -- 디버프 
		bool M_DeBuff_Atk;
		bool M_DeBuff_Def;
		bool M_DeBuff_Eng;
		bool M_DeBuff_Eng_Max;
		bool M_DeBuff_Eng_Re;
		bool M_DeBuff_Dmg;
	public:
	 cl_Monster * MONSTER;
	 cl_Monster_Buff(cl_Monster * Monster);	// 생성자
	 
	 // -- 인터페이스
	 int Checking_Mob_Buff();	// 몬스터 버프를 체크하느함수
	 int Mob_BUFF_ON(int iType, int iTemp = 0);	// 몬스터 버프를 키는함수 
	 
	 // -- 값을 반환 
	 	bool Return_Buff_Atk();	// 공격공격 버프 반환 
		bool Return_Buff_Def();	// 근접방어 버프 반환 
		bool Return_Buff_Eng();	// 기력 버프 반환 
		bool Return_Buff_Eng_Max();	// 기력_최대치 버프 반환 
		bool Return_Buff_Eng_Re();	// 기력_회복 버프 반환 
		bool Return_Buff_Dmg();	// 무기피해 버프 반환 
		
		bool Return_DeBuff_Atk();	// 근접공격 디버프 반환 
		bool Return_DeBufF_Def();	// 근접방어 디버프 반한 
		bool Return_DeBuff_Eng();	// 기력 디버프 반환 
		bool Return_DeBuff_Eng_Max();	// 기력_최대치 디버프 반환 
		bool Return_DeBuff_Eng_Re();	// 기력_회복 디버프 반환 
		bool Return_DeBuff_Dmg();	// 무기피해 디버프 반환 
};

// -- 전투
bool Player_Attack(int iP_ATK, int iM_DEF);	// 플레이어가 공격하는 함수 
bool Monster_Attack(int iM_ATK, int IP_DEF);	// 몬스터가 공격하는 함수 

int Print_Combat_Interface();	// 전투 인터페이스 출력 
int Print_Skill_Interface(cl_Player *Player, cl_Monster * Monster, cl_Player_Buff * P_Buff, cl_Monster_Buff * M_Buff, bool bTurn_Checker);	// 스킬 인터페이스 출력 

// 전투 함수 
int Combat(cl_Player * Player, int MOB_TYPE);	// 전투하는 함수 


#endif
