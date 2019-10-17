#include "Character.h"

cl_Weapon::cl_Weapon() : iW_Number(Fist), iW_Dmg(100), iW_Atk(10), iW_Spd(5), iW_Honer(0)	//	무기 생성자 
{
	sW_Name = "주먹";
	sW_Info = "손에 아무것도 쥐어진게 없는 단순한 맨손입니다.";
}

/* enum 무기이름 : Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4	
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
cl_Weapon::Set_Weapon(int iW_Num)	// 무기 를 교체하는 함
{
	if(iW_Number == iW_Num)return false;	// 만약 이미 장착한 무기이면 false 반환 
	iW_Dmg = 100;	// 기본 능력치를 주먹으로 맞춘다. 
	iW_Atk = 15;
	iW_Spd = 5;
	iW_Honer = 0;
	switch(iW_Num)
	{
		case Fist:
			iW_Number = Fist;
			sW_Name = "주먹";
			sW_Info = "손에 아무것도 쥐어진게 없는 단순한 맨손입니다."; 
			iW_Dmg = 100;
			iW_Atk = 15;
			iW_Spd = 5;
			iW_Honer = 0;
			return true;
		case Oid_Sword:
			iW_Number = Oid_Sword;
			sW_Name = "낡은 장검";
			sW_Info = "군데군데 녹이 많이 슬은 장검입니다."; 
			iW_Dmg += 300;
			iW_Atk += 25;
			iW_Spd += 3;
			iW_Honer += 0;
			return true;
		case Oid_Axe:
			iW_Number = Oid_Axe;
			sW_Name = "낡은 양손도끼";
			sW_Info = "날이 빠지고 녹이슬엇지만 무거운 양손도끼입니다."; 
			iW_Dmg += 400;
			iW_Atk += 23;
			iW_Spd += 2;
			iW_Honer += 0;
			return true;
		case Long_Sword:
			iW_Number = Long_Sword;
			sW_Name = "장검";
			sW_Info = "기본적인 장검입니다. 날이잘 들어있습니다."; 
			iW_Dmg += 550;
			iW_Atk += 30;
			iW_Spd += 3;
			iW_Honer += 0;
			return true;
		case Two_Handed_Axe:
			iW_Number = Two_Handed_Axe;
			sW_Name = "양손 도끼";
			sW_Info = "크고 무거운 양손도끼입니다."; 
			iW_Dmg += 650;
			iW_Atk += 28;
			iW_Spd += 2;
			iW_Honer += 0;
			return true;
	} 
}
	
cl_Weapon::Print_Weapon()	// 무기능력치를 표시하는 함수
{
	cout << "<< " << sW_Name << " >>" << endl; 
	cout << sW_Info << endl;
	cout << "무기피해 :\t" << iW_Dmg << endl;
	cout << "근접공격 :\t" << iW_Atk << endl;
	cout << "스피드 :\t" << iW_Spd << endl;
	cout << "명성 :\t" << iW_Honer << endl; 
	return 0;
}

//cl_Weapon::return_Wname()	// 무기이름을 반환하는 함수
//{
//	return sW_Name;
//}

cl_Weapon::Return_Wdmg()	// 무기데미지를 반환하는 함수 
{
	return iW_Dmg;
}

cl_Weapon::Return_Watk()	// 무기 근접공격을 반환하는 함수 
{
	return iW_Atk;
}

cl_Weapon::Return_Wspd()	// 무기 스피드를 반환하는 함수 
{
	return iW_Spd;
}

cl_Weapon::Return_Whoner()	// 무기 명예치를 반환하는 함수 
{
	return iW_Honer;
}

// ↑ Class Weapon ↑ 
//────────────────────────────────────────────────────────────────────────────────────────────────────────── 
// ↓ Class cl_Player ↓

cl_Player::cl_Player() : iP_Atk(10), iP_Def(10), iP_Spd(1), iP_Honer(0)	// 플레이어 생성자 이름을 입력받는다. 
{
	iP_Weapon = new cl_Weapon;
	cout << "\t어느 세계에 어떠한 나라가 있엇다." << endl;
	cout << "그리고 그나라는 악귀들에게 침략을 받게되고, 곧 멸망하게된다." << endl;
	cout << "그렇게 황무지가 된 나라의 왕은 공주를 그가 가장 신임하는 무사" << endl;
	cout << "에게 맡기지만 무사와 도망치던중 일행은 악귀에게 습격받게 되었고" << endl;
	cout << "무사는 악귀에게 죽고 공주는 납치되고 말았다." << endl;
	cout << "그리고 몇년뒤 멸망한 나라에 죽은자들이 무덤에서 일어서기 시작한다." << endl;
	cout << "그리고 그 저주는 어느한 무사에게도 내려지게 된다." << endl << endl; 
	cout << "\t- 아무키나 누르시오 -" << endl;
	getch();
	while(1)	// 이름을 입력하는 무한반복 
	{
		system("cls");
		cout << "당신의 이름은 무엇인가...?" << endl;	
		cout << "내 이름은 : ";
		getline(cin, sP_Name);
		cout << sP_Name << " 이(가) 맞는가?" << endl;
		cout << "1. 그렇다\t2.아니다" << endl;
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
	cout << sP_Name << "... 당신의 모험이 시작된다." << endl;
	cout << "\t-아무키나 누르세요 -" << endl;
	getch();
}

cl_Player::~cl_Player()	// 플레이어 소멸자 무기값을 제거 
{
	delete iP_Weapon;
}

cl_Player::iEquip_Weapon(int iType)	// 무기를 장착/해제 하는 함수 
{
	
}

cl_Player::iReturn_Inventory()	// 인벤토리 창을 여는 함수 
{
	
}

cl_Player::iPrint_Profil()	// 플레이어의 프로필을 출력하는 함수 
{
	
}
