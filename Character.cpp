#include "Character.h"

cl_Weapon::cl_Weapon() : iW_Number(Fist), iW_Dmg(100), iW_Atk(10), iW_Eng(0), iW_Eng_Re(0), iW_Honer(0)	//	���� ������ 
{
	sW_Name = "�ָ�";
	sW_Info = "�տ� �ƹ��͵� ������� ���� �ܼ��� �Ǽ��Դϴ�.";
}

// ���� ��ü�ϴ� �Լ��� ���⸦ �����ϴ� �Լ� 
cl_Weapon::Equip_Weapon(int iW_NUM, string sW_NAME, string sW_INFO, int iW_ATK, int iW_DMG, int iW_ENG, int iW_ENG_RE, int iW_HONER)
{
	iW_Number = iW_NUM;
	sW_Name = sW_NAME;
	sW_Info = sW_INFO;
	iW_Atk = iW_ATK;
	iW_Dmg = iW_DMG;
	iW_Eng = iW_ENG;
	iW_Eng_Re = iW_ENG_RE;
	iW_Honer = iW_HONER;
	return 0;
}

/* enum �����̸� : Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4, Bandit_Knife = 10
	Equip_Weapon(�ѹ�, �̸�, ����, ��������, ��������, ���, ���_ȸ��, ��) */ 

cl_Weapon::Set_Weapon(int iW_Num)	// ���� �� ��ü�ϴ� ��
{
	if(iW_Number == iW_Num)return false;	// ���� �̹� ������ �����̸� false ��ȯ 
	switch(iW_Num)
	{
		case Fist:
			Equip_Weapon(Fist, "�ָ�", "�տ� �ƹ��͵� ������� ���� �ܼ��� �Ǽ��Դϴ�.", 15, 100, 0, 0, 0);
			return true;
		case Oid_Sword:
			Equip_Weapon(Oid_Sword, "���� ���", "�������� ���� ���� ���� ����Դϴ�.", 25, 300, 1, 0, 0);
			return true;
		case Oid_Axe:
			Equip_Weapon(Oid_Axe, "���� ��յ���", "���� ������ ���̽������� ���ſ� ��յ����Դϴ�.", 23, 400, -1, 0, 0);
			return true;
		case Long_Sword:
			Equip_Weapon(Long_Sword, "���", "�⺻���� ����Դϴ�. ������ ����ֽ��ϴ�.", 30, 550, 1, 0, 0);
			return true;
		case Two_Handed_Axe:
			Equip_Weapon(Two_Handed_Axe, "��� ����", "ũ�� ���ſ� ��յ����Դϴ�.", 28, 650, -1, 0, 0);
			return true;
		case Bandit_Knife:
			Equip_Weapon(Bandit_Knife, "������ �ܰ�", "ª���� ġ������ �����Դϴ�.", 18, 200, 6, 2, 0);
			return true;
	} 
}
	
cl_Weapon::Print_Weapon()	// ����ɷ�ġ�� ǥ���ϴ� �Լ�
{
	cout << "����������������< ������ >����������������" << endl << endl;
	cout << "���̸� :\t" << sW_Name << endl;
	cout << "������ :\t\" " << sW_Info << " \" " << endl;
	cout << "���������� :\t" << iW_Atk << endl;
	cout << "���������� :\t" << iW_Dmg << endl;
	cout << "����� :\t" << iW_Eng << endl;
	cout << "�����_ȸ�� : \t" << iW_Eng_Re << endl;
	cout << "���� :\t" << iW_Honer << endl; 
	return 0;
}

void cl_Weapon::Print_Wname()	// �����̸��� ��ȯ�ϴ� �Լ�
{
	cout << sW_Name;
}

cl_Weapon::Return_Wdmg()	// ���ⵥ������ ��ȯ�ϴ� �Լ� 
{
	return iW_Dmg;
}

cl_Weapon::Return_Watk()	// ���� ���������� ��ȯ�ϴ� �Լ� 
{
	return iW_Atk;
}

