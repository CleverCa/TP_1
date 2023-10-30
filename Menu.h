#pragma once

#include <iostream>
#include <fstream>
#include "Keeper.h"
#include "Orchestra.h"

class Menu //Класс Меню
{
protected:
	Keeper list; //Для хранения данных обьектов
	Orchestra* orchestrs; //Использовать для указателя инструмента(указываем на конкретный обьект)
	string redact;//Вписываем данные, потом редактируем
	int exit = 1;

public:
	void main_menu(); 
	int show_options(); //Отдельная функция для меню
	void show_all_orchestrs(); //Покакзать весь оркестр
	void change_data(); //Изменить данные
	void add_new(); //Добавить новые
	void save_to_file(); //Сохранить файл
	void load_from_file(); //Загрузка из файлв
	void delete_orchestrs(); //Удалить инструмент
	void exit_from_programm(); //Выход
};