#include <iostream>
#include <string.h>
#include <string>
#include <clocale>
using namespace std;

int dlina1(char*p){  //метод 1 определения длины входной строки
    int i = 0;
    while(*p++) i++;
    return i;

};
int dlina2(char*p){  //метод 2 определения длины входной строки
    char *q = p;
    while (*q++);
    return q-p-1;

};
int dlina3(char*p){   //метод 3 определения длины входной строки
    int i = 0;
    while (p[i]!= '\0')i++;
    return i;
};

char * kopir(char*str1, char*str2){  //метод копирования строк
    string string1 = string(str1); //переводим входной массив str1 в строковый тип
    string string2 = string (str2);  //переводим входной массив str2 в строковый тип

    string1.clear();   //очищаем строку 1 для копирования в неё строки 2
    string1.append(string2);  //переносим (копируем) строку 2 в строку 1
    cout << string1;
}

int sravn(char*str1, char*str2){  //метод сравнения входных строк
    int count1 = 0;  //счётчик длины первой входной строки
    int count2 = 0;  //счётчик длины второй входной строки
    for(int i = 0; i <= str1[i]; i++){   //подсчёт длины первой строки
        count1++;
    }

    for(int i = 0; i <= str2[i]; i++){  //подсчёт длины второй строки
        count2++;
    }

    if(count1 == count2) return 0;
    if(count1 > count2) return 1;
    if(count1 < count2) return -1;
}

int concat(char*str1, char*str2){  //метод склеивания строк
    string string1 = string(str1);
    string string2 = string (str2);
    cout << string1.append(string2); //добавляем вторую строку в конец первой
}

int main() {

    setlocale(LC_CTYPE,"Russian");

    const char *word = "Hey, You! Hello!";

    char result[255]{};
    char wordOne[255] = "Hey, You! ";
    char wordTwo[255] = "Hello!";

    dlina1(wordOne);
    dlina2(wordTwo);
    dlina3(result);

    int lengthWord = strlen(word);  //определяем длину слова
    cout << lengthWord << "\n";  //выводим длину слова

    strcat(result,wordOne);
    strcat(result,wordTwo);

    cout << result << "\n";   //выводим склеиную строку

    char one[255]{};
    char two[10]= "Text";

    strcpy(one,two);
    cout << one << "\n";    //выводим скопированное значение

    cout << strcmp(wordTwo,wordOne) << endl;  //функция сравнения
    //если строки равны, выведет 0,
    // если первая больше второй - вывод положительного числа, если наоборот - отрицательное


    char str1[255]{};
    char str2[] = "1234567890";

    cout << kopir(str1,str2);
    cout << "\n";

    char strSravn1[] = "Hello!";
    char strSravn2[] = "Privet!";

    cout << sravn(strSravn1,strSravn2) << endl; //метод сравнения
    //если строки равны, выведет 0,
    // если первая больше второй - вывод положительного числа, если наоборот - отрицательное

    concat(strSravn1,strSravn2);  //метод конкатенации строк
    cout << "\n";



    char *stringOther1 = (char *) malloc(100); //задаём строки через динамическую память
    char *stringOther2 = (char *) malloc(100); //задаём строки через динамическую память

    cout << "Input the characters for the first line: ";
    cin >> stringOther1;
    cout << "\n";
    cout << "Input the characters for the second line: ";
    cin >> stringOther2;
    cout << "\n";

    cout << "String after copy: ";
    cout << kopir(stringOther1,stringOther2);
    cout << "\n";

    cout << "String after compare: ";
    cout << sravn(stringOther1,stringOther2);
    cout << "\n";


    cout << "String after compound: ";
    concat(stringOther1,stringOther2);
    cout << "\n";

    free(stringOther1);
    free(stringOther2);

    cout << "Enter the number of elements: ";
    int size;
    cin >> size;
    cout << "\n";



    char *stringOther3 = (char *)calloc(size, sizeof(char)); //задаём строки через динамическую память
    char *stringOther4 = (char *)calloc(size,sizeof(char )); //задаём строки через динамическую память

    cout << ("Input nums for String 1: ");
    for (int ix = 0; ix < size; ix++)                 // в цикле заполняем массив с клавиатуры
    {
        cin >> stringOther3[ix];
    }

    cout << "\n";

    cout << ("Input nums for String 2: ");
    for (int ix = 0; ix < size; ix++)                 // в цикле заполняем массив с клавиатуры
    {
        cin >> stringOther4[ix];
    }

    cout << "\n";

    cout << "String after copy: ";
    cout << kopir(stringOther3,stringOther4);
    cout << "\n";

    cout << "String after compare: ";
    cout << sravn(stringOther3,stringOther4);
    cout << "\n";

    cout << "String after compound: ";
    concat(stringOther3,stringOther4);
    cout << "\n";

    free(stringOther3);
    free(stringOther4);

}
