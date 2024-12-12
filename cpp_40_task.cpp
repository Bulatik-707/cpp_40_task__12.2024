// # 1 - 1
//Дана  величина Х, выражающая объем информации в байтах. 
//Перевести в биты, килобайты, мегабайты.

#include <iostream>

using namespace std;

int main() {
    double byte, bit, kilobyte, megabyte;

    cout << "Введите a" << endl;
    cin >> byte;
    
    bit = byte * 8;
    kilobyte = byte / 1024;
    megabyte = kilobyte / 1024;

    //cout.setf(ios::fixed); 
    //cout.precision(2); 
    
    cout << byte << " Байт = " << bit << " Бит" << endl;
    cout << byte << " Байт = " << kilobyte << " Килобайт" << endl;
    cout << byte << " Байт =  " << megabyte << " Мегабайт" << endl;

    return 0;
}



//1 -2 Даны два числа. Найти их произведение, разность, 
//  сумму квадратов этих чисел, квадратный корень из произведения.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, proiz, razn, sum, kvkoren;

    cout << "Введите a" << endl;
    cin >> a;
        cout << "Введите b" << endl;
    cin >> b;
    
    cout << " произведение = " << a * b << endl;
    cout << " разность = " << a - b << endl;
    cout << " сумму квадратов =  " << (a + b) * (a + b) << endl;
    cout << " квадратный корень из произведения =  " <<  sqrt(a*b) << endl;

    return 0;
}

// 3 Дан угол α. Найти sin2α, cos α, tg α 
// и вычислить выражение (〖sin〗^3 + x +〖tg〗^2 x)/(√(〖cos〗^4 ) х+1).
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    double a, sin2a, cosa, tga;

    cout << "Введите угол a" << endl;
    cin >> a;

    sin2a = sin(2 * a);
    cosa = cos(a);
    tga = tan(a);

    cout << " sin 2a = " << sin2a << endl;
    cout << " cos a = " << cosa << endl;
    cout << " tg a =  " << tga << endl;
    cout << " (〖sin〗^3 + x +〖tg〗^2 x)/(√(〖cos〗^4 ) х+1) =  " <<  (pow(sin(a), 3) + a + pow(tan(a), 2)) / sqrt(pow((cos(a)), 4)) + 1 << endl;

    return 0;
}

// 4  Вычислить  площадь трапеции, объем шара, полную поверхность конуса, полную поверхность цилиндра. 
//Все необходимые измерения задать самостоятельно.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, h;

    cout << "Вычислить  площадь трапеции \n Введите  a, b, h" << endl;
    cin >> a >> b >> h;

    cout << "Ответ:  " << ((a+b)/2) * h << "\n" << endl;
// объем шара
    cout << "Вычислить объем шара \n Введите  r — радиус шара" << endl;
    double r, pi = 3.14;
    cin >> r;

    cout << "Ответ:  " << (4/3) * (pi * pow(r, 3)) << "\n" << endl;

// полную поверхность конуса
    cout << "Вычислить полную поверхность конуса \n Введите  r, L" << endl;
    double rkon, L;
    cin >> rkon >> L;

    //cout << "Ответ: " << (pi * pow(rkon, 2)) + (pi * rkon * L) << "\n" << endl;
    cout << "Ответ: " << pi * rkon * (rkon + L) << "\n" << endl;

//  полную поверхность цилиндра
    cout << "Вычислить полную поверхность цилиндра \n Введите  r, h" << endl;
    double rsil, hsil;
    cin >> rsil >> hsil; 

    cout << "Ответ:  " << 2 * pi * rsil * (rsil + hsil) << "\n" << endl;
    return 0;
}


//5.Вычислить энергию материальной точки по формуле:W=(2π^2∙A^2∙m)/T^2 ,
// где Т-период колебания равен 2, m-масса равна  0,2, А-амплитуда колебания -ввести с экрана.
#include <iostream>

using namespace std;

int main() {
    double A, T = 2, m = 0.2;

    cout << "Введите A" << endl;
    cin >> A;

    cout << "W = " << (2 * (3.14*3.14) * (A*A) * m) / (T*T) << endl;
    return 0;
}
//6.По заданным значения электрического сопротивления R и напряжения U  вычислить силу тока I  в проводнике по закону Ома.
#include <iostream>

