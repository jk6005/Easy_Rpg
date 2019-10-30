#include "Header.h"
#include "Character.h"
#include "Interface.h"

int main()
{
	system("title Musa_RPG");
	system("mode con: cols=75 lines=60");
	srand((unsigned int)time(0));	// srand 함수를 시간으로 초기화  
	
	cl_Monster * Monster;	// 몬스터 포인터 
	
	// 플레이어 생성과 동시에 기본무기 장착 (주먹, 낡은 갑옷) 
	cl_Player Player;
	Player.Sync_Weapon(true);
	Player.Sync_Armor(true);
	
	// EVENT 1. 무기를 습득하게되는 파트 
	
	// 무기를 선택하는 부분 
	cout << "당신의 앞에는 버려진 무기가 있습니다." << endl;
	cout << "그무기는 무엇입니까?" << endl;	
	cout << "※ 한번 선택한 무기는 타입을 변경할수 없습니다." << endl << endl;
	cout << "1. 낡은 장검 : 장검류는 근접공격력과 근접방어가 준수하게 배분되어있습니다." << endl << endl;
	cout << "2. 낡은 양손도끼 : 도끼류는 높은 근접공격과 낮은 근접방어력을 가지고 있습니다." << endl;
	int iChoice = Choice_Event(2);
	
	// 검 과 도끼 딜레마 
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
	
	// EVENT 2. 처음전투 를 시작한다  
	system("cls");
	cout << "당신은 걸어가던중 도적과 마주첫습니다." << endl;
	cout << "적은 혼자인듯 합니다." << endl;
	cout << endl << "※ 전투모드로 돌입!" << endl;
	getch();
	Combat(&Player, Bandit);	// 도적과 전투 
	
	return 0;
}
