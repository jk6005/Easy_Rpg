#include "Character.h"

cl_Weapon::cl_Weapon() : iW_Number(Fist), iW_Dmg(100), iW_Atk(10), iW_Spd(5), iW_Honer(0)	//	���� ������ 
{
	sW_Name = "�ָ�";
	sW_Info = "�տ� �ƹ��͵� ������� ���� �ܼ��� �Ǽ��Դϴ�.";
}

/* enum �����̸� : Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4	
case :
	iW_Number = ;
	sW_Name = "";
	sW_Info = ""; 
	iW_Dmg += ;
	iW_Atk += ;
	iW_Spd += ;
	iW_Honer += ;
	return true;
*/ 
cl_Weapon::Set_Weapon(int iW_Num)	// ���� �� ��ü�ϴ� ��
{
	if(iW_Number == iW_Num)return false;	// ���� �̹� ������ �����̸� false ��ȯ 
	iW_Dmg = 100;	// �⺻ �ɷ�ġ�� �ָ����� �����. 
	iW_Atk = 15;
	iW_Spd = 5;
	iW_Honer = 0;
	switch(iW_Num)
	{
		case Fist:
			iW_Number = Fist;
			sW_Name = "�ָ�";
			sW_Info = "�տ� �ƹ��͵� ������� ���� �ܼ��� �Ǽ��Դϴ�."; 
			iW_Dmg = 100;
			iW_Atk = 15;
			iW_Spd = 5;
			iW_Honer = 0;
			return true;
		case Oid_Sword:
			iW_Number = Oid_Sword;
			sW_Name = "���� ���";
			sW_Info = "�������� ���� ���� ���� ����Դϴ�."; 
			iW_Dmg += 300;
			iW_Atk += 25;
			iW_Spd += 3;
			iW_Honer += 0;
			return true;
		case Oid_Axe:
			iW_Number = Oid_Axe;
			sW_Name = "���� ��յ���";
			sW_Info = "���� ������ ���̽������� ���ſ� ��յ����Դϴ�."; 
			iW_Dmg += 400;
			iW_Atk += 23;
			iW_Spd += 2;
			iW_Honer += 0;
			return true;
		case Long_Sword:
			iW_Number = Long_Sword;
			sW_Name = "���";
			sW_Info = "�⺻���� ����Դϴ�. ������ ����ֽ��ϴ�."; 
			iW_Dmg += 550;
			iW_Atk += 30;
			iW_Spd += 3;
			iW_Honer += 0;
			return true;
		case Two_Handed_Axe:
			iW_Number = Two_Handed_Axe;
			sW_Name = "��� ����";
			sW_Info = "ũ�� ���ſ� ��յ����Դϴ�."; 
			iW_Dmg += 650;
			iW_Atk += 28;
			iW_Spd += 2;
			iW_Honer += 0;
			return true;
	} 
}
	
cl_Weapon::Print_Weapon()	// ����ɷ�ġ�� ǥ���ϴ� �Լ�
{
	cout << "<< " << sW_Name << " >>" << endl; 
	cout << sW_Info << endl;
	cout << "�������� :\t" << iW_Dmg << endl;
	cout << "�������� :\t" << iW_Atk << endl;
	cout << "���ǵ� :\t" << iW_Spd << endl;
	cout << "�� :\t" << iW_Honer << endl; 
	return 0;
}

//cl_Weapon::return_Wname()	// �����̸��� ��ȯ�ϴ� �Լ�
//{
//	return sW_Name;
//}

cl_Weapon::Return_Wdmg()	// ���ⵥ������ ��ȯ�ϴ� �Լ� 
{
	return iW_Dmg;
}

cl_Weapon::Return_Watk()	// ���� ���������� ��ȯ�ϴ� �Լ� 
{
	return iW_Atk;
}

cl_Weapon::Return_Wspd()	// ���� ���ǵ带 ��ȯ�ϴ� �Լ� 
{
	return iW_Spd;
}

cl_Weapon::Return_Whoner()	// ���� ��ġ�� ��ȯ�ϴ� �Լ� 
{
	return iW_Honer;
}

// �� Class Weapon �� 
//�������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������� 
// �� Class cl_Player ��

cl_Player::cl_Player() : iP_Atk(10), iP_Def(10), iP_Spd(1), iP_Honer(0)	// �÷��̾� ������ �̸��� �Է¹޴´�. 
{
	iP_Weapon = new cl_Weapon;
	cout << "\t��� ���迡 ��� ���� �־���." << endl;
	cout << "�׸��� �׳���� �Ǳ͵鿡�� ħ���� �ްԵǰ�, �� ����ϰԵȴ�." << endl;
	cout << "�׷��� Ȳ������ �� ������ ���� ���ָ� �װ� ���� �����ϴ� ����" << endl;
	cout << "���� �ñ����� ����� ����ġ���� ������ �ǱͿ��� ���ݹް� �Ǿ���" << endl;
	cout << "����� �ǱͿ��� �װ� ���ִ� ��ġ�ǰ� ���Ҵ�." << endl;
	cout << "�׸��� ���� ����� ���� �����ڵ��� �������� �Ͼ�� �����Ѵ�." << endl;
	cout << "�׸��� �� ���ִ� ����� ���翡�Ե� �������� �ȴ�." << endl << endl; 
	cout << "\t- �ƹ�Ű�� �����ÿ� -" << endl;
	getch();
	while(1)	// �̸��� �Է��ϴ� ���ѹݺ� 
	{
		system("cls");
		cout << "����� �̸��� �����ΰ�...?" << endl;	
		cout << "�� �̸��� : ";
		getline(cin, sP_Name);
		cout << sP_Name << " ��(��) �´°�?" << endl;
		cout << "1. �׷���\t2.�ƴϴ�" << endl;
		Character_POS1:
		int iInput = getch();
		iInput -= '0';
		if(Checking_Int(iInput , 1) != INT_MAX)
		{
			if(iInput == 1)break;
			else continue;
		}
		else goto Character_POS1;
	}
	system("cls");
	cout << sP_Name << "... ����� ������ ���۵ȴ�." << endl;
	cout << "\t-�ƹ�Ű�� �������� -" << endl;
	getch();
}

cl_Player::~cl_Player()	// �÷��̾� �Ҹ��� ���Ⱚ�� ���� 
{
	delete iP_Weapon;
}

cl_Player::iEquip_Weapon(int iType)	// ���⸦ ����/���� �ϴ� �Լ� 
{
	
}

cl_Player::iReturn_Inventory()	// �κ��丮 â�� ���� �Լ� 
{
	
}

cl_Player::iPrint_Profil()	// �÷��̾��� �������� ����ϴ� �Լ� 
{
	
}
