// dz7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//FP_urok_08.pdf ���������� ������� �� ����. 16 �������� ������� ���������� ��������.

//#include <iostream>
//#include <string>
//#include <time.h>
//using namespace std;
//// ����������� ������
//void ShowArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
///* ���������� ����� �������� ������� �����������
//������� �� ����� �� ��������� ������, ����
//�������� ������, �� ����������� �������� �������,
//��� ����� � ������� �����������
//*/
//void InitArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        arr[i] = rand() % 100;
//    }
//    cout << endl;
//}
//int main()
//{
//    srand(time(NULL));
//    const int aSize = 10;
//    int iArr[aSize];
//    InitArray(iArr, aSize);
//    ShowArray(iArr, aSize);
//    return 0;
//}

//FP_urok_09 ���������� �������� �� ����. 8 - 9

//#include <iostream>
//using namespace std;
//long max_element(int n, int array[])
//// ������� ��� ������ � ���������� ���� int.
//{
//    int value = array[0];
//    for (int i = 1; i < n; i++)
//        value = value > array[i] ? value : array[i];
//    cout << "\nFor (int) : "; return long(value);
//}
//long max_element(int n, long array[])
//// ������� ��� ������ � ���������� ���� long.
//{
//    long value = array[0];
//    for (int i = 1; i < n; i++)
//        value = value > array[i] ? value : array[i];
//    cout << "\nFor (long) :";
//    return value;
//}
//double max_element(int n, float array[])
//// ������� ��� ������ � ���������� ���� float.
//{
//    float value = array[0];
//    for (int i = 1; i < n; i++)
//        value = value > array[i] ? value : array[i];
//    cout << "\nFor (float) : ";
//    return double(value);
//}
//double max_element(int n, double array[])
//// ������� ��� ������ � ���������� ���� double.
//{
//    double value = array[0];
//    for (int i = 1; i < n; i++)
//        value = value > array[i] ? value : array[i];
//    cout << "\nFor (double) : ";
//    return value;
//}
//int main()
//{
//    int x[] = { 10, 20, 30, 40, 50, 60 };
//    long f[] = { 12L, 44L, 5L, 22L, 37L, 30L };
//    float y[] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6 };
//    double z[] = { 0.01, 0.02, 0.03, 0.04, 0.05, 0.06 };
//    cout << "max_elem(6,x) = " << max_element(6, x);
//    cout << "max_elem(6,f) = " << max_element(6, f);
//    cout << "max_elem(6,y) = " << max_element(6, y);
//    cout << "max elem(6,z) = " << max_element(6, z);
//    return 0;
//}

//FP_urok_09 ���������� ������� �� ���� 14

//template <typename T>
//T Max(T A, T B)
//{
//    return A > B ? A : B;
//
//    std::cout << "Max from 10 and 5 = " << Max(10, 5) << "\n";
//    std::cout << "Max from 'A' and 'B' = " << Max('A', 'B') << "\n";
//    std::cout << "Max from 3.5 and 5.1 = " << Max(3.5, 5.1) << "\n";
//}

//FP_urok_10 ���������� ������� �� ����. 17 - 18

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
template <class T>
void setMin(T a[], long size) {
    T min = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] < min)
            min = a[i];
    a[0] = min;
}
template <class T>
void insertSortGuarded(T a[], long size) {
    T x;
    long i, j;
    // �������� ������ ������ �������
    T backup = a[0];
    // ������� �� ���������
    setMin(a, size);
    // ���������� �����
    for (i = 1; i < size; i++) {
        � = a[i];
        for (j = i - 1; a[j] > x; j--)
            a[j + 1] = a[j];
        a[j + 1] = x;
    }
    // �������� backup �� ��������� ����
    for (j = 1; j < size && a[j] < backup; j++)
        a[j - 1] = a[j];
    // ������� ��������
    a[j - 1] = backup;
}
int main() {
    srand(time(NULL));
    const long SIZE = 10;
    int ar[SIZE];
    // �� ����������
    for (int i = 0; i < SIZE; i++) {
        ar[i] = rand() % 100;
        cout << ar[i] << "\t";
    }
    cout << "\n\n";
    insertSortGuarded(ar, SIZE);
    // ���� ����������
    for (int i = 0; i < SIZE; i++) {
        cout << ar[i] << "\t";
    }
    cout << "\n\n";
    return 0;
}


