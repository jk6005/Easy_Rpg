#ifndef __CHARACTER__
#define __CHARACTER__

#include "Header.h"

enum Weapon_Name
{
	Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4, Bandit_Knife = 10
};

class cl_Weapon // ����Ŭ���� 
{
	private:
		int iW_Number;
		string sW_Name;
		string sW_Info; 
		int iW_Atk;
		int iW_Dmg;
		int iW_Eng;
		int iW_Eng_Re;
		int iW_Honer;
	public:
		cl_Weapon();	// ������ 
	//	~cl_Weapon(); 	// �Ҹ���
	 
		int Set_Weapon(int iW_Num);	// ���� �� ��ü�ϴ� ��
		// ���� ��ü�ϴ� �Լ��� ���⸦ �����ϴ� �Լ� 
		int Equip_Weapon(int iW_NUM, string sW_NAME, string sW_INFO, int iW_ATK, int iW_DMG, int iW_ENG, int iW_ENG_RE, int iW_HONER);
		
		int Print_Weapon();	// ����ɷ�ġ�� ǥ���ϴ� �Լ�
		void Print_Wname();	// �����̸��� ��ȯ�ϴ� �Լ�
		int Return_Wdmg();	// ���ⵥ������ ��ȯ�ϴ� �Լ� 
		int Return_Watk();	// ���� ���������� ��ȯ�ϴ� �Լ� 
		int Return_WEng();	// ���� �����  ��ȯ�ϴ� �Լ� 
		int Return_WEng_Re();	// ���� ���_ȸ�� �� ��ȯ�ϴ��Լ� 
		int Return_Whoner();	// ���� ��ġ�� ��ȯ�ϴ� �Լ� 
};

enum Aromr_Name
{
	Body = 0, Oid_Armor = 1, Silk_Armor = 2, Skin_Armor = 3, Up_Skin_Armor = 4, Armor = 5, Bandit_Robe = 10
};

class cl_Armor	//	���� Ŭ����
{
	private:
		int iA_Number;
		string sA_Name;
		string sA_Info;
		int iA_Max_Health;
		int iA_Def;
		int iA_Eng;
		int iA_Eng_Re;
		int iA_Honer;
	public:
		cl_Armor();	// �� ������ 
	//	~cl_Armor();	// �� �Ҹ���
	
		int Set_Armor(int iA_Num);	// �� �� ��ü�ϴ��Լ�
		// ���� ��ü�ϴ� �Լ����� �����͸� �����ϴ� �Լ�
		int Equip_Armor(int iA_NUM, string sA_NAME, string sA_INFO, int iA_HEALTH, int iA_DEF, int iA_ENG, int iA_ENG_RE, int iA_HONER); 
		
		void Print_AName();	// �� �̸��� ��ȯ�ϴ� �Լ� 
		int Print_Armor();	// �� �ɷ����� ��ȯ�ϴ� �Լ�
		int Return_AHealth();	// �ִ�ü���� ��ȯ�ϴ� �Լ� 
		int Return_ADef();	// ���� ��ȯ�ϴ� �Լ� 
		int Return_AEng();	// ����� ��ȯ�ϴ� �Լ� 
		int Return_AEng_Re();	// ���_ȸ�� �� ��ȯ�ϴ� �Լ� 
		int Return_AHoner();	// �� ���� ��ȯ�ϴ� �Լ� 
};

class cl_Player		// �÷��̾� Ŭ���� 
{
	private:
		cl_Weapon * iP_Weapon; 
		cl_Armor * iP_Armor;
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
		int iP_Skill[6];
	public:	
		cl_Player();	// �÷��̾� ������ �̸��� �Է¹޴´�. 
		~cl_Player();	// �÷��̾� �Ҹ��� ���Ⱚ�� ���� 
		
		// -- ���� �� �� 
		int iEquip_Weapon(int iType, bool bType = false);	// ���⸦ ����/���� �ϴ� �Լ�
		int Sync_Weapon(int iType);			// ������ �ɷ�ġ�� �����ϴ� �Լ� 
		int iEquip_Armor(int iType, bool bType = false);	// ���� ����/���� �ϴ� �Լ� 
		int Sync_Armor(int iType);	// ���� �ɷ�ġ�� �����ϴ� �Լ� 
		
		// -- �������̽� 
		int iReturn_Inventory();	// �κ��丮 â�� ���� �Լ� 
		int iPrint_Profil(bool bType);	// �÷��̾��� ������ ����ϴ� �Լ� 
		
		// -- ���� ��ȯ 
		int Print_Name();	// �÷��̾��� �̸��� ��ȯ�ϴ� �Լ� 
		int Return_Health();	// �÷��̾��� ü���� ��ȯ�ϴ� �Լ�
		int Return_Max_Health();	// �÷��̾��� �ִ�ü���� ��ȯ�ϴ��Լ� 
		int Return_Atk();	// �÷��̾��� �������� �� ��ȯ�ϴ� �Լ�	
		int Return_Def();	// �÷��̾��� ������� �� ��ȯ�ϴ� �Լ�	
		int Return_Dmg();	// �÷��̾��� �������� �� ��ȯ�ϴ� �Լ�
		int Return_Honer();	// �÷��̾��� �� �� ��ȯ�ϴ� �Լ�
		int Return_Eng();	// �÷��̾��� ��� �� ��ȯ�ϴ� �Լ�
		int Return_Eng_Max();	// �÷��̾��� ��� �ִ��� ��ȯ�ϴ� �Լ� 
		int Return_Eng_Re();	// �÷��̾��� ���_ȸ�� �� ��ȯ�ϴ� �Լ�
		
		//	-- ��ų 
};

enum Monster_Number
{
	Bandit = 0, Wolf = 1
};

class cl_Monster	// ���� Ŭ���� 
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
		cl_Monster(int iType);	// ���� ������
		~cl_Monster();	// ���� �Ҹ���
		
		// -- ���� �� �� 
		int Sync_Status();	// ������ ��� ����ȭ 
		int Human_Type(string sNAME, int iHoner, int iWeapon, int iArmor);	// �ΰ��� ���� ����
		// ������ ���� ���� 
		int Beast_Type(string sNAME, int iHealth, int iAtk, int iDef, int iDmg, int iEng, int iEng_Max, int iEng_Re, int iHoner); 
		
		//	-- �������̽�
		int Print_Monster_Info();	// ������ ����â�� ǥ�� 
		
		//	-- ���� ��ȯ 
		int Return_Health();	// ������ ü���� ��ȯ 
		int Return_Max_Health();	// ������ �ִ�ü���� ��ȯ 
		int Return_Atk();	// ������ ���������� ��ȯ 
		int Return_Def();	// ������ ������ ��ȯ 
		int Return_Dmg();	// ������ ���ݷ��� ��ȯ 
		int Return_Eng();	// ������ ����� ��ȯ 
		int Return_Eng_Max();	// ������ �ִ����� ��ȯ 
		int Return_Eng_Re();	// ������ ���_ȸ�� �� ��ȯ 
		int Return_Honer();	// ������ ���� ��ȯ 
};

#endif
