#include "Character.h"

cl_Weapon::cl_Weapon() : iW_Number(Fist), iW_Dmg(100), iW_Atk(10), iW_Eng(0), iW_Eng_Re(0), iW_Eng_Use(3), iW_Honer(0)	//	무기 생성자 
{
	sW_Name = "주먹";
	sW_Info = "손에 아무것도 쥐어진게 없는 단순한 맨손입니다.";
}

// 무기 교체하는 함수의 무기를 세팅하는 함수 
cl_Weapon::Equip_Weapon(int iW_NUM, string sW_NAME, string sW_INFO, int iW_ATK, int iW_DMG, int iW_ENG, int iW_ENG_RE, int iW_ENG_USE, int iW_HONER)
{
	iW_Number = iW_NUM;
	sW_Name = sW_NAME;
	sW_Info = sW_INFO;
	iW_Atk = iW_ATK;
	iW_Dmg = iW_DMG;
	iW_Eng = iW_ENG;
	iW_Eng_Re = iW_ENG_RE;
	iW_Eng_Use = iW_ENG_USE;
	iW_Honer = iW_HONER;
	return 0;
}

/* enum 무기이름 : Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4, Bandit_Knife = 10
	Equip_Weapon(넘버, 이름, 설명, 근접공격, 무기피해, 기력, 기력_회복, 기력_사용, 명성) */ 

cl_Weapon::Set_Weapon(int iW_Num)	// 무기 를 교체하는 함
{
	if(iW_Number == iW_Num)return false;	// 만약 이미 장착한 무기이면 false 반환 
	switch(iW_Num)
	{
		case Fist:
			Equip_Weapon(Fist, "주먹", "손에 아무것도 쥐어진게 없는 단순한 맨손입니다.", 15, 100, 0, 0, 1, 0);
			return true;
		case Oid_Sword:
			Equip_Weapon(Oid_Sword, "낡은 장검", "군데군데 녹이 많이 슬은 장검입니다.", 25, 300, 1, 0, 2, 0);
			return true;
		case Oid_Axe:
			Equip_Weapon(Oid_Axe, "낡은 양손도끼", "날이 빠지고 녹이슬엇지만 무거운 양손도끼입니다.", 23, 400, -1, 0, 3, 0);
			return true;
		case Long_Sword:
			Equip_Weapon(Long_Sword, "장검", "기본적인 장검입니다. 날이잘 들어있습니다.", 30, 550, 1, 0, 2, 0);
			return true;
		case Two_Handed_Axe:
			Equip_Weapon(Two_Handed_Axe, "양손 도끼", "크고 무거운 양손도끼입니다.", 28, 650, -1, 0, 3, 0);
			return true;
		case Bandit_Knife:
			Equip_Weapon(Bandit_Knife, "도적의 단검", "짧지만 치명적인 무기입니다.", 18, 200, 4, 2, 3, 0);
			return true;
	} 
}
	
cl_Weapon::Print_Weapon()	// 무기능력치를 표시하는 함수
{
	cout << "　　　　　　　　< 무　기 >　　　　　　　　" << endl << endl;
	cout << "　이름 :\t" << sW_Name << endl;
	cout << "　설명 :\t\" " << sW_Info << " \" " << endl;
	cout << "　근접공격 :\t" << iW_Atk << endl;
	cout << "　무기피해 :\t" << iW_Dmg << endl;
	cout << "　기력 :\t" << iW_Eng << endl;
	cout << "　기력_회복 : \t" << iW_Eng_Re << endl;
	cout << "　명성 :\t" << iW_Honer << endl; 
	return 0;
}

cl_Weapon::Return_WEng_Use()	// 무기_사용을 반환하는 함수 
{
	return iW_Eng_Use;
}

void cl_Weapon::Print_Wname()	// 무기이름을 반환하는 함수
{
	cout << sW_Name;
}

cl_Weapon::Return_Number()	// 무기 순번을 반환하는 함수 
{
	return iW_Number;
}

cl_Weapon::Return_Wdmg()	// 무기데미지를 반환하는 함수 
{
	return iW_Dmg;
}

cl_Weapon::Return_Watk()	// 무기 근접공격을 반환하는 함수 
{
	return iW_Atk;
}

cl_Weapon::Return_WEng()	// 무기 기력을  반환하는 함수 
{
	return iW_Eng; 
}

cl_Weapon::Return_WEng_Re()	// 무기 기력_회복 을 반환하는함수 
{
	return iW_Eng_Re;
}

