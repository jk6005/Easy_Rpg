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
	cout << "1. 낡은 장검　　2. 낡은 양손도끼" << endl;
	int iChoice = Choice_Event(2);
	
	// 검 과 도끼 딜레마 
	if(iChoice == 1)
		Player.iEquip_Weapon(Oid_Sword);
	else Player.iEquip_Weapon(Oid_Axe);	
	
	// EVENT 2. 처음전투 를 시작한다  
	Combat(&Player, Bandit);	// 도적과 전투 
	
	return 0;
}
