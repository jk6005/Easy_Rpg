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
	cout << "1. ���� ��ˡ���2. ���� ��յ���" << endl;
	int iChoice = Choice_Event(2);
	
	// �� �� ���� ������ 
	if(iChoice == 1)
		Player.iEquip_Weapon(Oid_Sword);
	else Player.iEquip_Weapon(Oid_Axe);	
	
	// EVENT 2. ó������ �� �����Ѵ�  
	Combat(&Player, Bandit);	// ������ ���� 
	
	return 0;
}