cl_Weapon::Return_Whoner()	// 무기 명예치를 반환하는 함수 
{
	return iW_Honer;
}

// ↑ Class Weapon ↑ 	 ↑ Class Weapon ↑ 		 ↑ Class Weapon ↑ 		 ↑ Class Weapon ↑ 		 ↑ Class Weapon ↑ 		 ↑ Class Weapon ↑ 		 ↑ Class Weapon ↑ 		 ↑ Class Weapon ↑ 
//────────────────────────────────────────────────────────────────────────────────────────────────────────── 
// ↓ Class cl_Armor ↓	↓ Class cl_Armor ↓		↓ Class cl_Armor ↓		↓ Class cl_Armor ↓		↓ Class cl_Armor ↓		↓ Class cl_Armor ↓		↓ Class cl_Armor ↓		↓ Class cl_Armor ↓

cl_Armor::cl_Armor() : iA_Number(Oid_Armor), iA_Max_Health(900), iA_Def(9), iA_Eng(/*-1*/999), iA_Eng_Use(2), iA_Eng_Re(-1), iA_Honer(0)	// 방어구 생성자
{
	sA_Name = "녺슨 갑주";
	sA_Info = "낡고 녺이슨 갑주입니다.";
}

// 방어구를 교체하는 함수에서 데이터를 전송하는 함수
cl_Armor::Equip_Armor(int iA_NUM, string sA_NAME, string sA_INFO, int iA_HEALTH, int iA_DEF, int iA_ENG, int iA_ENG_USE, int iA_ENG_RE, int iA_HONER)
{
	iA_Number = iA_NUM;
	sA_Name = sA_NAME;
	sA_Info = sA_INFO;
	iA_Max_Health = iA_HEALTH;
	iA_Def = iA_DEF;
	iA_Eng = iA_ENG;
	iA_Eng_Use = iA_ENG_USE;
	iA_Eng_Re = iA_ENG_RE;
	iA_Honer = iA_HONER;
	return 0;
}

/* 방어구 이름 : Body = 0, Oid_Armor = 1, Silk_Armor = 2, Skin_Armor = 3, Up_Skin_Armor = 4, Armor = 5, Bandit_Robe = 10
		Equip_Armor(Body, "이름", "설명", 체력, 방어, 기력, 방어자세_기력, 기력_회복, 명예);
	*/

cl_Armor::Set_Armor(int iA_Num)	// 방어구 를 교체하는함수 
{
	if(iA_Number == iA_Num)return false;	// 이미 장착한 갑옷이면 실패반환
	switch(iA_Num)
	{
	case Body:
		Equip_Armor(Body, "맨몸", "아무것도 걸친게 없는 맨몸입니다.", 300, 0, 5, 2, 0, 0);
		return true;
		
	case Oid_Armor:
		Equip_Armor(Oid_Armor, "녺슨 갑주", "낡고 녺이슨 갑주입니다.", 900, 9, -1, -1, 3, 0);
		return true;
		
	case Silk_Armor:
		Equip_Armor(Silk_Armor, "천 갑옷", "가벼운 재질로 만들어 민첩한 갑옷입니다.", 1500, 10, 1, 2, 1, 0);
		return true;
	
	case Skin_Armor:
		Equip_Armor(Skin_Armor, "가죽 갑옷", "가죽을 덧덴 가죽갑옷입니다.", 2000, 24, 1, 0, 2, 0);
		return true;
	
	case Up_Skin_Armor:
		Equip_Armor(Up_Skin_Armor, "강화 가죽 갑옷", "가죽을 강화하여 더욱 질기게 만들었습니다.", 3000, 28, 2, 1, 2, 0);
		return true;
		
	case Armor:
		Equip_Armor(Armor, "갑주", "튼튼하지만 무거운 갑주입니다.", 4000, 36, -1, 0, 3, 0);
		return true;
		
	case Bandit_Robe:
		Equip_Armor(Bandit_Robe, "도적의 외투", "엉성하지만 도구를 넣을 공간이 많이 있습니다.", 500, 5, 2, 2, 2, 0);
		return true;
	} 
}