using namespace std;

int main() {
    double I, R, U;

    cout << "Введите R и U" << endl;
    cin >> R >> U;

    cout << "I = " << U / R << endl;
    return 0;
}
//7.Дано значение температуры  в градусах  Фаренгейта. Перевести это значение в градусы Цельсия.
#include <iostream>

using namespace std;

int main() {
    double F;

    cout << "Введите температуру  в градусах  Фаренгейта" << endl;
    cin >> F;

    cout << "Ответ: = " << ((F - 32) * 5 ) / 9 << " C " << endl;
    return 0;
}
//8. Вычислить период колебания пружинного маятника по формуле:
//   T=2π√(m/k), где m-масса,  k =100Н/м-коэффициент упругости.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double m, k = 100;
    cout << "Введите m" << endl;
    cin >> m;
    cout << "T = " << 2 * 3.14 * sqrt(m / k) << endl;
    return 0;
}

//9. Даны три стороны произвольного треугольника. Вычислить площадь  по формуле Герона.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double a, b, c, P;
    cout << "Введите a, b, c" << endl;
    cin >> a >> b >> c;

    P = (a + b + c) / 2;
    cout << "S = " << sqrt(P * (P - a) * (P - b) * (P - c)) << endl;
    return 0;
}
//10. Найти значение функции f(x)=6x^5-lnx^2+sin(x^3)+cos⁡(x) при данном значении x.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double x;
    cout << "Введите x" << endl;
    cin >> x;

    cout << "f(x) = " << 6 * pow(x, 5) - log(x*x) + sin(x*x*x) + cos(x) << endl;
    return 0;
}
//11. Вычислить магнитную энергию контура с токомW=1/2∙L∙I^2 , где L -индуктивность и I-сила тока. Эти значения ввести с экрана.
#include <iostream>
using namespace std;

int main() {
    
    double L, I;
    cout << "Введите L, I" << endl;
    cin >> L >> I;

    cout << "W = " << 0.5 * L * (I*I) << endl;
    return 0;
}
//12. Тело движется по закону S=t^3-3t^2+2.
//Вычислить скорость тела в момент времени  t.Значение t ввести с экрана. (Функция скорости есть производная от функции расстояния по времени).
#include <iostream>
using namespace std;

int main() {
    
    double t;
    cout << "Введите t" << endl;
    cin >> t;

    cout << "S = " << (t*t*t) - 3*(t*t) + 2 << endl;
    return 0;
}
// 13.Ввести координаты точки плоскости (х, у).  Осуществить  переход к полярным координатам (ρ,φ), где ρ=√(x^2+y^2,)   tgφ=y/x    
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int x, y;
    cout << "Введите x, y" << endl;
    cin >> x >> y;

    cout << "p = " << sqrt((x*x) + (y*y)) << endl;
    cout << "q = " << y / x << endl;
    return 0;
}
// 14. В колебательном    контуре емкость конденсатора , индуктивность катушки L=0,04 Гн,   амплитуда напряжения на конденсаторе U=100 B.        . Найти амплитуду силы тока   I=U√(C/L) , полную энергию    W=(LI^2)/2    .
// Указать единицы измерения.    
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double C, L = 0.04, U = 100, I;
    cout << "Введите C" << endl;
    cin >> C;

    I = U * sqrt(C / L);
    cout << "I = " << I << " A" << endl;
    cout << "W = " << (L * (I*I)) / 2 << " мДж " << endl;
    return 0;
}
// 15. Четырехугольник задан координатами вершин.  Вычислить периметр данного четырехугольника. Координаты вершин задать самостоятельно.
#include <cmath> 
#include <iostream> 

struct Point { 
    double x; 
    double y; 
}; 

double distance(Point p1, Point p2) { 
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2)); 
} 

double perimeter(Point a, Point b, Point c, Point d) { 
    return distance(a, b) + distance(b, c) + distance(c, d) + distance(d, a); 
} 

