#pragma once
#include<iostream>
#include<string>
using namespace std;
class Grangpa
{
	string name = "Ivan";
public:
	virtual void Sleep() {
		cout << "Grangpa  " << name << "  is sleeping" << endl;
    }
};


class Daddy :public Grangpa {
public:
	 void Sleep() override 
	 { 
		 cout << "Sleep Daddy" << endl;
	 };
	virtual void Walk() {
		cout << "Walk Daddy" << endl;
	};
};
class Son :public Daddy {
public:
	Son() = default;
   void Sleep()override {
	   cout << "Sleep Son" << endl;
   };
   void Walk() override{
	   cout << "Walk Son" << endl;
   };
   virtual void Play() {
   
	   cout << "Play Son" << endl;
   };

};


/*	o	Клас Grandpa  має віртуальну функцію Sleep(), яка виводить повідомлення  виду ‘Grandpa Ivan is sleeping`
	o	Класи Daddy(похідний від Granpa) та  Son(похідний від Daddy) мають віртуальні функції  Walk() та перевизначають віртуальну функцію Sleep()
	o	Клас Son має віртуальну функцію Play().

	Визначити глобальну функцію, яка отримує вектор вказівників на об’єкти базового класу Grandpa та для кожного об’єкту викликає максимально можливий  набір віртуальних методів.Наприклад, для об’єкту класу Daddy повинні викликатися методи Sleep() та Walk().
	Розв’язати задачу двома способами
	o	використати операцію dynamic_cast <>.
	o	використати операцію typeid() та static_cast.

	Зобразити таблиці віртуальних функцій для класів згідно завдання.
	Показати схематично, яким чином під час виконання програми виконується пошук відповідного віртуального методу.
	Наприклад, для Daddy * s = new Son(....); s->sleep();*/