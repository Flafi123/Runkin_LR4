#include <functional>
#include <iostream>
#include <map>
#include <string>

using namespace std;

// Функция для ввода числа
// глобальные переменные - стороны прямоугольника
int Q, P;
// функция ввода данных

void calculateRemainder() {
  if (P > 0) {
    int remainder = Q % P;
    cout << "Remainder of Q divided by P: " << remainder << endl;
  } else {
    cout << "Error: P should be greater than 0.\n";
  }
}

void inputP() {}

void inputQ() {}
void calculateQuotient() {
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
      {1, {"Enter integer Q", inputP}},
      {2, {"Enter natural number P (less than Q)", inputQ}},
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