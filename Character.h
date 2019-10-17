#ifndef __CHARACTER__
#define __CHARACTER__

#include "Header.h"
#include "Interface.h"

enum Weapon_Name
{
	Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4
};

class cl_Weapon // 무기클래스 
{
	private:
		int iW_Number;
		string sW_Name;
		string sW_Info; 
		int iW_Dmg;
		int iW_Atk;
		int iW_Spd;
		int iW_Honer;
	public:
		cl_Weapon();	// 생성자 
	//	~cl_Weapon(); 	// 소멸자
	 
		int Set_Weapon(int iW_Num);	// 무기 를 교체하는 함
		int Print_Weapon();	// 무기능력치를 표시하는 함수
	//	string return_Wname();	// 무기이름을 반환하는 함수
		int Return_Wdmg();	// 무기데미지를 반환하는 함수 
		int Return_Watk();	// 무기 근접공격을 반환하는 함수 
		int Return_Wspd();	// 무기 스피드를 반환하는 함수 
		int Return_Whoner();	// 무기 명예치를 반환하는 함수 
};

class cl_Player		// 플레이어 클래스 
{
	private:
		cl_Weapon * iP_Weapon; 
		string sP_Name;
		int iP_Health;
		int iP_Atk;
		int iP_Def;
		int iP_Spd;
		int iP_Dmg;
		int iP_Honer;
	public:	
		cl_Player();	// 플레이어 생성자 이름을 입력받는다. 
		~cl_Player();	// 플레이어 소멸자 무기값을 제거 
		
		int iEquip_Weapon(int iType);	// 무기를 장착/해제 하는 함수
		int iReturn_Inventory();	// 인벤토리 창을 여는 함수 
		int iPrint_Profil();	// 플레이어의 정보를 출력하는 함수 
};

#endif
