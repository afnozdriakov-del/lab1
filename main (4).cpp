
#include <iostream>

int main()
{   std::cout << "Перша задача..." << std::endl;
    std::cout << "Begin26" << std::endl;
    //Швидкість човна в стоячій воді V км / год, швидкість течії річки U км / год 
    //(U < V). Час руху човна по озеру T1 ч, а по річці (проти течії) - T2 ч. Визначити
    //шлях S, пройдений човном (шлях = час · швидкість). Врахувати, що при русі
    //проти течії швидкість човна зменшується на величину швидкості течії."
    //Begin26

    double V, U, T1, T2;
    
    std::cout << "Введіть швидкість човна у стоячій воді (V): ";
    std::cin >> V;
    std::cout << "Введіть швидкість течії річки (U): ";
    std::cin >> U;
    std::cout << "Введіть час руху по озеру (T1): ";
    std::cin >> T1;
    std::cout << "Введіть час руху проти течії (T2): ";
    std::cin >> T2;

    if (U >= V) {
        std::cout << "Помилка: швидкість течії повинна бути меншою за швидкість човна!" << std::endl;
        return 1;
    }

    double S1 = V * T1;          // шлях по озеру
    double S2 = (V - U) * T2;    // шлях проти течії
    double S = S1 + S2;          // загальний шлях

    std::cout << "Загальний шлях човна: " << S << " км" << std::endl;
    
    
    std::cout << "..." << std::endl;
    std::cout << " " << std::endl;
    
    std::cout << "Друга задача..." << std::endl;
     std::cout << "Begin17" << std::endl;
    std::cout << "Знайти значення функції y = 4 (x-3) 6 - 7 (x-3) 3 + 2 при даному значенні x." << std::endl;

    //Begin17
    double x;
    std::cout << "Введіть значення x: ";
    std::cin >> x;

    double t = x - 3;       // винесемо (x-3) в окрему змінну
    double t3 = t * t * t;  // (x-3)^3
    double t6 = t3 * t3;    // (x-3)^6

    double y = 4 * t6 - 7 * t3 + 2;

    std::cout << "Значення функції y = " << y << std::endl;
    
    
    std::cout << "..." << std::endl;
    std::cout << " " << std::endl;
    
    std::cout << "Третя задача..." << std::endl;
    std::cout << "Begin35" << std::endl;
    std::cout << "Дано три числа. Знайти суму їх квадратів: a2 + b2 + c2." << std::endl;
    
    double a, b, c;
    std::cout << "Введіть (a): ";
    std::cin >> a;
    std::cout << "Введіть (b): ";
    std::cin >> b;
    std::cout << "Введіть (c): ";
    std::cin >> c;
    
     double K = a*a+b*b+c*c;
     
     std::cout << "Сума квадратів: " << K << std::endl;
    

    return 0;
}