cl_Weapon::Return_WEng()	// ���� �����  ��ȯ�ϴ� �Լ� 
{
	return iW_Eng; 
}

cl_Weapon::Return_WEng_Re()	// ���� ���_ȸ�� �� ��ȯ�ϴ��Լ� 
{
	return iW_Eng_Re;
}

cl_Weapon::Return_Whoner()	// ���� ��ġ�� ��ȯ�ϴ� �Լ� 
{
	return iW_Honer;
}

// �� Class Weapon �� 	 �� Class Weapon �� 		 �� Class Weapon �� 		 �� Class Weapon �� 		 �� Class Weapon �� 		 �� Class Weapon �� 		 �� Class Weapon �� 		 �� Class Weapon �� 
//�������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������� 
// �� Class cl_Armor ��	�� Class cl_Armor ��		�� Class cl_Armor ��		�� Class cl_Armor ��		�� Class cl_Armor ��		�� Class cl_Armor ��		�� Class cl_Armor ��		�� Class cl_Armor ��

cl_Armor::cl_Armor() : iA_Number(Oid_Armor), iA_Max_Health(900), iA_Def(9), iA_Eng(-1), iA_Eng_Re(-1), iA_Honer(0)	// �� ������
{
	sA_Name = "�罼 ����";
	sA_Info = "���� ���̽� �����Դϴ�.";
}

// ���� ��ü�ϴ� �Լ����� �����͸� �����ϴ� �Լ�
cl_Armor::Equip_Armor(int iA_NUM, string sA_NAME, string sA_INFO, int iA_HEALTH, int iA_DEF, int iA_ENG, int iA_ENG_RE, int iA_HONER)
{
	iA_Number = iA_NUM;
	sA_Name = sA_NAME;
	sA_Info = sA_INFO;
	iA_Max_Health = iA_HEALTH;
	iA_Def = iA_DEF;
	iA_Eng = iA_ENG;
	iA_Eng_Re = iA_ENG_RE;
	iA_Honer = iA_HONER;
	return 0;
}

/* �� �̸� : Body = 0, Oid_Armor = 1, Silk_Armor = 2, Skin_Armor = 3, Up_Skin_Armor = 4, Armor = 5, Bandit_Robe = 10
	*/

cl_Armor::Set_Armor(int iA_Num)	// �� �� ��ü�ϴ��Լ� 
{
	if(iA_Number == iA_Num)return false;	// �̹� ������ �����̸� ���й�ȯ
	switch(iA_Num)
	{
	case Body:
		Equip_Armor(Body, "�Ǹ�", "�ƹ��͵� ��ģ�� ���� �Ǹ��Դϴ�.", 300, 0, 5, 2, 0);
		return true;
		
	case Oid_Armor:
		Equip_Armor(Oid_Armor, "�罼 ����", "���� ���̽� �����Դϴ�.", 900, 9, -1, -1, 0);
		return true;
		
	case Silk_Armor:
		Equip_Armor(Silk_Armor, "õ ����", "������ ������ ����� ��ø�� �����Դϴ�.", 1500, 10, 1, 2, 0);
		return true;
	
	case Skin_Armor:
		Equip_Armor(Skin_Armor, "���� ����", "������ ���� ���װ����Դϴ�.", 2000, 24, 1, 0, 0);
		return true;
	
	case Up_Skin_Armor:
		Equip_Armor(Up_Skin_Armor, "��ȭ ���� ����", "������ ��ȭ�Ͽ� ���� ����� ��������ϴ�.", 3000, 28, 2, 1, 0);
		return true;
		
	case Armor:
		Equip_Armor(Armor, "����", "ưư������ ���ſ� �����Դϴ�.", 4000, 36, -1, 0, 0);
		return true;
		
	case Bandit_Robe:
		Equip_Armor(Bandit_Robe, "������ ����", "���������� ������ ���� ������ ���� �ֽ��ϴ�.", 500, 5, 2, 2, 0);
		return true;
	} 
}

