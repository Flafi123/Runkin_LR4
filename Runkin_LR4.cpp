#include <functional>
#include <iostream>
#include <map>
#include <string>

using namespace std;

bool isValidNumber(const string &input) {
  if (input.empty())
    return false; // Пустая строка не является корректным числом
  for (char c : input) {
    if (!isdigit(c) && c != '-')
      return false; // Разрешаем отрицательные числа
  }
  return true;
}

// Функция для ввода числа
// глобальные переменные - стороны прямоугольника
int sidel, side2;
// функция ввода данных
function<void()> EnterNumber(int &varLink, string label) {
  // разрабатывается Сидоровым С. - ветка branch_fun_1
  return 0;
}

void CalcArea() {
  // разрабатывается Петровым П. - ветка branch_fun_2
}
void CalcPerim() {
  // разрабатывается Васильевым В. - ветка branch_fun_3
}
// структра меню
struct MenuItem {
  string title;
  function<void()> action;
};
string title;
int main() {
  map<int, MenuItem> menu = {
      {1,
       {"Input 1st side of rectangle", EnterNumber(sidel, "Input 1st side")}},
      {2,
       {"Input 2nd side of rectangle", EnterNumber(side2, "Input 2nd side")}},
      {3, {"Calculate of Area", CalcArea}},
      {4, {"Calculate of Perimeter", CalcPerim}},
  };
  int choice = 0;
  //
  while (true) {
    cout << "Menu: " << endl;
    for (const auto &item : menu) {
      cout << "Task " << item.first << ". " << item.second.title << endl;
    }
    cout << "0. Exit" << std::endl;
    cout << "Enter the number of the task: ";
    cin >> choice;
    //
    if (choice == 0) {
      cout << "  2025 FirstName LastName" << endl;
      break;
    }
    cout << endl;
    if (menu.find(choice) != menu.end()) {
      menu[choice].action();
    } else {
      cout << " .";
    }
    cout << endl;
  }
  return 0;
}
