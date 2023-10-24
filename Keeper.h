#pragma once

#include "Orchestra.h"

using namespace std;
using namespace std;

class Keeper
{
private:
	int size = 0; //Хранит количество обьектов в списке(лист)
	El* head = NULL; //Какой следующий элемент будет(указывает)

public:
	Keeper(); //Конструктор без парметров
	Keeper(int size); //Уже с параметром
	~Keeper(); //Деконструктор

	Orchestra* operator[] (int id); //Перегрузка операторов(для удобства)

	int get_size(); //Давать данные(Возвращать значения количетву обьектов в этом списке, возвращает количество))
	void insert(Orchestra* new_data); //Включает данные, которые были заданы(записывает данные)
	void remove(int id); //Удаление данных
	void save(); //Сохраняет файл в файл
	void load(); //Загрузка из файла
};