int main() { 
    Point a, b, c, d; 
    std::cout << "Введите координаты вершин четырехугольника (x y):" << std::endl; 
    std::cin >> a.x >> a.y; 
    std::cin >> b.x >> b.y; 
    std::cin >> c.x >> c.y; 
    std::cin >> d.x >> d.y; 

    std::cout << "Периметр четырехугольника: " << perimeter(a, b, c, d) << std::endl; 

    return 0; 
}
// 16. Задан треугольник ABC   длинами сторон. Вычислить все медианы треугольника.  
//Медиана, проведённая к стороне  а вычисляется по формуле 0,5√(2b^2+2c^2-a^2 ). Стороны ввести с экрана.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double a, b, c;
    cout << "Введите длины сторон A, B, C" << endl;
    cin >> a >> b >> c;

    cout << "Медиана а  = " << 0.5 * sqrt((2*b*b) + (2*c*c) - (a*a)) << endl;
    cout << "Медиана b  = " << 0.5 * sqrt((2*a*a) + (2*c*c) - (b*b)) << endl;
    cout << "Медиана c  = " << 0.5 * sqrt((2*a*a) + (2*b*b) - (c*c)) << endl;
    return 0;
}


// 17. Вычислить значение функции y=f(x)  на интервале  [a,b] с шагом  h.                 
// Отрезок должен входить в область определения функции.
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a, b, h;
    cout << "Введите a, b, h" << endl;
    cin >> a >> b >> h;

    for (double x = a; x <= b; x += h) 
        cout << x << "\t" << log(((x*x) - 8) / sqrt(pow(x, 5) + 9)) << endl;
    return 0;
}
// 18.Вычислить рентабельность работы предприятия за месяц по формуле:
// Рентабельность=прибыль/себестоимость*100%, 
//если себестоимость продукции в текущем месяце уменьшилась по сравнению с прошлым на 8%. Значение прибыли и себестоимости за прошлый месяц  ввести самостоятельно.
#include <iostream>
using namespace std;

int main ()
{
    double p, s, R;
    cout << "Введите прибыль и себестоимость за прошлый месяц \n" << endl;
    cin >> p >> s;

     R = (p / s) * 100;
    cout << "Рентабельность = " << R << endl;

    return 0;
}

// 19.  Вычислить значение функции y=f(x)  на интервале  [a,b] с шагом  h . 
//Отрезок должен входить в область определения функции.
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double a, b, h;
    cout << "Введите a, b, h" << endl;
    cin >> a >> b >> h;

    for (double x = a; x <= b; x += h) 
        cout << x << "\t" << pow(sin(x), 5) * pow(log(x) ,2) * x + (1 - pow(x, 3)) / (1 + pow(x, 3)) << endl;
    return 0;
}
// 20. Найти радиусы вписанной r и описанной  R окружности для   
//правильного многоугольника  с числом сторон n и длиной стороны a.
// R=a/(2sin π/n) , r=a/(tg π/n) Значения а и n ввести с экрана.
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double a, n;
    cout << "Введите а и n" << endl;
    cin >> a >> n;

    cout << "R = " << a / (2 * sin((3.14 / n))) << endl;
    cout << "r = " << a / (tan(3.14 / n)) << endl;
    return 0;
}

// ========================================================

// Задания к лабораторной работе №2.

// 1.	Разработать алгоритм  и записать условие , которое является истинным, когда
// а) только одно  из чисел А и В четное;
// б) каждое из чисел А,В,С кратно трем.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите A, B, C" << endl;
    cin >> a >> b >> c;

    if(a % 2 == 0 && b % 2 == 1 || a % 2 == 1 && b % 2 == 0) //(a%2 && !(b%2)) || (!(a%2) && b%2)
        cout << "только одно  из чисел А и В четное" << endl;
    
    else if(a % 3 == 0 && b % 3 == 0 && c % 3 == 0) //(!(a%3) && !(b%3) && !(c%3))
        cout << "каждое из чисел А,В,С кратно трем" << endl;
    
    
    return 0;
}

// 2.  Разработать алгоритм  и записать условие, которое  является истинным, когда 
//       а)  целое N  кратно 7 или 9
//        б) целое N  кратно 5 и не оканчивается нулем
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите N" << endl;
    cin >> n;

    if(n % 7 == 0 || n % 9 == 0 ) 
    {
        cout << "N  кратно 7 или 9" << endl;
    }
    else if(n % 5 == 0 && n % 10 != 0)
    {
        cout << "N  кратно 5 и не оканчивается нулем" << endl; 
    }
    else cout << "Error";
    return 0;
}
// 3. Разработать алгоритм и написать программу для расчёта суммы выплаты по депозиту на вклад до 5000000  рублей  20% , более- 22%.
#include <iostream>
using namespace std;

