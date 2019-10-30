#include "Interface.h"


cl_Player_Buff::cl_Player_Buff(cl_Player * Player)	// 생성자
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
cl_Player_Buff::Checking_Buff()	// 버프를 체크하는 함수
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

cl_Player_Buff::BUFF_ON(int iType, int iTemp)	// 버프를 키는 함수 
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

bool cl_Player_Buff::Return_Buff_Dodge()	// 방어자세 버프 반환
{
	return P_Buff_Dodge;
}

bool cl_Player_Buff::Return_Buff_Rest()	// 숨고르기 버프 반환 
{
	return P_Buff_Rest;
}

bool cl_Player_Buff::Return_Buff_Atk()	// 공격공격 버프 반환 
{
	return P_Buff_Atk;
}

bool cl_Player_Buff::Return_Buff_Def()	// 근접방어 버프 반환 
{
	return P_Buff_Def;	
}

bool cl_Player_Buff::Return_Buff_Eng()	// 기력 버프 반환 
{
	return P_Buff_Eng;
}

bool cl_Player_Buff::Return_Buff_Eng_Max()	// 기력_최대치 버프 반환 
{
	return P_Buff_Eng_Max;
}

bool cl_Player_Buff::Return_Buff_Eng_Re()	// 기력_회복 버프 반환 
{
	return P_Buff_Eng_Re;
}

bool cl_Player_Buff::Return_Buff_Dmg()	// 무기피해 버프 반환 
{
	return P_Buff_Dmg;
}
//							버프	===	디버프						//
bool cl_Player_Buff::Return_DeBuff_Atk()	// 근접공격 디버프 반환 
{
	return P_DeBuff_Atk;
}

bool cl_Player_Buff::cl_Player_Buff::Return_DeBufF_Def()	// 근접방어 디버프 반한 
{
	return P_DeBuff_Def;
}

bool cl_Player_Buff::Return_DeBuff_Eng()	// 기력 디버프 반환 
{
	return P_DeBuff_Eng;
}

bool cl_Player_Buff::Return_DeBuff_Eng_Max()	// 기력_최대치 디버프 반환 
{
	return P_DeBuff_Eng_Max;
}

bool cl_Player_Buff::Return_DeBuff_Eng_Re()	// 기력_회복 디버프 반환 
{
	return P_DeBuff_Eng_Re;
}

bool cl_Player_Buff::Return_DeBuff_Dmg()	// 무기피해 디버프 반환
{
	return P_DeBuff_Dmg;
}
		
// ↑ Class cl_Player_Buff ↑	↑ Class cl_Player_Buff ↑	↑ Class cl_Player_Buff ↑	↑ Class cl_Player_Buff ↑	↑ Class cl_Player_Buff ↑	↑ Class cl_Player_Buff ↑	↑ Class cl_Player_Buff ↑	↑ Class cl_Player_Buff ↑	
//─────────────────────────────────────────────────────────────────────────────────────────────────────────────────
// ↓ Class cl_Monster_Buff ↓		↓ Class cl_Monster_Buff ↓		↓ Class cl_Monster_Buff ↓		↓ Class cl_Monster_Buff ↓		↓ Class cl_Monster_Buff ↓		↓ Class cl_Monster_Buff ↓		↓ Class cl_Monster_Buff ↓		

cl_Monster_Buff::cl_Monster_Buff(cl_Monster * Monster)	// 생성자
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

cl_Monster_Buff::Checking_Mob_Buff()	// 버프를 체크하는 함수
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

cl_Monster_Buff::Mob_BUFF_ON(int iType, int iTemp)	// 버프를 키는 함수 
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

bool cl_Monster_Buff::Return_Buff_Atk()	// 공격공격 버프 반환 
{
	return M_Buff_Atk;
}

bool cl_Monster_Buff::Return_Buff_Def()	// 근접방어 버프 반환 
{
	return M_Buff_Def;	
}

bool cl_Monster_Buff::Return_Buff_Eng()	// 기력 버프 반환 
{
	return M_Buff_Eng;
}

bool cl_Monster_Buff::Return_Buff_Eng_Max()	// 기력_최대치 버프 반환 
{
	return M_Buff_Eng_Max;
}

bool cl_Monster_Buff::Return_Buff_Eng_Re()	// 기력_회복 버프 반환 
{
	return M_Buff_Eng_Re;
}