cl_Armor::Print_Armor()	// 방어구 능려치를 표시하는 함수
{
	cout << "　　　　　　　　< 방어구 >　　　　　　　　" << endl << endl;
	cout << "　이름 :\t" << sA_Name << endl;
	cout << "　설명 :\t\" " << sA_Info << " \" " << endl;
	cout << "　최대체력 :\t" << iA_Max_Health << endl;
	cout << "　근접방어 :\t" << iA_Def << endl;
	cout << "　기력 :\t" << iA_Eng << endl;
	cout << "　기력_회복 : \t" << iA_Eng_Re << endl;
	cout << "　명성 :\t" << iA_Honer << endl; 
	return 0;
}

void cl_Armor::Print_AName()	// 방어구 이름을 반환하는 함수 
{
	cout << sA_Name;
}

cl_Armor::Return_AEng_Use()	// 방어자세 기력을 반환하는 함수
{
	return iA_Eng_Use; 
} 

cl_Armor::Return_AHealth()	// 최대체력을 반환하는 함수 
{
	return iA_Max_Health;
}

cl_Armor::Return_ADef()	// 근접방어를 반환하는 함수 
{
	return iA_Def;
}

cl_Armor::Return_AEng()	// 기력을 반환하는 함수 
{
	return iA_Eng;
}

cl_Armor::Return_AEng_Re()	// 기력_회복 을 반환하는 함수 
{
	return iA_Eng_Re;
}

cl_Armor::Return_AHoner()	// 방어구 명성을 반환하는 함수 
{
	return iA_Honer;
}

// ↑ Class cl_Armor ↑ 	 ↑ Class cl_Armor ↑ 		 ↑ Class cl_Armor ↑ 		 ↑ Class cl_Armor ↑ 		 ↑ Class cl_Armor ↑ 		 ↑ Class cl_Armor ↑ 		 ↑ Class cl_Armor ↑ 		 ↑ Class cl_Armor ↑ 
//────────────────────────────────────────────────────────────────────────────────────────────────────────── 
// ↓ Class cl_Skill ↓	↓ Class cl_Skill ↓	↓ Class cl_Skill ↓	↓ Class cl_Skill ↓	↓ Class cl_Skill ↓	↓ Class cl_Skill ↓	↓ Class cl_Skill ↓	↓ Class cl_Skill ↓	↓ Class cl_Skill ↓	

cl_Skill::cl_Skill()	// 생성자 
{
	for(int i = 0; i < 2; i++)iS_OFF[i] = false;	// 스킬 활성화 유무 초기화
	sS_1_NAME = "비활성화";
	sS_1_INFO = "스킬이 없다.";
	sS_2_NAME = "비할성화"; 
	sS_2_INFO = "스킬이 없다.";
}

cl_Skill::Set_Weapon_Style(int iType)	// 플레이어의 무기 스타일을 정하는 함수 
{
	if(iType == 1)
	{
		iS_Type = 1;
		return true;
	 } 
	else if(iType == 2)
	{
		iS_Type = 2;
		return true;
	}
}

bool cl_Skill::Set_Skill(int iType)	// 스킬을 활성화하는 함수 
{
	if(iS_Type == 1)	// 검타입 
	{
		switch(iType)
		{
			case 1:
				iS_OFF[0] = true;
				// -- 스킬 1 
				sS_1_NAME = "눈 찌르기";
				sS_1_INFO = "상대방의 눈을 노립니다, 적에게 피해(45%)를 주고 근접공격을 1턴동안 15 낮춥니다.";
				iS_1_ATK = -15; // 몬스터 
				iS_1_DEF = 0;
				iS_1_DMG = 45;	
				iS_1_HP = 0;
				iS_1_ENG = 4;
				return true;
			case 2:
				iS_OFF[1] = true;
				// -- 스킬 2
				sS_2_NAME = "발도술";
				sS_2_INFO = "발도 자세를 취합니다, 근접방어 가 20 증가하고 적의 공격을 막으면 피해(150%)를 줍니다.";
				iS_2_ATK = 0;
				iS_2_DEF = 20;
				iS_2_DMG = 50;
				iS_2_HP = 0;
				iS_2_ENG = 6;
				return true;
		}
	}
	/*else if(iPS_Type == 2)	// 도끼타입 
	{
		switch(iType)
		{
			case 1:
				iPS_OFF[0] = true;
				// -- 스킬 1 
				sPS_1_NAME; 
				sPS_1_INFO;
				iPS_1_ATK;
				iPS_1_DEF;
				iPS_1_DMG;
				iPS_1_HP;
				iPS_1_ENG;
				return true;
			case 2:
				iPS_OFF[1] = true;
				// -- 스킬 2
				sPS_2_NAME; 
				sPS_2_INFO;
				iPS_2_ATK;
				iPS_2_DEF;
				iPS_2_DMG;
				iPS_2_HP;
				iPS_2_ENG;
				return true;
		}
	}*/
}

