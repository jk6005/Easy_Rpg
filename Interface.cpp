#include "Interface.h"


cl_Player_Buff::cl_Player_Buff(cl_Player * Player)	// ������
{
	P_Buff_Dodge = false;
	P_Buff_Rest = false;
	P_Buff_Atk = false;
	P_Buff_Def = false;
	P_Buff_Eng = false;
	P_Buff_Eng_Max = false;
	P_Buff_Eng_Re = false;
	P_Buff_Dmg = false;
	
	P_DeBuff_Atk = false;
	P_DeBuff_Def = false;
	P_DeBuff_Eng = false;
	P_DeBuff_Eng_Max = false;
	P_DeBuff_Eng_Re = false;
	P_DeBuff_Dmg = false;
	
	PLAYER = Player;
}

//B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG
cl_Player_Buff::Checking_Buff()	// ������ üũ�ϴ� �Լ�
{
	if(P_Buff_Dodge == true)
	{
		PLAYER->Input_Dodge(false);	
		P_Buff_Dodge = false;
	}
	
	if(P_Buff_Rest == true)
	{
		PLAYER->Player_Eng_Recovery(false);
		P_Buff_Rest = false;
	}
	
	if(P_Buff_Atk == true)
	{
		P_Buff_Atk = false;
		PLAYER->Player_Buff(false, B_ATK);
	}
	
	if(P_Buff_Def == true)
	{
		P_Buff_Def = false;		
		PLAYER->Player_Buff(false, B_DEF);
	}

	if(P_Buff_Eng == true)
	{
		P_Buff_Eng = false;
		PLAYER->Player_Buff(false, B_ENG);
	}
	
	if(P_Buff_Eng_Max == true)
	{
		P_Buff_Eng_Max = false;
		PLAYER->Player_Buff(false, B_ENG_MAX);
	}
	
	if(P_Buff_Eng_Re == true)
	{
		P_Buff_Eng_Re = false;
		PLAYER->Player_Buff(false, B_ENG_RE);
	}
	
	if(P_Buff_Dmg == true)
	{
		P_Buff_Dmg = false;
		PLAYER->Player_Buff(false, B_DMG);
	}
	
	if(P_DeBuff_Atk == true)
	{
		P_DeBuff_Atk = false;
		PLAYER->Player_Buff(false, DB_ATK);
	}
	
	if(P_DeBuff_Def == true)
	{
		P_DeBuff_Def = false;
		PLAYER->Player_Buff(false, DB_DEF);
	}
	
	if(P_DeBuff_Eng == true)
	{
		P_DeBuff_Eng = false;
		PLAYER->Player_Buff(false, DB_ENG);
	}
	
	if(P_DeBuff_Eng_Max == true)
	{
		P_DeBuff_Eng_Max = false;
		PLAYER->Player_Buff(false, DB_ENG_MAX);
	}
	
	if(P_DeBuff_Eng_Re == true)
	{
		P_DeBuff_Eng_Re = false;
		PLAYER->Player_Buff(false, DB_ENG_RE);
	}
	
	if(P_DeBuff_Dmg == true)
	{
		P_DeBuff_Dmg = false;
		PLAYER->Player_Buff(false, DB_DMG);
	}
		
	return 0;
}

cl_Player_Buff::BUFF_ON(int iType, int iTemp)	// ������ Ű�� �Լ� 
{
	//B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG
	switch(iType)
	{
		case B_DODGE:
			P_Buff_Dodge = true;
			PLAYER->Input_Dodge(true);
			return true;
			
		case B_REST:
			P_Buff_Rest = true;
			PLAYER->Player_Eng_Recovery(true);
			return true;
			
		case B_ATK:
			P_Buff_Atk = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case B_DEF:
			P_Buff_Def = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case B_ENG:
			P_Buff_Eng = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case B_ENG_MAX:
			P_Buff_Eng_Max = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case B_ENG_RE:
			P_Buff_Eng_Re = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case B_DMG:
			P_Buff_Dmg = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case DB_ATK:
			P_DeBuff_Atk = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case DB_DEF:
			P_DeBuff_Def = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case DB_ENG:
			P_DeBuff_Eng = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case DB_ENG_MAX:
			P_DeBuff_Eng_Max = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case DB_ENG_RE:
			P_DeBuff_Eng_Re = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
		
		case DB_DMG:
			P_DeBuff_Dmg = true;
			PLAYER->Player_Buff(true, iType, iTemp);
			return true;
	}
}