bool cl_Monster_Buff::Return_Buff_Dmg()	// 무기피해 버프 반환 
{
	return M_Buff_Dmg;
}
//							버프	===	디버프						//
bool cl_Monster_Buff::Return_DeBuff_Atk()	// 근접공격 디버프 반환 
{
	return M_DeBuff_Atk;
}

bool cl_Monster_Buff::Return_DeBufF_Def()	// 근접방어 디버프 반한 
{
	return M_DeBuff_Def;
}

bool cl_Monster_Buff::Return_DeBuff_Eng()	// 기력 디버프 반환 
{
	return M_DeBuff_Eng;
}

bool cl_Monster_Buff::Return_DeBuff_Eng_Max()	// 기력_최대치 디버프 반환 
{
	return M_DeBuff_Eng_Max;
}

bool cl_Monster_Buff::Return_DeBuff_Eng_Re()	// 기력_회복 디버프 반환 
{
	return M_DeBuff_Eng_Re;
}

bool cl_Monster_Buff::Return_DeBuff_Dmg()	// 무기피해 디버프 반환
{
	return M_DeBuff_Dmg;
}

// ↑ Class cl_Monster_Buff ↑	↑ Class cl_Monster_Buff ↑	↑ Class cl_Monster_Buff ↑	↑ Class cl_Monster_Buff ↑	↑ Class cl_Monster_Buff ↑	↑ Class cl_Monster_Buff ↑	↑ Class cl_Monster_Buff ↑	↑ Class cl_Monster_Buff ↑	
//─────────────────────────────────────────────────────────────────────────────────────────────────────────────────

bool Player_Attack(int iP_ATK, int iM_DEF) {	// 플레이어가 공격하는 함수
	float Percent = rand() % 10000 / ATTACK_PERCENT;
	float Attacker = LOW_LIMIT_ATK + (float)iP_ATK - (float)iM_DEF;

	cout << "공격을 시도합니다!" << endl;
	if(Percent <= Attacker) {
		cout << "몬스터의 방어능력 (" << Percent << ") < 플레이어의 공격능력 (" << Attacker << ")" << endl << endl;
		cout << "　<<<< 공격 성공! >>>>" << endl;
		return true;
	} else {
		cout << "몬스터의 방어능력 (" << Percent << ") > 플레이어의 공격능력 (" << Attacker << ")" << endl << endl;
		cout << "　<<<< 공격 실패! >>>>" << endl;
		getch();
		return false;
	}
}

bool Monster_Attack(int iM_ATK, int iP_DEF) {	// 몬스터가 공격하는 함수
	float Percent = rand() % 10000 / ATTACK_PERCENT;
	float Attacker = LOW_LIMIT_ATK + (float)iM_ATK - (float)iP_DEF;

	cout << endl <<"몬스터가 공격을 시도합니다!" << endl;
	if(Percent <= Attacker) {
		cout << "플레이어의 방어능력 (" << Percent << ") < 몬스터의 공격능력 (" << Attacker << ")" << endl << endl;
		cout << "<<<< 방어 실패! >>>>" << endl;
		return true;
	} else {
		cout << "플레이어의 방어능력 (" << Percent << ") > 몬스터의 공격능력 (" << Attacker << ")" << endl << endl;
		cout << "<<<< 방어 성공! >>>>" << endl;
		getch();
		return false;
	}
}

Print_Combat_Interface(cl_Player * Player) {	// 전투 인텅페이스 출력
	// 1. 공격 2. 스킬 3. 아이템 등등..
	cout << endl << "----------------------------------" << endl;
	cout << "무슨 행동을 할까?" << endl;
	cout << "1. 공격 (필요기력 : " << Player->iP_Weapon->Return_WEng_Use() <<")" << endl ;
	cout << "2. 방어자세 (필요기력 : " <<  Player->iP_Armor->Return_AEng_Use() << ")" << endl;
	cout << "3. 숨고르기 (회복 기력 : " << Player->Return_Eng_Re() << ")" << endl;
	cout << "4. 스킬 " << endl;
	cout << "5. 아이템" << endl << endl; 
	return Choice_Event(3);
}

