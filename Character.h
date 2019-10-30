#ifndef __CHARACTER__
#define __CHARACTER__

#include "Header.h"

enum Weapon_Name
{
	Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4, Bandit_Knife = 10
};

class cl_Weapon // 무기클래스 
{
	private:
		int iW_Number;
		string sW_Name;
		string sW_Info; 
		int iW_Atk;
		int iW_Dmg;
		int iW_Eng;
		int iW_Eng_Re;
		int iW_Eng_Use;
		int iW_Honer;
	public:
		cl_Weapon();	// 생성자 
	//	~cl_Weapon(); 	// 소멸자
	 
		int Set_Weapon(int iW_Num);	// 무기 를 교체하는 함
		// 무기 교체하는 함수의 무기를 세팅하는 함수 
		int Equip_Weapon(int iW_NUM, string sW_NAME, string sW_INFO, int iW_ATK, int iW_DMG, int iW_ENG, int iW_ENG_RE, int iW_ENG_USE, int iW_HONER);
		
		int Return_Number();	// 무기 순번을 반환하는 함수 
		int Print_Weapon();	// 무기능력치를 표시하는 함수
		void Print_Wname();	// 무기이름을 반환하는 함수
		int Return_Wdmg();	// 무기데미지를 반환하는 함수 
		int Return_Watk();	// 무기 근접공격을 반환하는 함수 
		int Return_WEng();	// 무기 기력을  반환하는 함수 
		int Return_WEng_Re();	// 무기 기력_회복 을 반환하는함수 
		int Return_WEng_Use();	// 무기_사용 을 반환하는 함수 
		int Return_Whoner();	// 무기 명예치를 반환하는 함수 
};

enum Aromr_Name
{
	Body = 0, Oid_Armor = 1, Silk_Armor = 2, Skin_Armor = 3, Up_Skin_Armor = 4, Armor = 5, Bandit_Robe = 10
};

class cl_Armor	//	갑옷 클래스
{
	private:
		int iA_Number;
		string sA_Name;
		string sA_Info;
		int iA_Max_Health;
		int iA_Def;
		int iA_Eng;
		int iA_Eng_Use;
		int iA_Eng_Re;
		int iA_Honer;
	public:
		cl_Armor();	// 방어구 생성자 
	//	~cl_Armor();	// 방어구 소멸자
	
		int Set_Armor(int iA_Num);	// 방어구 를 교체하는함수
		// 방어구를 교체하는 함수에서 데이터를 전송하는 함수
		int Equip_Armor(int iA_NUM, string sA_NAME, string sA_INFO, int iA_HEALTH, int iA_DEF, int iA_ENG, int iA_ENG_USE, int iA_ENG_RE, int iA_HONER); 
		
		void Print_AName();	// 방어구 이름을 반환하는 함수 
		int Print_Armor();	// 방어구 능려깇를 반환하는 함수
		int Return_AEng_Use();	// 방어자세 사용 기력 반환 
		int Return_AHealth();	// 최대체력을 반환하는 함수 
		int Return_ADef();	// 방어도를 반환하는 함수 
		int Return_AEng();	// 기력을 반환하는 함수 
		int Return_AEng_Re();	// 기력_회복 을 반환하는 함수 
		int Return_AHoner();	// 방어구 명성을 반환하는 함수 
};

enum ENG_LANG
{
	ENG_ATTAK = 0, ENG_DODGE = 1, ENG_SKILL_1 = 2, ENG_SKILL_2 = 3
};

class cl_Skill	// 스킬 클래스 
{
	private:
		int iS_Type;	// 무기타입 1. 장검, 2. 도끼
		bool iS_OFF[2];	// 스킬 활성화 유무 
		// -- 스킬 1 
		string sS_1_NAME; 
		string sS_1_INFO; 
		int iS_1_ATK;
		int iS_1_DEF;
		int iS_1_DMG;
		int iS_1_HP;
		int iS_1_ENG;
		// -- 스킬 2 
		string sS_2_NAME;
		string sS_2_INFO;
		int iS_2_ATK;
		int iS_2_DEF;
		int iS_2_DMG;
		int iS_2_HP;
		int iS_2_ENG;
	public:
		cl_Skill();	// 생성자 
		//cl_Skill();	// 소멸자
	
		// -- 인터페이스 함수
		int Set_Weapon_Style(int iType);	// 플레이어의 무기 스타일을 정하는 함수 
		bool Set_Skill(int iType);	// 스킬을 활성화하는 함수 
	
		// -- 값을 반환
		int Return_SKILL_OFF(int iType);	// 스킬 활성화 유무를 반환하는 함수 
		int Return_iS_Type();	// 무기타입 반환 
		int Print_NAME(int iType); // 스킬 이름 반환 
		int Print_INFO(int iType);	// 스킬 설명 반환 
		int Return_ATK(int iType);	// 스킬 근접공격 반환 
		int Return_DEF(int iType);	// 스킬 근접방어 반환 
		int Return_DMG(int iType);	// 스킬 무기피해 반환 
		int Return_HP(int iType);	// 스킬 체력 반환 
		int Return_ENG(int iType);	// 스킬 소모 기력 반환 
	 
};