cl_Skill::Return_SKILL_OFF(int iType)	// 스킬 활성화 유무를 반환하는 함수
{
	return iS_OFF[iType - 1];
}

cl_Skill::Return_iS_Type()	// 무기타입을 반환하는 하숨
{
	return iS_Type; 
} 
 
 cl_Skill::Print_NAME(int iType) // 스킬1 이름 반환 
{
	switch(iType)
	{
		case 0:
			cout << sS_1_NAME;
			return 0;
		case 1:
			cout << sS_2_NAME;
			return 0;
	}
}

cl_Skill::Print_INFO(int iType)	// 스킬 설명 반환
{
	switch(iType)
	{
		case 0:
			cout << sS_1_INFO;
			return 0;
		case 1:
			cout << sS_2_INFO;
			return 0;
	}	
}

cl_Skill::Return_ATK(int iType)	// 스킬 1 근접공격 반환 
{
	switch(iType)
	{
		case 0:
			return iS_1_ATK;
		case 1:
			return iS_2_ATK;
	}
}

cl_Skill::Return_DEF(int iType)	// 스킬1 근접방어 반환 
{
	switch(iType)
	{
		case 0:
			return iS_1_DEF;
		case 1:
			return iS_2_DEF;
	}
}

cl_Skill::Return_DMG(int iType)	// 스킬 1 무기피해 반환 
{
	switch(iType)
	{
		case 0:
			return iS_1_DMG;
		case 1:
			return iS_2_DMG;
	}
}

cl_Skill::Return_HP(int iType)	// 스킬 1 체력 반환 
{
	switch(iType)
	{
		case 0:
			return iS_1_HP;
		case 1:
			return iS_2_HP;
	}
}

cl_Skill::Return_ENG(int iType)	// 스킬 1 소모 기력 반환 
{
	switch(iType)
	{
		case 0:
			return iS_1_ENG;
		case 1:
			return iS_2_ENG;
	}
}


	// ↑ Class cl_Skill ↑	↑ Class cl_Skill ↑	↑ Class cl_Skill ↑	↑ Class cl_Skill ↑	↑ Class cl_Skill ↑	↑ Class cl_Skill ↑	↑ Class cl_Skill ↑	↑ Class cl_Skill ↑	↑ Class cl_Skill ↑
	//────────────────────────────────────────────────────────────────────────────────────────────────────────── 
// ↓ Class cl_Player ↓	↓ Class cl_Player ↓	↓ Class cl_Player ↓		↓ Class cl_Player ↓		↓ Class cl_Player ↓		↓ Class cl_Player ↓		↓ Class cl_Player ↓		↓ Class cl_Player ↓

cl_Player::cl_Player() : iP_Atk(0), iP_Def(0), iP_Eng(5), iP_Eng_Max(5), iP_Eng_Re(2), iP_Honer(0), iP_Dmg(0), iP_Health(0), iP_Max_Health(0), iP_Dodge(30)	// 플레이어 생성자 이름을 입력받는다. 
{
	//	플레이어의 무기및 방어구 생성 
	iP_Weapon = new cl_Weapon;
	iP_Armor = new cl_Armor;
	iP_Skill = new cl_Skill;
	cout << "당신은 어느 한 황무지에서 깨어낫습니다." << endl;
	cout << "당신에겐 이름을 제외한 어떠한 기억도 남아있지 않습니다." << endl;
	cout << "주변에 무장한 괴한들이 당신에게 다가오고 있습니다." << endl;
	cout << "상황은 방금 꺠어난 당신에겐 유리하게 진행되지는 않을듯합니다." << endl << endl;
	cout << "\t\t- 아무키나 누르시오 -" << endl;
	getch();
	while(1)	// 이름을 입력하는 무한반복 
	{
		system("cls");
		cout << "당신의 이름은 무엇인가...?" << endl;	
		cout << "내 이름은 : ";
		getline(cin, sP_Name);
		cout << sP_Name << " 이(가) 맞는가?" << endl;
		cout << "1. 그렇다\t2.아니다" << endl;
		if(Choice_Event(1) == false)
			continue;
		else break;
	}
	system("cls");
}

cl_Player::~cl_Player()	// 플레이어 소멸자 무기값, 방어값 을 제거 
{
	delete iP_Weapon;
	delete iP_Armor;
	delete iP_Skill;
}

