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

void calculateRemainder() {
  // разрабатывается Петровым П. - ветка branch_fun_2
}
void calculateQuotient() {
  if (P > 0) {
    int quotient = Q / P;
    cout << "Integer part of Q divided by P: " << quotient << endl;
  } else {
    cout << "Error: P should be greater than 0.\n";
  }
}
// структра меню
struct MenuItem {
  string title;
  function<void()> action;
};
string title;
int main() {
  map<int, MenuItem> menu = {
      {1, {"Enter integer Q", EnterNumber(sidel, "Enter integer Q")}},
      {2,
       {"Enter natural number P (less than Q)",
        EnterNumber(side2, "Enter natural number P (less than Q)")}},
      {3, {"Calculate remainder of Q divided by P", calculateRemainder}},
      {4, {"Calculate integer part of Q divided by P", calculateQuotient}},
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
