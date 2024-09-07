#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

void delay(void){
	int delay;
	delay=1;
	while(delay<10000000){
		delay++;
	}
}

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void tls(){
	// t atas
	for(int i=0; i<=10; i++){
		gotoxy(i, 5);
		cout<<"#";
		delay();
	}
	// t bawah
	for(int i=5; i<=15; i++){
		gotoxy(5, i);
		cout<<"#";
		delay();
	}
	// l tegak
	for(int i=5; i<=15; i++){
		gotoxy(15, i);
		cout<<"#";
		delay();
	}
	//l mendatar
	for(int i=15; i<=25; i++){
		gotoxy(i, 15);
		cout<<"#";
		delay();
	}
	// s atas
	for(int i=40; i>=30; i--){
		gotoxy(i, 5);
		cout<<"#";
		delay();
	}
	//s tegak 1
	for(int i=6; i<=10; i++){
		gotoxy(30, i);
		cout<<"#";
		delay();
	}
	// s tengah
	for(int i=30; i<=40; i++){
		gotoxy(i, 10);
		cout<<"#";
		delay();
	}
	//s tegak 2
	for(int i=10; i<=15; i++){
		gotoxy(40, i);
		cout<<"#";
		delay();
	}
	// s bawah
	for(int i=40; i>=30; i--){
		gotoxy(i, 15);
		cout<<"#";
		delay();
	}
}

int main(){
	string nama;
	bool jwb;
	cout<<"Hai, salam kenal! Siapa nama kamu?\n";
	getline(cin, nama);
	system("cls");
	cout<<nama<<" apakah kamu ingin memberi ucapan?\n";
	cout<<" Ketik 1 = Ya || Ketik 0 = Tidak\n";
	cin>>jwb;
	if(jwb){
		system("cls");
		cout<<" Saya, "<<nama<<" ingin bilang sesuatu nich\n";
		cout<<" Ayo ucapin tagline TLS\n";
		tls();
		cout<<"\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"2024\n";
		cout<<"\n";
		cout<<"Unravel The Mystery, Reveal Your Journey";
	}
}