bool cl_Player_Buff::Return_Buff_Dodge()	// ����ڼ� ���� ��ȯ
{
	return P_Buff_Dodge;
}

bool cl_Player_Buff::Return_Buff_Rest()	// ������ ���� ��ȯ 
{
	return P_Buff_Rest;
}

bool cl_Player_Buff::Return_Buff_Atk()	// ���ݰ��� ���� ��ȯ 
{
	return P_Buff_Atk;
}

bool cl_Player_Buff::Return_Buff_Def()	// ������� ���� ��ȯ 
{
	return P_Buff_Def;	
}

bool cl_Player_Buff::Return_Buff_Eng()	// ��� ���� ��ȯ 
{
	return P_Buff_Eng;
}

bool cl_Player_Buff::Return_Buff_Eng_Max()	// ���_�ִ�ġ ���� ��ȯ 
{
	return P_Buff_Eng_Max;
}

bool cl_Player_Buff::Return_Buff_Eng_Re()	// ���_ȸ�� ���� ��ȯ 
{
	return P_Buff_Eng_Re;
}

bool cl_Player_Buff::Return_Buff_Dmg()	// �������� ���� ��ȯ 
{
	return P_Buff_Dmg;
}
//							����	===	�����						//
bool cl_Player_Buff::Return_DeBuff_Atk()	// �������� ����� ��ȯ 
{
	return P_DeBuff_Atk;
}

bool cl_Player_Buff::cl_Player_Buff::Return_DeBufF_Def()	// ������� ����� ���� 
{
	return P_DeBuff_Def;
}

bool cl_Player_Buff::Return_DeBuff_Eng()	// ��� ����� ��ȯ 
{
	return P_DeBuff_Eng;
}

bool cl_Player_Buff::Return_DeBuff_Eng_Max()	// ���_�ִ�ġ ����� ��ȯ 
{
	return P_DeBuff_Eng_Max;
}

bool cl_Player_Buff::Return_DeBuff_Eng_Re()	// ���_ȸ�� ����� ��ȯ 
{
	return P_DeBuff_Eng_Re;
}

bool cl_Player_Buff::Return_DeBuff_Dmg()	// �������� ����� ��ȯ
{
	return P_DeBuff_Dmg;
}
		
// �� Class cl_Player_Buff ��	�� Class cl_Player_Buff ��	�� Class cl_Player_Buff ��	�� Class cl_Player_Buff ��	�� Class cl_Player_Buff ��	�� Class cl_Player_Buff ��	�� Class cl_Player_Buff ��	�� Class cl_Player_Buff ��	
//����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������
// �� Class cl_Monster_Buff ��		�� Class cl_Monster_Buff ��		�� Class cl_Monster_Buff ��		�� Class cl_Monster_Buff ��		�� Class cl_Monster_Buff ��		�� Class cl_Monster_Buff ��		�� Class cl_Monster_Buff ��		

cl_Monster_Buff::cl_Monster_Buff(cl_Monster * Monster)	// ������
{
	M_Buff_Atk = false;
	M_Buff_Def = false;
	M_Buff_Eng = false;
	M_Buff_Eng_Max = false;
	M_Buff_Eng_Re = false;
	M_Buff_Dmg = false;
	
	M_DeBuff_Atk = false;
	M_DeBuff_Def = false;
	M_DeBuff_Eng = false;
	M_DeBuff_Eng_Max = false;
	M_DeBuff_Eng_Re = false;
	M_DeBuff_Dmg = false;
	
	MONSTER = Monster;
}

