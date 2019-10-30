#ifndef __INTERFACE__
#define __INTERFACE__

#include "Header.h"
#include "Character.h"

	//	B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG

class cl_Player_Buff	// ������ �÷��̾��� ����/������� ǥ���ϴ� Ŭ����
{
	private:
		// -- ���� 
		bool P_Buff_Dodge;
		bool P_Buff_Rest;
		bool P_Buff_Atk;
		bool P_Buff_Def;
		bool P_Buff_Eng;
		bool P_Buff_Eng_Max;
		bool P_Buff_Eng_Re;
		bool P_Buff_Dmg;
		
		// -- ����� 
		bool P_DeBuff_Atk;
		bool P_DeBuff_Def;
		bool P_DeBuff_Eng;
		bool P_DeBuff_Eng_Max;
		bool P_DeBuff_Eng_Re;
		bool P_DeBuff_Dmg;
	public:
		cl_Player * PLAYER; 
		cl_Player_Buff(cl_Player * Player);	// ������
	//	~cl_Player_Buff();	// �Ҹ��� 
		
		// -- �������̽� 
		int Checking_Buff();	// ������ üũ�ϴ� �Լ�
		int BUFF_ON(int iType, int iTemp = 0);	// ������ Ű�� �Լ� 
		
		
		// -- ���� ��ȯ
		bool Return_Buff_Dodge();	// ����ڼ� ���� ��ȯ
		bool Return_Buff_Rest();	// ������ ���� ��ȯ 
		bool Return_Buff_Atk();	// ���ݰ��� ���� ��ȯ 
		bool Return_Buff_Def();	// ������� ���� ��ȯ 
		bool Return_Buff_Eng();	// ��� ���� ��ȯ 
		bool Return_Buff_Eng_Max();	// ���_�ִ�ġ ���� ��ȯ 
		bool Return_Buff_Eng_Re();	// ���_ȸ�� ���� ��ȯ 
		bool Return_Buff_Dmg();	// �������� ���� ��ȯ 
		
		bool Return_DeBuff_Atk();	// �������� ����� ��ȯ 
		bool Return_DeBufF_Def();	// ������� ����� ���� 
		bool Return_DeBuff_Eng();	// ��� ����� ��ȯ 
		bool Return_DeBuff_Eng_Max();	// ���_�ִ�ġ ����� ��ȯ 
		bool Return_DeBuff_Eng_Re();	// ���_ȸ�� ����� ��ȯ 
		bool Return_DeBuff_Dmg();	// �������� ����� ��ȯ 
};

class cl_Monster_Buff	// ������ ������ ����/������� ǥ���ϴ� Ŭ���� 
{
	private:
		// -- ���� 
		bool M_Buff_Dodge;
		bool M_Buff_Atk;
		bool M_Buff_Def;
		bool M_Buff_Eng;
		bool M_Buff_Eng_Max;
		bool M_Buff_Eng_Re;
		bool M_Buff_Dmg;
		
		// -- ����� 
		bool M_DeBuff_Atk;
		bool M_DeBuff_Def;
		bool M_DeBuff_Eng;
		bool M_DeBuff_Eng_Max;
		bool M_DeBuff_Eng_Re;
		bool M_DeBuff_Dmg;
	public:
	 cl_Monster * MONSTER;
	 cl_Monster_Buff(cl_Monster * Monster);	// ������
	 
	 // -- �������̽�
	 int Checking_Mob_Buff();	// ���� ������ üũ�ϴ��Լ�
	 int Mob_BUFF_ON(int iType, int iTemp = 0);	// ���� ������ Ű���Լ� 
	 
	 // -- ���� ��ȯ 
	 	bool Return_Buff_Atk();	// ���ݰ��� ���� ��ȯ 
		bool Return_Buff_Def();	// ������� ���� ��ȯ 
		bool Return_Buff_Eng();	// ��� ���� ��ȯ 
		bool Return_Buff_Eng_Max();	// ���_�ִ�ġ ���� ��ȯ 
		bool Return_Buff_Eng_Re();	// ���_ȸ�� ���� ��ȯ 
		bool Return_Buff_Dmg();	// �������� ���� ��ȯ 
		
		bool Return_DeBuff_Atk();	// �������� ����� ��ȯ 
		bool Return_DeBufF_Def();	// ������� ����� ���� 
		bool Return_DeBuff_Eng();	// ��� ����� ��ȯ 
		bool Return_DeBuff_Eng_Max();	// ���_�ִ�ġ ����� ��ȯ 
		bool Return_DeBuff_Eng_Re();	// ���_ȸ�� ����� ��ȯ 
		bool Return_DeBuff_Dmg();	// �������� ����� ��ȯ 
};

// -- ����
bool Player_Attack(int iP_ATK, int iM_DEF);	// �÷��̾ �����ϴ� �Լ� 
bool Monster_Attack(int iM_ATK, int IP_DEF);	// ���Ͱ� �����ϴ� �Լ� 

int Print_Combat_Interface();	// ���� �������̽� ��� 
int Print_Skill_Interface(cl_Player *Player, cl_Monster * Monster, cl_Player_Buff * P_Buff, cl_Monster_Buff * M_Buff, bool bTurn_Checker);	// ��ų �������̽� ��� 

// ���� �Լ� 
int Combat(cl_Player * Player, int MOB_TYPE);	// �����ϴ� �Լ� 


#endif