cl_Armor::Print_Armor()	// �� �ɷ�ġ�� ǥ���ϴ� �Լ�
{
	cout << "����������������< �� >����������������" << endl << endl;
	cout << "���̸� :\t" << sA_Name << endl;
	cout << "������ :\t\" " << sA_Info << " \" " << endl;
	cout << "���ִ�ü�� :\t" << iA_Max_Health << endl;
	cout << "��������� :\t" << iA_Def << endl;
	cout << "����� :\t" << iA_Eng << endl;
	cout << "�����_ȸ�� : \t" << iA_Eng_Re << endl;
	cout << "���� :\t" << iA_Honer << endl; 
	return 0;
}

void cl_Armor::Print_AName()	// �� �̸��� ��ȯ�ϴ� �Լ� 
{
	cout << sA_Name;
}

cl_Armor::Return_AHealth()	// �ִ�ü���� ��ȯ�ϴ� �Լ� 
{
	return iA_Max_Health;
}

cl_Armor::Return_ADef()	// ������ ��ȯ�ϴ� �Լ� 
{
	return iA_Def;
}

cl_Armor::Return_AEng()	// ����� ��ȯ�ϴ� �Լ� 
{
	return iA_Eng;
}

cl_Armor::Return_AEng_Re()	// ���_ȸ�� �� ��ȯ�ϴ� �Լ� 
{
	return iA_Eng_Re;
}

cl_Armor::Return_AHoner()	// �� ���� ��ȯ�ϴ� �Լ� 
{
	return iA_Honer;
}

// �� Class cl_Armor �� 	 �� Class cl_Armor �� 		 �� Class cl_Armor �� 		 �� Class cl_Armor �� 		 �� Class cl_Armor �� 		 �� Class cl_Armor �� 		 �� Class cl_Armor �� 		 �� Class cl_Armor �� 
//�������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������� 
// �� Class cl_Player ��	�� Class cl_Player ��	�� Class cl_Player ��		�� Class cl_Player ��		�� Class cl_Player ��		�� Class cl_Player ��		�� Class cl_Player ��		�� Class cl_Player ��

cl_Player::cl_Player() : iP_Atk(0), iP_Def(0), iP_Eng(5), iP_Eng_Max(5), iP_Eng_Re(2), iP_Honer(0), iP_Dmg(0), iP_Health(0), iP_Max_Health(0)	// �÷��̾� ������ �̸��� �Է¹޴´�. 
{
	// ��ų �ʱ�ȭ 
	for(int i =0; i < 6; i++)iP_Skill[i] = false;
	//	�÷��̾��� ����� �� ���� 
	iP_Weapon = new cl_Weapon;
	iP_Armor = new cl_Armor;
	cout << "����� ��� �� Ȳ�������� ������ϴ�." << endl;
	cout << "��ſ��� �̸��� ������ ��� ��ﵵ �������� �ʽ��ϴ�." << endl;
	cout << "�ֺ��� ������ ���ѵ��� ��ſ��� �ٰ����� �ֽ��ϴ�." << endl;
	cout << "��Ȳ�� ��� �ƾ ��ſ��� �����ϰ� ��������� �������մϴ�." << endl << endl;
	cout << "\t\t- �ƹ�Ű�� �����ÿ� -" << endl;
	getch();
	while(1)	// �̸��� �Է��ϴ� ���ѹݺ� 
	{
		system("cls");
		cout << "����� �̸��� �����ΰ�...?" << endl;	
		cout << "�� �̸��� : ";
		getline(cin, sP_Name);
		cout << sP_Name << " ��(��) �´°�?" << endl;
		cout << "1. �׷���\t2.�ƴϴ�" << endl;
		if(Choice_Event(1) == false)
			continue;
		else break;
	}
	system("cls");
}