//2.	������� ��������� SmoothArray(arr[], SIZE), �� ������ ������������ ������ arr ������ SIZE ����� ����� :
//�	������� ������� �� ���������,
//�	������� arr�(K = 0, ..., SIZE) ���������� �� ������ �������� �������� arr�  �� arr� + 1 .
//�� ��������� ���� ��������� �������� �'��������� ������������ ������ ������ � ������ N, �������� ���������� ������� ������������.


//#include <iostream>
//using namespace std;
//
//template <typename T>
//void smoothArray(T arr[], const int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        arr[i] = (arr[i] + arr[i + 1]) / 2;
//    }
//}
//
//template <typename T>
//void printArray(T arr[], const int size) {
//    cout << "[";
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i];
//        if (i < size - 1) {
//            cout << ", ";
//        }
//    }
//    std::cout << "]\n";
//}
//
//int main() {
//    const int N = 5;
//    int arr[N] = { 1, 2, 3, 4, 5 };

   /* cout << "Original array: ";
    printArray(arr, N);

    for (int i = 1; i <= 5; ++i) {
        cout << "After smoothing " << i << " time(s): ";
        smoothArray(arr, N);
        printArray(arr, N);
    }

    return 0;
}*/

//3.	������ ������ ����������� �������� ������, ������ �� ����� ����� m.

//#include <iostream>
//using namespace std;
//template <typename T>
//double averageMoreM(T arr[], const int size, T m) {
//    double sum = 0;
//    int count = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] > m) {
//            sum += arr[i];
//            count++;
//        }
//    }
//    if (count == 0) {
//        cerr << "No elements greater than " << m << " found in the array.\n";
//        return 0;
//    }
//    return sum / count;
//}
//
//int main() {
//    const int N = 5;
//    int arr[N] = { 1, 2, 3, 4, 5 };
//    int m = 2;
//
//    double avg = averageMoreM(arr, N, m);
//    cout << "Average of elements greater than " << m << " is: " << avg << endl;
//
//    return 0;
//}

//4.	�������� ������������ ������� ������� ��� ����������� ������ �������(a * x + b = 0) � �����������(a * x2 + b * x + c = 0) ������.����������: � ������� ����������� ����������� ������.

//#include <iostream>
//#include <cmath>
//#include <locale>
//using namespace std;
//template <typename T>
//void solveLinear(T a, T b) {
//    if (a == 0) {
//        if (b == 0)
//            cout << "Bagato koreniv" << endl;
//        else
//            cout << "Ne mae koreniv" << endl;
//    }
//    else {
//        T x = -b / a;
//        cout << "Korin rivniannia: " << x << endl;
//    }
//}
//
//template <typename T>
//void solveQuadratic(T a, T b, T c) {
//    if (a == 0) {
//        solveLinear(b, c);
//    }
//    else {
//        T discriminant = b * b - 4 * a * c;
//        if (discriminant > 0) {
//            T x1 = (-b + sqrt(discriminant)) / (2 * a);
//            T x2 = (-b - sqrt(discriminant)) / (2 * a);
//            cout << "Dva koreni rivniania: " << x1 << " � " << x2 << endl;
//        }
//        else if (discriminant == 0) {
//            T x = -b / (2 * a);
//            cout << "Odyn korin rivniania: " << x << endl;
//        }
//        else {
//            cout << "Rivniania ne mae koreniv" << endl;
//        }
//    }
//}
//
//int main() {
//    solveLinear(2.0, 3.0); // ������� ������� �������
//    solveQuadratic(1.0, -3.0, 2.0); // ������� ����������� �������
//    return 0;
//}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
