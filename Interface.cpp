#include "Interface.h"

bool Player_Attack(int iP_ATK, int iM_DEF)	// �÷��̾ �����ϴ� �Լ� 
{
	float Percent = rand() % 10000 / ATTACK_PERCENT;
	float Attacker = LOW_LIMIT_ATK + (float)iP_ATK - (float)iM_DEF;
	
	cout << "�⺻ Ȯ��(" << LOW_LIMIT_ATK << ") + ���ݷ�(" << iP_ATK << ") - ������ ����(" << iM_DEF << ")" << endl;
	if(Percent <= Attacker)
	{
		cout << "���� ����!" << endl;
		return true;
	}
	else 
	{
		cout << "���� ����!" << endl;
		return false;
	}
}

bool Monster_Attack(int iM_ATK, int iP_DEF)	// ���Ͱ� �����ϴ� �Լ� 
{
	float Percent = rand() % 10000 / ATTACK_PERCENT;
	float Attacker = LOW_LIMIT_ATK + (float)iM_ATK - (float)iP_DEF;
	
	cout << "�⺻ Ȯ��(" << LOW_LIMIT_ATK << ") + ���ݷ�(" << iM_ATK << ") - ������ ����(" << iP_DEF << ")" << endl;
	if(Percent <= Attacker)
	{
		cout << "��� ����!" << endl;
		return true;
	}
	else 
	{
		cout << "��� ����!" << endl;
		return false;
	}
}

Print_Combat_Interface()	// ���� �������̽� ���
{
	// �̰� ��������
	// 1. ���� 2. ��ų 3. ������ ���.. 
} 

// Bandit = 0, Wolf = 1
Combat(cl_Player * Player, int MOB_TYPE)	// �����ϴ� �Լ� 
{
	cl_Monster * Monster = new cl_Monster(MOB_TYPE);	// ���� ����
	
	while(true)
	{
		system("cls");
		Monster->Print_Monster_Info();	
		cout << endl << endl;
		Player->iPrint_Profil(true);
		getch();
	} 
	
}