cl_Player::iEquip_Weapon(int iType, bool bType)	// 무기를 장착/해제 하는 함수 
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
		cout << "이미 장착한 무기" << endl;
		return false;
	}
}

cl_Player::Sync_Weapon(int iType)	// 무기의 능력치를 적용하는 함수
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

cl_Player::iEquip_Armor(int iType, bool bType)	// 방어구를 장착/해제 하는 함수 
{
	int Health_Temp = iP_Health;
	if(bType == false)
		Sync_Armor(false);
	if(iP_Armor->Set_Armor(iType) == true)
	{
		Sync_Armor(true);
		// 바뀐 갑옷 체력값이 이전 체력값 보다 크면 현재 체력을 줄인다. 
		if(iP_Max_Health > Health_Temp)
			iP_Health = Health_Temp;
		return 0;	
	}
	else
	{
		Sync_Armor(true);
		iP_Health = Health_Temp;
		cout << "이미 장착한 방어구" << endl;
		return false;
	}
}

cl_Player::Sync_Armor(int iType)	// 방어구의 능력치를 적용하는 함수 
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

cl_Player::iReturn_Inventory()	// 인벤토리 창을 여는 함수 
{
	
}

cl_Player::Input_Damage(int iDamage)	// 플레이어가 데미지를 받는 함수 
{
	iP_Health -= iDamage;
	cout <<"※ " << iDamage << " 만큼의 데미지를 받았다!" << endl;
	getch();
	if(iP_Health < 0) return false;
	return true;
}

cl_Player::Input_Dodge(int iType)	// 플레이어가 회피하는 함수
{
	if(iType == true)	// 회피값을 증가시키는 함수
	{
		cout << "※ 당신은 방어 자세를 취했다!" << endl;
		cout << "※ 근접방어 +" << iP_Dodge << endl;
		getch();
		iP_Def += iP_Dodge;
		return true;
	}
	else if(iType == false)	// 회피값을 감소시키는 함수
	{
		iP_Def -= iP_Dodge;
		return true;
	} 
} 

cl_Player::iPrint_Profil(bool bType)	// 플레이어의 프로필을 출력하는 함수 
{
	if(bType == false)
	{
		system("cls");
		cout << "　　　　　　　　< 프로필 >　　　　　　　　" << endl << endl;
		cout << "　이름 :\t" << sP_Name << endl;
		cout << "　체력 :\t" << iP_Health << " / " << iP_Max_Health << endl;
		cout << "　근접공격 :\t" << iP_Atk << endl;
		cout << "　근접방어 :\t" << iP_Def << endl;
		cout << "　무기피해 :\t" << iP_Dmg << endl;
		cout << "　기력 :\t" << iP_Eng << " / " << iP_Eng_Max << endl;
		cout << "　기력_회복 :\t" << iP_Eng_Re << endl;
		cout << "　명성 :\t" << iP_Honer << endl << endl;
		iP_Weapon->Print_Weapon();
		iP_Armor->Print_Armor();
		return 0;	
	}
	else
	{
		cout << "　이름 : " << sP_Name << endl;
		cout << "　체력 : " << iP_Health << " / " << iP_Max_Health << endl;
		cout << "　근접공격 : " << iP_Atk << "\t\t근접방어 : " << iP_Def << endl;
		cout << "　무기피해 : " << iP_Dmg;
		cout << " \t기력 : " << iP_Eng << " / " << iP_Eng_Max << "(" << iP_Eng_Re << ")" << endl;
		cout << "　무기 : "; iP_Weapon->Print_Wname(); cout << "\t방어구 : "; iP_Armor->Print_AName();
	}
}