cl_Player::~cl_Player()	// �÷��̾� �Ҹ��� ���Ⱚ, �� �� ���� 
{
	delete iP_Weapon;
	delete iP_Armor;
}

cl_Player::iEquip_Weapon(int iType, bool bType)	// ���⸦ ����/���� �ϴ� �Լ� 
{
	if(bType == false)
		Sync_Weapon(false);
		
	if(iP_Weapon->Set_Weapon(iType) == true)
	{
		Sync_Weapon(true);
		return 0;	
	}
	else
	{
		Sync_Weapon(true);
		cout << "�̹� ������ ����" << endl;
		return false;
	}
}

cl_Player::Sync_Weapon(int iType)	// ������ �ɷ�ġ�� �����ϴ� �Լ�
{	
	if(iType == true)
	{
		iP_Atk += iP_Weapon->Return_Watk();
		iP_Dmg += iP_Weapon->Return_Wdmg();
		iP_Honer += iP_Weapon->Return_Whoner();
		iP_Eng_Max += iP_Weapon->Return_WEng();
		iP_Eng = iP_Eng_Max;
		iP_Eng_Re += iP_Weapon->Return_WEng_Re();
		iP_Eng = iP_Eng_Max;
		return 0;
	}
	
	if(iType == false)
	{
		iP_Atk -= iP_Weapon->Return_Watk();
		iP_Dmg -= iP_Weapon->Return_Wdmg();
		iP_Eng_Max -= iP_Weapon->Return_WEng();
		iP_Eng = iP_Eng_Max;
		iP_Eng_Re -= iP_Weapon->Return_WEng_Re();
		iP_Honer -= iP_Weapon->Return_Whoner();
		iP_Eng = iP_Eng_Max;
		return 0;
	}
}

cl_Player::iEquip_Armor(int iType, bool bType)	// ���� ����/���� �ϴ� �Լ� 
{
	int Health_Temp = iP_Health;
	if(bType == false)
		Sync_Armor(false);
	if(iP_Armor->Set_Armor(iType) == true)
	{
		Sync_Armor(true);
		// �ٲ� ���� ü�°��� ���� ü�°� ���� ũ�� ���� ü���� ���δ�. 
		if(iP_Max_Health > Health_Temp)
			iP_Health = Health_Temp;
		return 0;	
	}
	else
	{
		Sync_Armor(true);
		iP_Health = Health_Temp;
		cout << "�̹� ������ ��" << endl;
		return false;
	}
}

cl_Player::Sync_Armor(int iType)	// ���� �ɷ�ġ�� �����ϴ� �Լ� 
{
	if(iType == true)
	{
		iP_Max_Health += iP_Armor->Return_AHealth();
		iP_Health = iP_Max_Health;
		iP_Def += iP_Armor->Return_ADef();
		iP_Eng_Max += iP_Armor->Return_AEng();
		iP_Eng = iP_Eng_Max;
		iP_Eng_Re += iP_Armor->Return_AEng_Re();
		iP_Honer += iP_Armor->Return_AHoner();
		iP_Eng = iP_Eng_Max;
		return 0;
	}
	
	if(iType == false)
	{
		iP_Max_Health -= iP_Armor->Return_AHealth();
		iP_Health = iP_Max_Health;
		iP_Def -= iP_Armor->Return_ADef();
		iP_Eng_Max -= iP_Armor->Return_AEng();
		iP_Eng = iP_Eng_Max;
		iP_Eng_Re -= iP_Armor->Return_AEng_Re();
		iP_Honer -= iP_Armor->Return_AHoner();
		iP_Eng = iP_Eng_Max;
		return 0;
	}
}

cl_Player::iReturn_Inventory()	// �κ��丮 â�� ���� �Լ� 
{
	
}

