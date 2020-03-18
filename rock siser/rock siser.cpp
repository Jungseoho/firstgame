#include "stdafx.h"
// 2선승제 묵찌빠 게임 만들기 
// 일단 컴퓨터가 1,2,3중 아무거나 고를수 있게 만들기

#include <iostream>


int main()
{
 
	int nP, nC;

	bool isContinue = true;
	bool result = false;

	while (isContinue == true) // 무승부가 나올 경우 계속 가위바위보를 하기위한 반복문 
	{
		srand(time(NULL));
		rand();

		nC = rand() % 3 + 1; // 컴퓨터가 1,2,3 중 랜덤한 숫자를 고르도록 설정 
		
		cout << "1.가위 2.바위 3.보 " << endl;
		cout << "-------- 궁국의 묵찌빠 게임 ----------" << endl;
		cout << "가위 바위 보 중 무엇을 낼지 선택하세요" << endl;
		cin >> nP;

		if (nC == 1) // 컴퓨터가 가위를 냈을 경우
		{
			if (nP == 1) 
			{
				cout << "컴퓨터 : 가위 vs 플레이어 : 가위" << endl;
				cout << "무승부 입니다 다시 가위바위보 하세요" << endl;
			}

			else if (nP == 2)
			{
				cout << "컴퓨터 : 가위 vs 플레이어 : 바위" << endl;
				cout << "플레이어가 이겼습니다 가위바위보중 무엇을 낼지 선택하세요" << endl;
				isContinue = false; 
				result = true;
			}
			else
			{
				cout << "컴퓨터 : 가위 vs 플레이어 : 보" << endl;
				cout << "컴퓨터가 이겼습니다 가위바위보중 무엇을 낼지 선택하세요" << endl;
				isContinue = false;
			}
		}
		if (nC == 2) // 컴퓨터가 바위를 냈을 경우
		{
			if (nP == 1)
			{
				cout << "컴퓨터 : 바위 vs 플레이어 : 가위" << endl;
				cout << "컴퓨터가 이겼습니다 가위바위보중 무엇을 낼지 선택하세요" << endl;
			}

			else if (nP == 2)
			{
				cout << "컴퓨터 : 바위 vs 플레이어 : 바위" << endl;
				cout << "무승부 입니다 다시 가위바위보 하세요" << endl;
				isContinue = false;
			}
			else
			{
				cout << "컴퓨터 : 바위 vs 플레이어 : 보" << endl;
				cout << "플레이어가 이겼습니다 가위바위보중 무엇을 낼지 선택하세요" << endl;
				isContinue = false;
				result = true;
			}
		}
		if (nC == 3) // 컴퓨터가 보를 냈을 경우
		{
			if (nP == 1) 
			{
				cout << "컴퓨터 : 보 vs 플레이어 : 가위" << endl;
				cout << "플레이어가 이겼습니다 가위바위보중 무엇을 낼지 선택하세요" << endl;
				result = true;
				isContinue = false;
			}

			else if (nP == 2)
			{
				cout << "컴퓨터 : 보 vs 플레이어 : 바위" << endl;
				cout << "컴퓨터가 이겼습니다 가위바위보중 무엇을 낼지 선택하세요" << endl;
				isContinue = false;
			}
			else
			{
				cout << "컴퓨터 : 보 vs 플레이어 : 보" << endl;
				cout << "무승부 입니다 다시 가위바위보 하세요" << endl;
			
			}
		}
	}

	bool secondIsContinue = true;
	bool finalResult = false;

	while (secondIsContinue == true)
	{
		
		cout << "값을 입력하세요." << endl;
		cin >> nP;
		
		if (nC == 1) // 컴퓨터가 가위일 경우
		{
			if (nP == 1)
			{
				if (result)
				{
					cout << "플레이어가 최종 승리했습니다." << endl; // 플레이어가 주도권이 있는 상태에서 이겼을때 구문 출력
					secondIsContinue == false;
				}
				else
				{
					cout << "컴퓨터가 최종 승리했습니다." << endl; // 컴퓨터가 주도권이 있는 상태에서 이겼을때 구문 출력
					secondIsContinue == false;
				}
			}
			else if (nP == 2)
			{
				cout << "주도권이 아직 있습니다 다시 가위바위보 하세요" << endl; // 플레이어에게 주도권이 아직 남아있는경우
				result == true;
			}
			else
			{
				cout << "주도권이 넘어갔습니다 다시 가위바위보 하세요" << endl; // 주도권이 컴퓨터에게로 다시 넘어간 경우
				result == false;
			}
		}
		if (nC == 2) // 컴퓨터가 바위일 경우
		{
			if (nP == 2)
			{
				if (result)
				{
					cout << "플레이어가 최종 승리했습니다." << endl; // 플레이어가 주도권이 있는 상태에서 이겼을때 구문 출력
					secondIsContinue == false;
				}
				else
				{
					cout << "컴퓨터가 최종 승리했습니다." << endl; // 컴퓨터가 주도권이 있는 상태에서 이겼을때 구문 출력
					secondIsContinue == false;
				}
			}
			else if (nP == 1)
			{
				cout << "주도권이 넘어갔습니다 다시 가위바위보 하세요." << endl; // 주도권이 컴퓨터에게로 다시 넘어간 경우
			}
			else
			{
				cout << "주도권이 아직 있습니다 다시 가위바위보 하세요." << endl; //  플레이어에게 주도권이 아직 남아있는경우
			}
		}
	
		if (nC == 3) // 컴퓨터가 보일 경우
		{
			if (nP == 3)
			{
				if (result)
				{
					cout << "플레이어가 최종 승리했습니다." << endl; // 플레이어가 주도권이 있는 상태에서 이겼을때 구문 출력
					secondIsContinue == false;
				}
				else
				{
					cout << "컴퓨터가 최종 승리했습니다." << endl; // 컴퓨터가 주도권이 있는 상태에서 이겼을때 구문 출력
					secondIsContinue == false;

				}
			}
			else if (nP == 1)
			{
				cout << "주도권이 아직 있습니다 다시 가위바위보 하세요." << endl; // 플레이어에게 주도권이 아직 남아있는경우
			}
			else
			{
				cout << "주도권이 넘어갔습니다 다시 가위바위보 하세요." << endl; //  주도권이 컴퓨터에게로 다시 넘어간 경우
			}
		}

	}

	system("pause");
	return 0;


}