cl_Player::Player_Eng_Use(int iEng_Use)	// 플레이어가 기력을 소비하는함수
{
	switch(iEng_Use)
	{
		case ENG_ATTAK:
			if(iP_Weapon->Return_WEng_Use() > iP_Eng)return false;
			iP_Eng -= iP_Weapon->Return_WEng_Use();
			if(iP_Eng < 0)iP_Eng = 0;
			cout << "※ " << iP_Weapon->Return_WEng_Use() << "만큼의 기력을 사용했다!" << endl;
			return true;
		
		case ENG_DODGE:
			if(iP_Armor->Return_AEng_Use() > iP_Eng)return false;
			iP_Eng -= iP_Armor->Return_AEng_Use();
			if(iP_Eng < 0)iP_Eng = 0;
			cout << "※ " << iP_Armor->Return_AEng_Use() << "만큼의 기력을 사용했다!" << endl;
			return true;
			
		case ENG_SKILL_1:
			if(iP_Skill->Return_ENG(0) > iP_Eng)return false;
			iP_Eng -= iP_Skill->Return_ENG(0);
			if(iP_Eng < 0)iP_Eng = 0;
			cout << "※ " << iP_Skill->Return_ENG(0) << "만큼의 기력을 사용했다!" << endl;
			return true;
			
		case ENG_SKILL_2:
			if(iP_Skill->Return_ENG(1) > iP_Eng)return false;
			iP_Eng -= iP_Skill->Return_ENG(1);
			if(iP_Eng < 0)iP_Eng = 0;
			cout << "※ " << iP_Skill->Return_ENG(1) << "만큼의 기력을 사용했다!" << endl;
			return true;
			
	}	
}

cl_Player::Player_Eng_Recovery(bool bType)	// 플레이어가 기력을 회복하는 함수
{
	if(bType == true)
	{
		iP_Eng += iP_Eng_Re;
		if(iP_Eng > iP_Eng_Max)iP_Eng = iP_Eng_Max;
		cout << "※ " << iP_Eng_Re << "만큼의 기력을 회복하였습니다!" << endl;
		cout << "※ 근접방어 + " << Percent_Make(iP_Dodge, 30) << endl; 
		iP_Def += Percent_Make(iP_Dodge, 30);
		getch();
		return true;
	}
	
	else if(bType == false)
	{
		iP_Def -= Percent_Make(iP_Dodge, 30);
		return true;
	}
}

//	B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG

cl_Player::Player_Buff(bool bType, int iType, int iTemp) // 플레이어가 버프효과를 받는 함수
{
	static int ATK[2];
	static int DEF[2];
	static int ENG[2];
	static int ENG_MAX[2];
	static int ENG_RE[2];
	static int DMG[2];
	
	switch(iType)
	{
		case B_ATK:
			if(bType == false)
			{
				iP_Atk = ATK[0];
				return true;
			}
			ATK[0] = iP_Atk;
			iP_Atk += iTemp;
			return true;
			
		case B_DEF:
			if(bType = false)
			{
				iP_Def == DEF[0];
				return true;
			}
			DEF[0] = iP_Def;
			iP_Def += iTemp;
			return true;
			
		case B_ENG:
			if(bType == false)
			{
				iP_Eng = ENG[0];
				return true;
			}
			ENG[0] = iP_Eng;
			iP_Eng += iTemp;
			return true;
			
		case B_ENG_MAX:
			if(bType == false)
			{
				iP_Eng_Max = ENG_MAX[0];
				return true;
			}
			ENG_MAX[0] = iP_Eng_Max;
			iP_Eng_Max += iTemp;
			return true;
			
		case B_ENG_RE:
			if(bType == false)
			{
				iP_Eng_Re = ENG_RE[0];
				return true;
			}
			ENG_RE[0] = iP_Eng_Re;
			iP_Eng_Re += iTemp;
			return true;
			
		case B_DMG:
			if(bType == false)
			{
				iP_Dmg = DMG[0];
				return true;
			}
			DMG[0] = iP_Dmg;
			iP_Dmg += iTemp;
			return true;
			
		case DB_ATK:
			if(bType == false)
			{
				iP_Atk = ATK[1];
				return true;
			}
			ATK[1] = iP_Atk;
			iP_Atk -= iTemp;
			return true;
			
		case DB_DEF:
			if(bType == false)
			{
				iP_Def = DEF[1];
				return true;
			}
			DEF[1] = iP_Def;
			iP_Def -= iTemp;
			return true;
			
		case DB_ENG:
			if(bType = false)
			{
				iP_Eng == ENG[1];
				return true;
			}
			ENG[1] = iP_Eng;
			iP_Eng -= iTemp;
			return true;
			
		case DB_ENG_MAX:
			if(bType = false)
			{
				iP_Eng_Max == ENG_MAX[1];
				return true;
			}
			ENG_MAX[1] = iP_Eng_Max;
			iP_Eng_Max -= iTemp;
			return true;
			
		case DB_ENG_RE:
			if(bType == false)
			{
				iP_Eng_Re = ENG_RE[1];
				return true;
			}
			ENG_RE[1] = iP_Eng_Re;
			iP_Eng_Re -= iTemp;
			return true;
			
		case DB_DMG:
			if(bType == false)
			{
				iP_Def = DEF[1];
				return true;
			}
			DEF[1] = iP_Dmg;
			iP_Dmg -= iTemp;
			return true;
	}
}