cl_Player::iPrint_Profil(bool bType)	// �÷��̾��� �������� ����ϴ� �Լ� 
{
	if(bType == false)
	{
		system("cls");
		cout << "����������������< ������ >����������������" << endl << endl;
		cout << "���̸� :\t" << sP_Name << endl;
		cout << "��ü�� :\t" << iP_Health << " / " << iP_Max_Health << endl;
		cout << "���������� :\t" << iP_Atk << endl;
		cout << "��������� :\t" << iP_Def << endl;
		cout << "���������� :\t" << iP_Dmg << endl;
		cout << "����� :\t" << iP_Eng << " / " << iP_Eng_Max << endl;
		cout << "�����_ȸ�� :\t" << iP_Eng_Re << endl;
		cout << "���� :\t" << iP_Honer << endl << endl;
		iP_Weapon->Print_Weapon();
		iP_Armor->Print_Armor();
		return 0;	
	}
	else
	{
		cout << "���̸� : " << sP_Name << endl;
		cout << "��ü�� : " << iP_Health << " / " << iP_Max_Health << endl;
		cout << "���������� : " << iP_Atk << "\t\t������� : " << iP_Def << endl;
		cout << "���������� : " << iP_Dmg;
		cout << " \t��� : " << iP_Eng << " / " << iP_Eng_Max << "(" << iP_Eng_Re << ")" << endl;
		cout << "������ : "; iP_Weapon->Print_Wname(); cout << "\t�� : "; iP_Armor->Print_AName();
	}
}

cl_Player::Print_Name()	// �÷��̾��� �̸��� ��ȯ�ϴ� �Լ� 
{
	cout << sP_Name; 
}

cl_Player::Return_Health()	// �÷��̾��� ü���� ��ȯ�ϴ� �Լ�
{
	return iP_Health;
}

cl_Player::Return_Max_Health()	// �÷��̾��� �ִ�ü���� ��ȯ�ϴ� �Լ� 
{
	return iP_Max_Health;
}

cl_Player::Return_Atk()	// �÷��̾��� �������� �� ��ȯ�ϴ� �Լ�	
{
	return iP_Atk;
}

cl_Player::Return_Def()	// �÷��̾��� ������� �� ��ȯ�ϴ� �Լ�	
{
	return iP_Def;
}

cl_Player::Return_Dmg()	// �÷��̾��� �������� �� ��ȯ�ϴ� �Լ�
{
	return iP_Dmg;
}

cl_Player::Return_Honer()	// �÷��̾��� �� �� ��ȯ�ϴ� �Լ�
{
	return iP_Honer;
}

cl_Player::Return_Eng()	// �÷��̾��� ��� �� ��ȯ�ϴ� �Լ�
{
	return iP_Eng;
}

cl_Player::Return_Eng_Max()	// �÷��̾��� ��� �ִ��� ��ȯ�ϴ� �Լ�
{
	return iP_Eng_Max; 
}

cl_Player::Return_Eng_Re()	// �÷��̾��� ���_ȸ�� �� ��ȯ�ϴ� �Լ�
{
	return iP_Eng_Re;
}

// �� Class cl_Player ���  Class cl_Player ��  Class cl_Player ��  Class cl_Player ��  Class cl_Player ��  Class cl_Player ��  Class cl_Player ��  Class cl_Player ��
//�������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������� 
// �� Class cl_Monster ��� Class cl_Monster ��	�� Class cl_Monster ��	�� Class cl_Monster ��	�� Class cl_Monster ��	�� Class cl_Monster ��	�� Class cl_Monster ��	

/*
	Monster_Number : Bandit = 0,
	Weapon_Number : Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4, Bandit_Knife = 10
	Armor_Number : Body = 0, Oid_Armor = 1, Silk_Armor = 2, Skin_Armor = 3, Up_Skin_Armor = 4, Armor = 5, Bandit_Robe = 10
*/