cl_Monster_Buff::Checking_Mob_Buff()	// ������ üũ�ϴ� �Լ�
{	
	if(M_Buff_Atk == true)
	{
		M_Buff_Atk = false;
		MONSTER->Monster_Buff(false, B_ATK);
	}
	
	if(M_Buff_Def == true)
	{
		M_Buff_Def = false;		
		MONSTER->Monster_Buff(false, B_DEF);
	}

	if(M_Buff_Eng == true)
	{
		M_Buff_Eng = false;
		MONSTER->Monster_Buff(false, B_ENG);
	}
	
	if(M_Buff_Eng_Max == true)
	{
		M_Buff_Eng_Max = false;
		MONSTER->Monster_Buff(false, B_ENG_MAX);
	}
	
	if(M_Buff_Eng_Re == true)
	{
		M_Buff_Eng_Re = false;
		MONSTER->Monster_Buff(false, B_ENG_RE);
	}
	
	if(M_Buff_Dmg == true)
	{
		M_Buff_Dmg = false;
		MONSTER->Monster_Buff(false, B_DMG);
	}
	
	if(M_DeBuff_Atk == true)
	{
		M_DeBuff_Atk = false;
		MONSTER->Monster_Buff(false, DB_ATK);
	}
	
	if(M_DeBuff_Def == true)
	{
		M_DeBuff_Def = false;
		MONSTER->Monster_Buff(false, DB_DEF);
	}
	
	if(M_DeBuff_Eng == true)
	{
		M_DeBuff_Eng = false;
		MONSTER->Monster_Buff(false, DB_ENG);
	}
	
	if(M_DeBuff_Eng_Max == true)
	{
		M_DeBuff_Eng_Max = false;
		MONSTER->Monster_Buff(false, DB_ENG_MAX);
	}
	
	if(M_DeBuff_Eng_Re == true)
	{
		M_DeBuff_Eng_Re = false;
		MONSTER->Monster_Buff(false, DB_ENG_RE);
	}
	
	if(M_DeBuff_Dmg == true)
	{
		M_DeBuff_Dmg = false;
		MONSTER->Monster_Buff(false, DB_DMG);
	}

	return 0;
}

cl_Monster_Buff::Mob_BUFF_ON(int iType, int iTemp)	// ������ Ű�� �Լ� 
{
	//B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG
	switch(iType)
	{
		case B_ATK:
			M_Buff_Atk = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case B_DEF:
			M_Buff_Def = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case B_ENG:
			M_Buff_Eng = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case B_ENG_MAX:
			M_Buff_Eng_Max = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case B_ENG_RE:
			M_Buff_Eng_Re = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case B_DMG:
			M_Buff_Dmg = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case DB_ATK:
			M_DeBuff_Atk = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case DB_DEF:
			M_DeBuff_Def = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case DB_ENG:
			M_DeBuff_Eng = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case DB_ENG_MAX:
			M_DeBuff_Eng_Max = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case DB_ENG_RE:
			M_DeBuff_Eng_Re = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
		
		case DB_DMG:
			M_DeBuff_Dmg = true;
			MONSTER->Monster_Buff(true, iType, iTemp);
			return true;
	}
}

bool cl_Monster_Buff::Return_Buff_Atk()	// ���ݰ��� ���� ��ȯ 
{
	return M_Buff_Atk;
}

bool cl_Monster_Buff::Return_Buff_Def()	// ������� ���� ��ȯ 
{
	return M_Buff_Def;	
}

bool cl_Monster_Buff::Return_Buff_Eng()	// ��� ���� ��ȯ 
{
	return M_Buff_Eng;
}

bool cl_Monster_Buff::Return_Buff_Eng_Max()	// ���_�ִ�ġ ���� ��ȯ 
{
	return M_Buff_Eng_Max;
}

bool cl_Monster_Buff::Return_Buff_Eng_Re()	// ���_ȸ�� ���� ��ȯ 
{
	return M_Buff_Eng_Re;
}

bool cl_Monster_Buff::Return_Buff_Dmg()	// �������� ���� ��ȯ 
{
	return M_Buff_Dmg;
}
//							����	===	�����						//
bool cl_Monster_Buff::Return_DeBuff_Atk()	// �������� ����� ��ȯ 
{
	return M_DeBuff_Atk;
}

bool cl_Monster_Buff::Return_DeBufF_Def()	// ������� ����� ���� 
{
	return M_DeBuff_Def;
}

bool cl_Monster_Buff::Return_DeBuff_Eng()	// ��� ����� ��ȯ 
{
	return M_DeBuff_Eng;
}

bool cl_Monster_Buff::Return_DeBuff_Eng_Max()	// ���_�ִ�ġ ����� ��ȯ 
{
	return M_DeBuff_Eng_Max;
}