cl_Player::Print_Name()	// 플레이어의 이름을 반환하는 함수 
{
	cout << sP_Name; 
}

cl_Player::Return_Health()	// 플레이어의 체력을 반환하는 함수
{
	return iP_Health;
}

cl_Player::Return_Max_Health()	// 플레이어의 최대체력을 반환하는 함수 
{
	return iP_Max_Health;
}

cl_Player::Return_Atk()	// 플레이어의 근접공격 을 반환하는 함수	
{
	return iP_Atk;
}

cl_Player::Return_Def()	// 플레이어의 근접방어 을 반환하는 함수	
{
	return iP_Def;
}

cl_Player::Return_Dmg()	// 플레이어의 무기피해 을 반환하는 함수
{
	return iP_Dmg;
}

cl_Player::Return_Honer()	// 플레이어의 명성 을 반환하는 함수
{
	return iP_Honer;
}

cl_Player::Return_Eng()	// 플레이어의 기력 을 반환하는 함수
{
	return iP_Eng;
}

cl_Player::Return_Eng_Max()	// 플레이어의 기력 최댓값을 반환하는 함수
{
	return iP_Eng_Max; 
}

cl_Player::Return_Eng_Re()	// 플레이어의 기력_회복 을 반환하는 함수
{
	return iP_Eng_Re;
}

cl_Player::Return_Dodge()	// 플레이어의 회피값을 반환하는 함수
{
	return iP_Dodge; 
 } 

// ↑ Class cl_Player ↑↑  Class cl_Player ↑  Class cl_Player ↑  Class cl_Player ↑  Class cl_Player ↑  Class cl_Player ↑  Class cl_Player ↑  Class cl_Player ↑
//────────────────────────────────────────────────────────────────────────────────────────────────────────── 
// ↓ Class cl_Monster ↓↓ Class cl_Monster ↓	↓ Class cl_Monster ↓	↓ Class cl_Monster ↓	↓ Class cl_Monster ↓	↓ Class cl_Monster ↓	↓ Class cl_Monster ↓	

/*
	Monster_Number : Bandit = 0,
	Weapon_Number : Fist = 0, Oid_Sword = 1, Oid_Axe = 2, Long_Sword = 3, Two_Handed_Axe = 4, Bandit_Knife = 10
	Armor_Number : Body = 0, Oid_Armor = 1, Silk_Armor = 2, Skin_Armor = 3, Up_Skin_Armor = 4, Armor = 5, Bandit_Robe = 10
*/

cl_Monster::Human_Type(string sNAME, int iHoner, int iWeapon, int iArmor)	// 인간형 몬스터 생성
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

// 짐승형 몬스터 생성 
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
			Human_Type("도적", 0, Bandit_Knife, Bandit_Robe);
			break;
		
		case Wolf:
			Beast_Type("늑대", 800, 25, 3, 350, 10, 10, 5, 0);
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

cl_Monster::Print_Monster_Info()	// 몬스터의 상태창을 표시 
{
	cout << "　이름 : " << sM_Name << endl;
	cout << "　체력 : " << iM_Health << " / " << iM_Max_Health << endl;
	cout << "　근접공격 : " << iM_Atk << "\t\t근접방어 : " << iM_Def << endl;
	cout << "　무기피해 : " << iM_Dmg;
	cout << "\t기력 : " << iM_Eng << " / " << iM_Eng_Max << "(" << iM_Eng_Re << ")"  << endl;
	if(iSpecies == true)
	{
		cout << "　무기 : "; iM_Weapon->Print_Wname();cout << "\t방어구 : "; iM_Armor->Print_AName();
	}
	return 0;
}

cl_Monster::Input_Damage(int iDamage)	// 몬스터가 데미지를 입는 함수
{
	iM_Health -= iDamage;
	cout <<"※ " << iDamage << " 만큼의 데미지를 주었다!" << endl;
	getch();
	if(iM_Health < 0) return false;
} 

cl_Monster::Sync_Status()	// 몬스터의 장비를 동기화
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

cl_Monster::Monster_Eng_Use()	// 몬스터가 기력을 소비하는함수
{
	if(iM_Eng < iM_Weapon->Return_WEng_Use())return false;
	iM_Eng -= iM_Weapon->Return_WEng_Use();
	return true;
}