cl_Monster::Human_Type(string sNAME, int iHoner, int iWeapon, int iArmor)	// �ΰ��� ���� ����
{
	iSpecies = true;
	sM_Name = sNAME;
	iM_Weapon = new cl_Weapon;
	iM_Armor = new cl_Armor;
	iM_Honer = iHoner;
	iM_Weapon->Set_Weapon(iWeapon);
	iM_Armor->Set_Armor(iArmor);	
	Sync_Status();
}

// ������ ���� ���� 
cl_Monster::Beast_Type(string sNAME, int iHealth, int iAtk, int iDef, int iDmg, int iEng, int iEng_Max, int iEng_Re, int iHoner)
{
	iSpecies = false;
	sM_Name = sNAME;
	iM_Weapon = NULL;
	iM_Armor = NULL;
	iM_Health = iHealth;
	iM_Max_Health = iHealth; 
	iM_Atk = iAtk;
	iM_Def = iDef;
	iM_Dmg = iDmg;
	iM_Eng = iEng;
	iM_Eng_Max = iEng_Max;
	iM_Eng_Re = iEng_Re;
	iM_Honer = iHoner;
}

cl_Monster::cl_Monster(int iType)
{
	switch(iType)
	{
		case Bandit: 
			Human_Type("����", 0, Bandit_Knife, Bandit_Robe);
			break;
		
		case Wolf:
			Beast_Type("����", 800, 25, 3, 350, 10, 10, 5, 0);
			break; 
	}
}

cl_Monster::~cl_Monster()
{
	if(iM_Weapon != NULL)
	delete iM_Weapon;
	if(iM_Armor != NULL)
	delete iM_Armor;
}

cl_Monster::Print_Monster_Info()	// ������ ����â�� ǥ�� 
{
	cout << "���̸� : " << sM_Name << endl;
	cout << "��ü�� : " << iM_Health << " / " << iM_Max_Health << endl;
	cout << "���������� : " << iM_Atk << "\t\t������� : " << iM_Def << endl;
	cout << "���������� : " << iM_Dmg;
	cout << "\t��� : " << iM_Eng << " / " << iM_Eng_Max << "(" << iM_Eng_Re << ")"  << endl;
	if(iSpecies == true)
	{
		cout << "������ : "; iM_Weapon->Print_Wname();cout << "\t�� : "; iM_Armor->Print_AName();
	}
	return 0;
}

cl_Monster::Sync_Status()	// ������ ��� ����ȭ
{
	
	iM_Max_Health = iM_Armor->Return_AHealth();
	iM_Health = iM_Max_Health;
	iM_Atk = iM_Weapon->Return_Watk();
	iM_Def = iM_Armor->Return_ADef();
	iM_Dmg = iM_Weapon->Return_Wdmg();
	iM_Eng = iM_Armor->Return_AEng() + iM_Weapon->Return_WEng();
	iM_Eng_Max = iM_Eng;
	iM_Eng_Re = iM_Armor->Return_AEng_Re() + iM_Weapon->Return_WEng_Re();
	return 0;
}

cl_Monster::Return_Health()	// ������ ü���� ��ȯ 
{
	return iM_Health;
}

cl_Monster::Return_Max_Health()	// ������ �ִ�ü���� ��ȯ 
{
	return iM_Max_Health;
}

cl_Monster::Return_Atk()	// ������ ���������� ��ȯ 
{
	return iM_Atk;
}

cl_Monster::Return_Def()	// ������ ������ ��ȯ 
{
	return iM_Def;
}

cl_Monster::Return_Dmg()	// ������ ���ݷ��� ��ȯ 
{
	return iM_Dmg;
}

cl_Monster::Return_Eng()	// ������ ����� ��ȯ 
{
	return iM_Eng;
}

cl_Monster::Return_Eng_Max()	// ������ �ִ����� ��ȯ 
{
	return iM_Eng_Max;
}

cl_Monster::Return_Eng_Re()	// ������ ���_ȸ�� �� ��ȯ 
{
	return iM_Eng_Re;
}

cl_Monster::Return_Honer()	// ������ ���� ��ȯ
{
	return iM_Honer;
} 
