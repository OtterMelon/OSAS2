// 구현된 기능 없음, 컴파일만 되게 제출합니다.

#include <iostream>
#include <thread>
#include <windows.h>// Sleep()

using namespace std;
void worker();
void worker() {
    for (int i= 0; i< 10; ++i) {
        Sleep(1000);
        cout<< i<< endl;
    }
}

int main() {
    thread t1(worker);
    t1.join();
    printf("===end of main()===\n");
    return 0;
}