cl_Monster::Monster_Eng_Recovery()	// 몬스터가 기력을 회복하는 함수
{
	iM_Eng += iM_Eng_Re;
	if(iM_Eng > iM_Eng_Max)iM_Eng = iM_Eng_Max;
	return true;
}

cl_Monster::Monster_Buff(bool bType, int iType, int iTemp) // 몬스터가 버프효과를 받는 함수
{
	static int ATK[2];
	static int DEF[2];
	static int ENG[2];
	static int ENG_MAX[2];
	static int ENG_RE[2];
	static int DMG[2];
	switch(iType)
	{
		case B_ATK:
			if(bType == false)
			{
				iM_Atk = ATK[0];
				return true;
			}
			ATK[0] = iM_Atk;
			iM_Atk += iTemp;
			return true;
			
		case B_DEF:
			if(bType == false)
			{
				iM_Def = DEF[0];
				return true;
			}
			DEF[0] = iM_Def;
			iM_Def += iTemp;
			return true;
			
		case B_ENG:
			if(bType == false)
			{
				iM_Eng = ENG[0];
				return true;
			}
			ENG[0] = iM_Eng;
			iM_Eng += iTemp;
			return true;
			
		case B_ENG_MAX:
			if(bType == false)
			{
				iM_Eng_Max = ENG_MAX[0];
				return true;
			}
			ENG_MAX[0] == iM_Eng_Max;
			iM_Eng_Max += iTemp;
			return true;
			
		case B_ENG_RE:
			if(bType = false)
			{
				iM_Eng_Re == ENG_RE[0];
				return true;
			}
			ENG_RE[0] = iM_Eng_Re;
			iM_Eng_Re += iTemp;
			return true;
			
		case B_DMG:
			if(bType == false)
			{
				iM_Dmg = DMG[0];
				return true;
			}
			DMG[0] = iM_Dmg;
			iM_Dmg += iTemp;
			return true;
			
		case DB_ATK:
			if(bType == false)
			{
				iM_Atk = ATK[1];
				return true;
			}
			ATK[1] = iM_Atk;
			iM_Atk -= iTemp;
			return true;
			
		case DB_DEF:
			if(bType == false)
			{
				iM_Def = DEF[1];
				return true;
			}
			DEF[1] = iM_Def;
			iM_Def -= iTemp;
			return true;
			
		case DB_ENG:
			if(bType == false)
			{
				iM_Eng = ENG[1];
				return true;
			}
			ENG[1] = iM_Eng;
			iM_Eng -= iTemp;
			return true;
			
		case DB_ENG_MAX:
			if(bType == false)
			{
				iM_Eng_Max = ENG_MAX[1];
				return true;
			}
			ENG_MAX[1] = iM_Eng_Max;
			iM_Eng_Max -= iTemp;
			return true;
			
		case DB_ENG_RE:
			if(bType == false)
			{
				iM_Eng_Re = ENG_RE[1];
				return true;
			}
			ENG_RE[1] = iM_Eng_Re;
			iM_Eng_Re -= iTemp;
			return true;
			
		case DB_DMG:
			if(bType == false)
			{
				iM_Dmg = DMG[1];
				return true;
			}
			DMG[1] = iM_Dmg;
			iM_Dmg -= iTemp;
			return true;
	}
}

cl_Monster::Return_Health()	// 몬스터의 체력을 반환 
{
	return iM_Health;
}

cl_Monster::Return_Max_Health()	// 몬스터의 최대체력을 반환 
{
	return iM_Max_Health;
}

cl_Monster::Return_Atk()	// 몬스터의 근접공격을 반환 
{
	return iM_Atk;
}

cl_Monster::Return_Def()	// 몬스터의 근접방어를 반환 
{
	return iM_Def;
}

cl_Monster::Return_Dmg()	// 몬스터의 공격력을 반환 
{
	return iM_Dmg;
}

cl_Monster::Return_Eng()	// 몬스터의 기력을 반환 
{
	return iM_Eng;
}

cl_Monster::Return_Eng_Max()	// 몬스터의 최대기력을 반환 
{
	return iM_Eng_Max;
}

cl_Monster::Return_Eng_Re()	// 몬스터의 기력_회복 을 반환 
{
	return iM_Eng_Re;
}

cl_Monster::Return_Honer()	// 몬스터의 명성을 반환
{
	return iM_Honer;
} 