int Print_Skill_Interface(cl_Player * Player, cl_Monster * Monster, cl_Player_Buff * P_Buff, cl_Monster_Buff * M_Buff, bool bTurn_Checker)	// 스킬 인터페이스 출력 
{
	cout << endl << "----------------------------------" << endl;
	for(int i = 0; i < 2; i++)
	{
		cout << i + 1 << ". ";
		Player->iP_Skill->Print_NAME(i);
		cout << endl; 
		Player->iP_Skill->Print_INFO(i);
		cout << endl;
		cout << "소모기력 : " << Player->iP_Skill->Return_ENG(i);
		cout << endl << endl; 
		if(i == 1)cout << i + 2 << ". 이전" << endl;
	}
	int iChoice = Choice_Event(4);
	if(Player->iP_Skill->Return_SKILL_OFF(iChoice) == false)
	{
		cout << endl << "※ 스킬이 비활성화 상태입니다." << endl;
		getch();
		return false;
	}
	
	if(iChoice == 3)return false;
	// -- 스킬 활성화
	//B_DODGE = 0, B_REST = 1, B_ATK, B_DEF, B_ENG, B_ENG_MAX, B_ENG_RE, B_DMG, /**/ DB_ATK, DB_DEF, DB_ENG, DB_ENG_MAX, DB_ENG_RE, DB_DMG
	
	if(Player->iP_Skill->Return_iS_Type() == 1)	// 타입 검 
	{
		switch(iChoice)
		{
			case 1:		// 눈찌르기 
				if(Player->Player_Eng_Use(4) == false)
				{
					cout << "기력이 부족합니다!" << endl;
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
			case 2:		// 발도
			
				return true;
		}
	}
	
	else if(Player->iP_Skill->Return_iS_Type() == 2) // 타입 스킬 
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
Combat(cl_Player * Player, int MOB_TYPE)	// 전투하는 함수
{
	cl_Monster * Monster = new cl_Monster(MOB_TYPE);	// 몬스터 생성
	cl_Player_Buff BUFF(Player);
	cl_Monster_Buff M_BUFF(Monster);
	bool bTurn_Checker = true;		// 순서를 표시하는 변수 true = 플레이어 . false = 몬스터 
	

	while(true) {		// 전투 반복 
		Combat_First:	// 선택하는 곳으로 이동 
		system("cls");
		
		if(Player->Return_Health() <= 0)
		{
			system("cls");
			cout << "당신은 쓰러젓다.." << endl;
			getch();
			return false;	// 패배시 실패 반환 
		}
		if(Monster->Return_Health() <= 0)
		{
			system("cls");
			cout << "적을 처치 했다!" << endl;
			getch();
			return true;	// 승리시 성공 반환 
		}

		Monster->Print_Monster_Info();
		cout << endl << endl;
		Player->iPrint_Profil(true);
		
		if(bTurn_Checker == true)		// 턴체크 
		{
			bTurn_Checker = false;		// 턴을 바꾼다. 
			switch(Print_Combat_Interface(Player))		// 플레이어의 선택  
			{
				case 1:	// 공격 
					if(Player->Player_Eng_Use(ENG_ATTAK) == false)	// 기력이 부족하면 실패 
					{
						cout << "※ 기력이 부족합니다!" << endl;
						getch();
						bTurn_Checker = true;
						goto Combat_First;
					}
					if(Player_Attack(Player->Return_Atk(), Monster->Return_Def()) == true)	// 공격하는 함수 
						if(Monster->Input_Damage(Player->Return_Dmg()) == false) goto Combat_First;
					break;
				case 2:	// 방어자세 
					if(Player->Player_Eng_Use(ENG_DODGE) == false)	// 기력이 부족하면 실패 
					{
						cout << "※ 기력이 부족합니다!" << endl;
						getch();
						bTurn_Checker = true;
						goto Combat_First;
					}
					BUFF.BUFF_ON(B_DODGE);
					break;
				case 3:	// 숨고르기 
					BUFF.BUFF_ON(B_REST);
					break;
				case 4:	// 스킬 
					if(Print_Skill_Interface(Player, Monster, &BUFF, &M_BUFF, bTurn_Checker) == false)
					{
						bTurn_Checker = true;
						goto Combat_First;
					}
					break;
				case 5:	// 아이템 
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
				cout << endl << "적은 숨을 골랐다!" << endl;
				getch();	
			}
			else if(Monster_Attack(Monster->Return_Atk(), Player->Return_Def()) == true)
				if(Player->Input_Damage(Monster->Return_Dmg()) == false)goto Combat_First;
				BUFF.Checking_Buff();
		}
	}
}