int main() {
    int s;
    cout << "Введите вклад" << endl;
    cin >> s;

    if(s <= 5000000 ) 
    {
        cout << "суммы выплаты = " << s * 20 / 100 << endl;
    }
    else 
    {
        cout << "суммы выплаты = " << s * 22 / 100 << endl; 
    }
    return 0;
}
// 4. Разработать алгоритм проверки на чётность четырех чисел A,B,C,D.
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Введите A, B, C, D" << endl;
    cin >> a >> b >> c >> d;

    if(a % 2 == 0) cout << "четное число: " << a << endl;

    if (b % 2 == 0) cout << "четное число: " << b << endl;
    
    if (c % 2 == 0) cout << "четное число: " << c << endl;
    
    if (d % 2 == 0) cout << "четное число: " << d << endl;
    
    else cout << "НЕТ четных чисел!" << endl;
    
    return 0;
}
// 5. Рассчитать значение функции с учётом области существования  z= 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cout << "Введите x, y" << endl;
    cin >> x >> y;

    cout << "z = " << sqrt((x * y) / (1 + x)) << endl;
    
    return 0;
}
// 6. Разработать алгоритм и написать программу для расчёта надбавки за стаж. Если стаж от 5 до 10 лет надбавка составляет 2%, если стаж от 10 до 20 лет-10%, свыше 20 лет -15%.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите стаж " << endl;
    cin >> a;

    if(a  >= 5 && a < 10) cout << "надбавка = 2 %" << endl;

    else if (a >= 10 && a < 20) cout << "надбавка =  10 %" << endl;
    
    else if (a >= 20) cout << "надбавка =  15 %" << endl;
    
    else cout << "НЕТ надбавки!" << endl;
    
    return 0;
}
// 7. Дано квадратное уравнение  вида  ax^2+bx+c=0. Найти корни уравнения . Коэффициенты a,b,c задать самостоятельно.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double D, a, b, c;
    cout << "Введите A, B, C" << endl;
    cin >> a >> b >> c;

    D = b * b - 4 * a* c; 

    cout << "Дискриминант = " << D << endl;
    if (D < 0) {
        cout << "Дискриминант меньше нуля. Корней нет." << endl;
    } else if (D == 0) {
        cout << "Дискриминант равен нулю. Уравнение имеет один корень." << endl;
        cout << "x = " << -b / (2 * a) << endl;
    } else {
        cout << "Дискриминант больше нуля. Уравнение имеет два корня." << endl;
        cout << "x1 = " << (-b + sqrt(D)) / (2 * a)<< ", x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
    }

    return 0;
}
// 8. Вычислить значение функции у, заданной интервально
// y={(cos⁡x,x>10@√(x-5),x<8)┤
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cout << "Введите X" << endl;
    cin >> x;

    if(x > 10) cout << "y =  " << cos(x) << endl;

    else if (x < 8) cout << "y = " << sqrt((x - 5)) << endl;
    
    else cout << "НЕ правильный x!" << endl;
    
    return 0;
}

// 9. Даны три числа a,b,c.  Разработать алгоритм и написать программу проверки возможности построения треугольника по трем сторонам a,b,c.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите A, B, C" << endl;
    cin >> a >> b >> c;

    if( a == b && b == c && a == c) cout << "Равнобедренный треугольник" << endl;

    else if (a == b && b == c) cout << "Равносторонний треугольник"<< endl;
    
    else if (a != b && a != c && b != c) cout << "Разносторонний треугольник" << endl;
    
    else cout << "Треугольник не существует" << endl;
    
    return 0;
}
// 10. Дано четырехзначное число. Вычислить сумму  его цифр  и проверить на кратность 7. 
//Определить равна сумма двух певых цифр сумме двух последних.
#include <iostream>
using namespace std;