class cl_Player		// 플레이어 클래스 
{
	public:
		cl_Weapon * iP_Weapon; 
		cl_Armor * iP_Armor;
		cl_Skill * iP_Skill; 
	private:
		string sP_Name;
		int iP_Health;
		int iP_Max_Health; 
		int iP_Atk;
		int iP_Def;
		int iP_Dmg;
		int iP_Honer;
		int iP_Eng;
		int iP_Eng_Max;
		int iP_Eng_Re;
		int iP_Dodge;
	public:	
		cl_Player();	// 플레이어 생성자 이름을 입력받는다. 
		~cl_Player();	// 플레이어 소멸자 무기값을 제거 
		
		// -- 무기 및 방어구 
		int iEquip_Weapon(int iType, bool bType = false);	// 무기를 장착/해제 하는 함수
		int Sync_Weapon(int iType);			// 무기의 능력치를 적용하는 함수 
		int iEquip_Armor(int iType, bool bType = false);	// 방어구를 장착/해제 하는 함수 
		int Sync_Armor(int iType);	// 방어구의 능력치를 적용하는 함수 
		
		// -- 인터페이스 
		int iReturn_Inventory();	// 인벤토리 창을 여는 함수 
		int iPrint_Profil(bool bType);	// 플레이어의 정보를 출력하는 함수 
		
		// -- 상태 
		int Input_Damage(int iDamage);		// 플레이어가 데미지를 입는 함수
		int Input_Dodge(int iType);	// 플레이어가 회피하는함수 
		int Player_Eng_Use(int iEng_Use);	// 플레이어가 기력을 소비하는함수 
		int Player_Eng_Recovery(bool bType);	// 플레이어가 기력을 회복하는 함수
		int Player_Buff(bool bType, int iType, int iTemp = 0); // 플레이어가 버프효과를 받는 함수	/////////////////////////////////////////// 
		
		// -- 값을 반환 
		int Print_Name();	// 플레이어의 이름을 반환하는 함수 
		int Return_Health();	// 플레이어의 체력을 반환하는 함수
		int Return_Max_Health();	// 플레이어의 최대체력을 반환하는함수 
		int Return_Atk();	// 플레이어의 근접공격 을 반환하는 함수	
		int Return_Def();	// 플레이어의 근접방어 을 반환하는 함수	
		int Return_Dmg();	// 플레이어의 무기피해 을 반환하는 함수
		int Return_Honer();	// 플레이어의 명성 을 반환하는 함수
		int Return_Eng();	// 플레이어의 기력 을 반환하는 함수
		int Return_Eng_Max();	// 플레이어의 기력 최댓값을 반환하는 함수 
		int Return_Eng_Re();	// 플레이어의 기력_회복 을 반환하는 함수
		int Return_Dodge();	// 플레이어의 회피력값을 반환하는 함수 
		
		//	-- 스킬 
};

enum Monster_Number
{
	Bandit = 0, Wolf = 1
};

class cl_Monster	// 몬스터 클래스 
{
	private: 
		int iSpecies;
		string sM_Name;
		cl_Weapon * iM_Weapon;
		cl_Armor * iM_Armor;
		int iM_Health;
		int iM_Max_Health; 
		int iM_Atk;
		int iM_Def;
		int iM_Dmg;
		int iM_Eng;
		int iM_Eng_Max;
		int iM_Eng_Re;
		int iM_Honer;
	public:
		cl_Monster(int iType);	// 몬스터 생성자
		~cl_Monster();	// 몬스터 소멸자
		
		// -- 무기 및 방어구 
		int Sync_Status();	// 몬스터의 장비를 동기화 
		int Human_Type(string sNAME, int iHoner, int iWeapon, int iArmor);	// 인간형 몬스터 생성
		// 짐승형 몬스터 생성 
		int Beast_Type(string sNAME, int iHealth, int iAtk, int iDef, int iDmg, int iEng, int iEng_Max, int iEng_Re, int iHoner); 
		
		//	-- 인터페이스
		int Print_Monster_Info();	// 몬스터의 상태창을 표시 
		
		// -- 상태
		int Input_Damage(int iDamage);	// 몬스터가 데미지를 입는 함수 
		int Monster_Eng_Use();	// 몬스터가 기력을 소비하는함수
		int Monster_Eng_Recovery();	// 몬스터가 기력을 회복하는 함수
		int Monster_Buff(bool bType, int iType , int iTemp = 0); // 몬스터가 버프효과를 받는 함수	///////////////////////////////////////////
		
		//	-- 값을 반환 
		int Return_Health();	// 몬스터의 체력을 반환 
		int Return_Max_Health();	// 몬스터의 최대체력을 반환 
		int Return_Atk();	// 몬스터의 근접공격을 반환 
		int Return_Def();	// 몬스터의 근접방어를 반환 
		int Return_Dmg();	// 몬스터의 공격력을 반환 
		int Return_Eng();	// 몬스터의 기력을 반환 
		int Return_Eng_Max();	// 몬스터의 최대기력을 반환 
		int Return_Eng_Re();	// 몬스터의 기력_회복 을 반환 
		int Return_Honer();	// 몬스터의 명성을 반환 
};

#endif
