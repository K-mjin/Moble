#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <conio.h>  // _getch()
#include <ctime>

using namespace std;
using namespace std::chrono;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    cout << "=== 반응 속도 측정 게임 ===\n";
    cout << "준비되면 Enter 키를 누르세요...";
    cin.ignore();  // 사용자 입력 대기

    // 무작위 대기 시간 (1 ~ 5초)
    int waitTime = rand() % 5 + 1;
    cout << "준비...\n";

    this_thread::sleep_for(seconds(waitTime));  // 랜덤 대기

    cout << "\n💥 지금! 아무 키나 누르세요!\n";

    // 측정 시작 시간
    auto start = high_resolution_clock::now();

    // 사용자 키 입력 대기
    _getch();

    // 측정 종료 시간
    auto end = high_resolution_clock::now();

    // 반응 시간 계산
    auto duration = duration_cast<milliseconds>(end - start).count();

    cout << "\n⏱️ 당신의 반응 속도는 " << duration << " ms 입니다!\n";

    // 등급 판단 (선택)
    if (duration < 200)
        cout << "⚡ 반응 속도 최고예요!";
    else if (duration < 400)
        cout << "👍 꽤 빠르네요!";
    else
        cout << "🐢 조금 느려요! 다시 도전해보세요.";

    return 0;
}