int main() {
    int x, s1, s2, s3, s4, sum;
    cout << "Введите четырехзначное число" << endl;
    cin >> x;

    if(x >= 1000 && x <= 9999){
        
       // int sum1 = 0, sum2 = 0;
        //for (int i = 1; i <= 4; i++)
        //{
        //    sum1 += (x % 10) * (i < 3 ? 1 : -1);
        //    sum2 += x % 10;
        //    x /= 10;
        //}
        
        s1 = x / 1000;
        s2 = x % 1000 / 100;
        s3 =x % 100 / 10;
        s4 = x % 10;
        
        sum = s1 + s2 + s3 + s4;
        cout << "сумму  его цифр = " << sum << endl;
        
        if (sum % 7 == 0) cout << "сумма кратно 7" << endl;
        else cout << "сумма Не кратно 7" << endl;
        
        if(s1 + s2 == s3 + s4) cout << "сумма двух певых цифр = сумме двух последних" << endl;
        else cout << "сумма двух певых цифр НЕ = сумме двух последних" << endl;
    } 
    else cout << "Введите четырехзначное число !!!" << endl;
    
    return 0;
}
// 11. Дано трехзначное число. Определить:
// а) является произведение его цифр меньше самого числа;
// б) кратна ли 5 сумма цифр данного числа.
#include <iostream>
using namespace std;

int main() {
    int x, s1, s2, s3, sum, pro;
    cout << "Введите трехзначное число" << endl;
    cin >> x;

    if(x >= 100 && x <= 999){
        
       // int sum1 = 0, sum2 = 0;
        //for (int i = 1; i <= 4; i++)
        //{
        //    sum1 += (x % 10) * (i < 3 ? 1 : -1);
        //    sum2 += x % 10;
        //    x /= 10;
        //}
        
        s1 = x / 100;
        s2 = x % 100 / 10;
        s3 = x % 10;
        
        sum = s1 + s2 + s3;
        pro = s1 * s2 * s3;

        if( pro < x) cout << "произведение его цифр меньше самого числа" << endl;
        else cout << "произведение его цифр НЕ меньше самого числа" << endl;

        if (sum % 5 == 0) cout << "сумма цифр кратна 5" << endl;
        else cout << "сумма цифр Не кратна  5" << endl; 
    } 
    else cout << "Введите трехзначное число !!!" << endl;
    
    return 0;
}
// 12. Ввести с клавиатуры координаты числа А( x,y). Определить попадает эта точка в область,  ограниченную линиями y=x; y=-x; y=1.
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Введите x, y" << endl;
    cin >> x >> y;

    if(y == x || y == -x || y == 1) cout << "попадает" << endl;
    else cout << "НЕТ" << endl;
    
    return 0;
}
// 13.  Ввести с клавиатуры координаты числа А( x,y). Определить попадает эта точка в область,  ограниченной окружностью, заданной уравнением(〖x-3)〗^2+(y-2)=1. Ответ выведете в виде сообщения.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введите x, y" << endl;
    cin >> x >> y;

    if( pow((x - 3), 2) + (y - 2) <= 1) cout << "попадает" << endl;
    else cout << "НЕТ" << endl;
    
    return 0;
}
// 14. Рейтинг бакалавра заочного отделения при поступлении в магистратуру определяется следующим образом: средний балл по диплому умножается  на коэффициент стажа работы по специальности, который равен: 1- нет стажа; меньше 3 лет -10; от 3 до 5 лет-15. Составить программу вычисления рейтинга  при заданном  среднем балле диплома (от 3 до 5) и вывести сообщение о приёме в магистратуру при проходном балле 45.
#include <iostream>
using namespace std;

int main() {

    float avg_ball, rating; // средний балл диплома.  рейтинг бакалавра 
    int stazs; // стаж работы по специальности 

    cout << "Введите средний балл диплома (от 3 до 5): " << endl; 
    cin >> avg_ball; 
    while(avg_ball < 3 || avg_ball > 5) {
        cout<<"Некорректное значение. Введите средний балл диплома (от 3 до 5): " << endl; 
        cin>>avg_ball; 
    } 

    cout << "Введите стаж работы по специальности (в годах): " << endl; 
    cin >> stazs; 
    if (stazs < 2) { 
        rating = avg_ball * 13; 
    } else if (stazs >= 2 && stazs <= 5) { 
        rating = avg_ball * 16; 
    } else { 
        rating = avg_ball; 
    } 
    std::cout << "Рейтинг бакалавра: " << rating << endl; 
    if (rating >= 45) { 
        std::cout << "Вы можете поступить в магистратуру." << endl; 
    } else { 
        std::cout << "К сожалению, ваш рейтинг не достаточен для поступления в магистратуру." << endl; 
    } 
    
    return 0;
}
// 15. Даны целочисленные координаты  трех вершин прямоугольника, стороны которого параллельны координатным осям. Найти координаты четвертой вершины.
#include <iostream>
using namespace std;

