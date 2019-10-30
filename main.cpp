#include "Header.h"
#include "Character.h"
#include "Interface.h"

int main()
{
	system("title Musa_RPG");
	system("mode con: cols=75 lines=60");
	srand((unsigned int)time(0));	// srand �Լ��� �ð����� �ʱ�ȭ  
	
	cl_Monster * Monster;	// ���� ������ 
	
	// �÷��̾� ������ ���ÿ� �⺻���� ���� (�ָ�, ���� ����) 
	cl_Player Player;
	Player.Sync_Weapon(true);
	Player.Sync_Armor(true);
	
	// EVENT 1. ���⸦ �����ϰԵǴ� ��Ʈ 
	
	// ���⸦ �����ϴ� �κ� 
	cout << "����� �տ��� ������ ���Ⱑ �ֽ��ϴ�." << endl;
	cout << "�׹���� �����Դϱ�?" << endl;	
	cout << "�� �ѹ� ������ ����� Ÿ���� �����Ҽ� �����ϴ�." << endl << endl;
	cout << "1. ���� ��� : ��˷��� �������ݷ°� ������ �ؼ��ϰ� ��еǾ��ֽ��ϴ�." << endl << endl;
	cout << "2. ���� ��յ��� : �������� ���� �������ݰ� ���� ���������� ������ �ֽ��ϴ�." << endl;
	int iChoice = Choice_Event(2);
	
	// �� �� ���� ������ 
	if(iChoice == 1)
	{
		Player.iEquip_Weapon(Oid_Sword);
		Player.iP_Skill->Set_Weapon_Style(1);
		Player.iP_Skill->Set_Skill(1);	//
		Player.iP_Skill->Set_Skill(2);	//
	}
	else
	{
		Player.iEquip_Weapon(Oid_Axe);	
		Player.iP_Skill->Set_Weapon_Style(2);
	}
	
	// EVENT 2. ó������ �� �����Ѵ�  
	system("cls");
	cout << "����� �ɾ���� ������ ����ù���ϴ�." << endl;
	cout << "���� ȥ���ε� �մϴ�." << endl;
	cout << endl << "�� �������� ����!" << endl;
	getch();
	Combat(&Player, Bandit);	// ������ ���� 
	
	return 0;
}
