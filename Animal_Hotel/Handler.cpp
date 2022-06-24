#include "Handler.h"
#include "Cat.h"

void Handler::CheckIn()

{
	char name[20]; 
	// char 배열 생성

	int roomNum;

	cout << "당신은 어떤 동물입니까?" << endl;
	cin >> name;
	cout << "호텔 방 번호를 입력하세요." << endl;
	cin >> roomNum;

	if (hotel[roomNum - 1]->getage() != 0)
	{
		cout << "방이 가득 차있습니다." << endl;
		return CheckIn();
	}

	if (strcmp(name, "고양이") == 0)
	{
		char _name[20];
		cout << "이름을 입력하세요." << endl;
		cin >> _name;

		delete hotel[roomNum - 1];
		hotel[roomNum - 1] = new Cat(_name, 3, (char*)"고양이");
		cout << "냥냥 들어옴~" << endl;

	}

	if (strcmp(name, "강아지") == 0)

	{
		char _name[20];
		cout << "이름을 입력하세요." << endl;
		cin >> _name;

		delete hotel[roomNum - 1];
		hotel[roomNum - 1] = new Cat(_name, 3, (char*)"강아지");
		cout << "멍멍 들어옴~" << endl;
	}
}

void Handler::CheckOut()

{
	char name[20];

	int roomNum;

	cout << "당신은 어떤 동물입니까?" << endl;
	cin >> name;
	cout << "호텔 방 번호를 입력하세요." << endl;
	cin >> roomNum;

	if (strcmp(name, hotel[roomNum - 1]->getname()) == 0)
	{
		if (strcmp(hotel[roomNum - 1]->getspecies(), (char*)"고양이") == 0)
			cout << "냥냥 나감~" << endl;

		delete hotel[roomNum - 1];
		hotel[roomNum - 1] = new Animal((char*)"빈방", 0, (char*)"null");
	}

	if (strcmp(name, hotel[roomNum - 1] -> getname()) == 0)
	{ 
		if (strcmp(hotel[roomNum - 1] -> getspecies(), (char*)"강아지") == 0)
		cout << "멍멍 나감~" << endl;

		delete hotel[roomNum - 1];
		hotel[roomNum - 1] = new Animal((char*)"빈방", 0, (char*)"null");
	}

	ViewList();

}

void Handler::ViewList()

{
	for (int i = 0; i < 8; i++)
	{
		cout << i + 1 << "번째 방 : ";
		cout << hotel[i]->getname() << endl;
	}
}

void Handler::ResetRoom()
{
	for (int i = 0; i < 8; i++) {
		hotel[i] = new Animal((char*)"빈방", 0, (char*)"null");
	}
}

void Handler::SelectMenu()
{
	cout << "=====================================================" << endl;
	cout << "||                                                 || " << endl;
	cout << " || 강아지와 고양이를 향한 최고의 시설과 서비스    ||  " << endl;
	cout << "  || The Animal Hotel에 오신 것을 환영합니다.      ||    " << endl;
	cout << "   ||                                              ||     " << endl;
	cout << "=====================================================" << endl;
	cout << "   || 원하시는 서비스 숫자 번호를 입력해주세요.    ||    " << endl;
	cout << "  || 1. 객실 예약                                  ||   " << endl;
	cout << " || 2. 객실 퇴실                                   ||  " << endl;
	cout << "|| 3. 잔여 객실                                    ||  " << endl;
	cout << "|| 4. 종료                                         ||  " << endl;
	cout << "=====================================================" << endl;
}