int main() {
    int  x1, x2, x3, x4, y1, y2, y3, y4;

    cout << "Введите координаты x1, y1: ";
    cin >> x1 >> y1;

    cout << "Введите координаты  x2, y2: ";
    cin >> x2 >> y2;

    cout << "Введите координаты  x3, y3: ";
    cin >> x3 >> y3;
    
    if (x1 == x2) x4 = x3;
    else if (x1 == x3) x4 = x2;
    else x4 = x1;

    if (y1 == y2) y4 = y3;
    else if (y1 == y3) y4 = y2;
    else y4 = y1;
    
    cout << "координаты четвертой вершины: " << x4 << " ; " << y4 << endl;
    
    return 0;
}
// 16.  Определить является ли шестизначное число «счастливым» 
//(сумма первых трёх цифр равна сумме  трёх последних).
#include <iostream>
using namespace std;

int main() {
    int x, sum1 = 0, sum2 = 0;
    cout << "Введите шестизначное число" << endl;
    cin >> x;

    if(x >= 100000 && x <= 999999){
        
        for (int i = 1; i <= 3; i++) {
        sum1 += x % 10;
        x = x / 10;
        }

        for (int i = 1; i <= 3; i++) {
            sum2 += x % 10;
            x = x / 10;
        }
        if (sum1 == sum2) cout << "число счастливое !!!" << endl;
        else cout << "число НЕ счастливое" << endl;
    } 
    else cout << "Введите шестизначное число !!!" << endl;
    
    return 0;
}
// 17.Даны вещественные положительные числа a,b,c,x,y. Выяснить, пройдёт ли кирпич размером a×b×c  в отверстие   x×y при параллельном или  перпендикулярном расположении ребер кирпича сторонам отверстия.
#include <iostream>
using namespace std;

int main() {
    int a, b, c, x, y;
    cout << "Введите размер кирпича a, b, c :" << endl;
    cin >> a >> b >> c;
    cout << "Введите размер ответствия x, y :" << endl;
    cin >> x >> y;


    if (a <= x && b <= y) cout << "кирпич пройдёт параллельно" << endl;
    
    else if (a <= y && b <= x) cout << "кирпич пройдёт перпендикулярно" << endl;
    
    else cout << "кирпич НЕ пройдёт!";
    
    return 0;
}
// 18. Рассчитать значение функции с учётом области существования  z=√((ln x)/(ln y)) .
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cout << "Введите x, y" << endl;
    cin >> x >> y;

    cout << "z = " << sqrt(log(x) / log(y)) << endl;

    return 0;
}
// 19. Дано трехзначное число. Определить:
// а) является произведение его цифр больше самого числа;
// б) кратна ли 7 сумма цифр данного числа.
#include <iostream>
using namespace std;

int main() {
    int x, s1, s2, s3, sum, pro;
    cout << "Введите трехзначное число" << endl;
    cin >> x;

    if(x >= 100 && x <= 999){
                
        s1 = x / 100;
        s2 = x % 100 / 10;
        s3 = x % 10;
        
        sum = s1 + s2 + s3;
        pro = s1 * s2 * s3;

        if( pro > x) cout << "произведение его цифр больше самого числа" << endl;
        else cout << "произведение его цифр НЕ больше самого числа" << endl;

        if (sum % 7 == 0) cout << "сумма цифр кратна 7" << endl;
        else cout << "сумма цифр Не кратна  7" << endl; 
    } 
    else cout << "Введите трехзначное число !!!" << endl;
    
    return 0;
}

// 20. Ввести с клавиатуры координаты числа А( x,y). Определить попадает эта точка в область,  ограниченную линиями y=x; y=-x; y=2.
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Введите x, y" << endl;
    cin >> x >> y;

    if(y == x || y == -x || y == 2) cout << "попадает" << endl;
    else cout << "НЕТ" << endl;
    
    return 0;
}