#ifndef __CHARACTER__
#define __CHARACTER__

#include "Header.h"
#include "Interface.h"

enum Weapon_Name
{
	Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4
};

class cl_Weapon // ����Ŭ���� 
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
		cl_Weapon();	// ������ 
	//	~cl_Weapon(); 	// �Ҹ���
	 
		int Set_Weapon(int iW_Num);	// ���� �� ��ü�ϴ� ��
		int Print_Weapon();	// ����ɷ�ġ�� ǥ���ϴ� �Լ�
	//	string return_Wname();	// �����̸��� ��ȯ�ϴ� �Լ�
		int Return_Wdmg();	// ���ⵥ������ ��ȯ�ϴ� �Լ� 
		int Return_Watk();	// ���� ���������� ��ȯ�ϴ� �Լ� 
		int Return_Wspd();	// ���� ���ǵ带 ��ȯ�ϴ� �Լ� 
		int Return_Whoner();	// ���� ��ġ�� ��ȯ�ϴ� �Լ� 
};

class cl_Player		// �÷��̾� Ŭ���� 
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
		cl_Player();	// �÷��̾� ������ �̸��� �Է¹޴´�. 
		~cl_Player();	// �÷��̾� �Ҹ��� ���Ⱚ�� ���� 
		
		int iEquip_Weapon(int iType);	// ���⸦ ����/���� �ϴ� �Լ�
		int iReturn_Inventory();	// �κ��丮 â�� ���� �Լ� 
		int iPrint_Profil();	// �÷��̾��� ������ ����ϴ� �Լ� 
};

#endif