bool cl_Monster_Buff::Return_DeBuff_Eng_Re()	// ���_ȸ�� ����� ��ȯ 
{
	return M_DeBuff_Eng_Re;
}

bool cl_Monster_Buff::Return_DeBuff_Dmg()	// �������� ����� ��ȯ
{
	return M_DeBuff_Dmg;
}

// �� Class cl_Monster_Buff ��	�� Class cl_Monster_Buff ��	�� Class cl_Monster_Buff ��	�� Class cl_Monster_Buff ��	�� Class cl_Monster_Buff ��	�� Class cl_Monster_Buff ��	�� Class cl_Monster_Buff ��	�� Class cl_Monster_Buff ��	
//����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������

bool Player_Attack(int iP_ATK, int iM_DEF) {	// �÷��̾ �����ϴ� �Լ�
	float Percent = rand() % 10000 / ATTACK_PERCENT;
	float Attacker = LOW_LIMIT_ATK + (float)iP_ATK - (float)iM_DEF;

	cout << "������ �õ��մϴ�!" << endl;
	if(Percent <= Attacker) {
		cout << "������ ���ɷ� (" << Percent << ") < �÷��̾��� ���ݴɷ� (" << Attacker << ")" << endl << endl;
		cout << "��<<<< ���� ����! >>>>" << endl;
		return true;
	} else {
		cout << "������ ���ɷ� (" << Percent << ") > �÷��̾��� ���ݴɷ� (" << Attacker << ")" << endl << endl;
		cout << "��<<<< ���� ����! >>>>" << endl;
		getch();
		return false;
	}
}

bool Monster_Attack(int iM_ATK, int iP_DEF) {	// ���Ͱ� �����ϴ� �Լ�
	float Percent = rand() % 10000 / ATTACK_PERCENT;
	float Attacker = LOW_LIMIT_ATK + (float)iM_ATK - (float)iP_DEF;

	cout << endl <<"���Ͱ� ������ �õ��մϴ�!" << endl;
	if(Percent <= Attacker) {
		cout << "�÷��̾��� ���ɷ� (" << Percent << ") < ������ ���ݴɷ� (" << Attacker << ")" << endl << endl;
		cout << "<<<< ��� ����! >>>>" << endl;
		return true;
	} else {
		cout << "�÷��̾��� ���ɷ� (" << Percent << ") > ������ ���ݴɷ� (" << Attacker << ")" << endl << endl;
		cout << "<<<< ��� ����! >>>>" << endl;
		getch();
		return false;
	}
}

Print_Combat_Interface(cl_Player * Player) {	// ���� �������̽� ���
	// 1. ���� 2. ��ų 3. ������ ���..
	cout << endl << "----------------------------------" << endl;
	cout << "���� �ൿ�� �ұ�?" << endl;
	cout << "1. ���� (�ʿ��� : " << Player->iP_Weapon->Return_WEng_Use() <<")" << endl ;
	cout << "2. ����ڼ� (�ʿ��� : " <<  Player->iP_Armor->Return_AEng_Use() << ")" << endl;
	cout << "3. ������ (ȸ�� ��� : " << Player->Return_Eng_Re() << ")" << endl;
	cout << "4. ��ų " << endl;
	cout << "5. ������" << endl << endl; 
	return Choice_Event(3);
}

int Print_Skill_Interface(cl_Player * Player, cl_Monster * Monster, cl_Player_Buff * P_Buff, cl_Monster_Buff * M_Buff, bool bTurn_Checker)	// ��ų �������̽� ��� 
{
	cout << endl << "----------------------------------" << endl;
	for(int i = 0; i < 2; i++)
	{
		cout << i + 1 << ". ";
		Player->iP_Skill->Print_NAME(i);
		cout << endl; 
		Player->iP_Skill->Print_INFO(i);
		cout << endl;
		cout << "�Ҹ��� : " << Player->iP_Skill->Return_ENG(i);
		cout << endl << endl; 
		if(i == 1)cout << i + 2 << ". ����" << endl;
	}
	int iChoice = Choice_Event(4);
	if(Player->iP_Skill->Return_SKILL_OFF(iChoice) == false)
	{
		cout << endl << "�� ��ų�� ��Ȱ��ȭ �����Դϴ�." << endl;
		getch();
		return false;
	}
	
	if(iChoice == 3)return false;
	// -- ��ų Ȱ��ȭ
	//B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG
	
	if(Player->iP_Skill->Return_iS_Type() == 1)	// Ÿ�� �� 
	{
		switch(iChoice)
		{
			case 1:		// ����� 
				if(Player->Player_Eng_Use(4) == false)
				{
					cout << "����� �����մϴ�!" << endl;
					getch();
				}
				M_Buff->Mob_BUFF_ON(DB_ATK, 15);
				if(Player->Player_Eng_Use(ENG_SKILL_1) == false)
				{
					bTurn_Checker = true;
					return false;
				}
				Monster->Input_Damage(Percent_Make(Player->Return_Dmg(), Player->iP_Skill->Return_DMG(0)));
				if(Monster->Return_Health() < 0)return false;
				return true;
			case 2:		// �ߵ�
			
				return true;
		}
	}
	
	else if(Player->iP_Skill->Return_iS_Type() == 2) // Ÿ�� ��ų 
	{
		switch(iChoice)
		{
			case 1:
				return true;
			case 2:
				return true;
		}
	}
}

// Bandit = 0, Wolf = 1
Combat(cl_Player * Player, int MOB_TYPE)	// �����ϴ� �Լ�
{
	cl_Monster * Monster = new cl_Monster(MOB_TYPE);	// ���� ����
	cl_Player_Buff BUFF(Player);
	cl_Monster_Buff M_BUFF(Monster);
	bool bTurn_Checker = true;		// ������ ǥ���ϴ� ���� true = �÷��̾� . false = ���� 
	

	while(true) {		// ���� �ݺ� 
		Combat_First:	// �����ϴ� ������ �̵� 
		system("cls");
		
		if(Player->Return_Health() <= 0)
		{
			system("cls");
			cout << "����� ��������.." << endl;
			getch();
			return false;	// �й�� ���� ��ȯ 
		}
		if(Monster->Return_Health() <= 0)
		{
			system("cls");
			cout << "���� óġ �ߴ�!" << endl;
			getch();
			return true;	// �¸��� ���� ��ȯ 
		}

		Monster->Print_Monster_Info();
		cout << endl << endl;
		Player->iPrint_Profil(true);
		
		if(bTurn_Checker == true)		// ��üũ 
		{
			bTurn_Checker = false;		// ���� �ٲ۴�. 
			switch(Print_Combat_Interface(Player))		// �÷��̾��� ����  
			{
				case 1:	// ���� 
					if(Player->Player_Eng_Use(ENG_ATTAK) == false)	// ����� �����ϸ� ���� 
					{
						cout << "�� ����� �����մϴ�!" << endl;
						getch();
						bTurn_Checker = true;
						goto Combat_First;
					}
					if(Player_Attack(Player->Return_Atk(), Monster->Return_Def()) == true)	// �����ϴ� �Լ� 
						if(Monster->Input_Damage(Player->Return_Dmg()) == false) goto Combat_First;
					break;
				case 2:	// ����ڼ� 
					if(Player->Player_Eng_Use(ENG_DODGE) == false)	// ����� �����ϸ� ���� 
					{
						cout << "�� ����� �����մϴ�!" << endl;
						getch();
						bTurn_Checker = true;
						goto Combat_First;
					}
					BUFF.BUFF_ON(B_DODGE);
					break;
				case 3:	// ������ 
					BUFF.BUFF_ON(B_REST);
					break;
				case 4:	// ��ų 
					if(Print_Skill_Interface(Player, Monster, &BUFF, &M_BUFF, bTurn_Checker) == false)
					{
						bTurn_Checker = true;
						goto Combat_First;
					}
					break;
				case 5:	// ������ 
					break; 
			}
			M_BUFF.Checking_Mob_Buff();
		}
		else if(bTurn_Checker == false)
		{
			bTurn_Checker = true;
			cout << endl << "----------------------------------" << endl;
			if(Monster->Monster_Eng_Use() == false)
			{
				Monster->Monster_Eng_Recovery();
				cout << endl << "���� ���� �����!" << endl;
				getch();	
			}
			else if(Monster_Attack(Monster->Return_Atk(), Player->Return_Def()) == true)
				if(Player->Input_Damage(Monster->Return_Dmg()) == false)goto Combat_First;
				BUFF.Checking_Buff();
		}
	}
}
