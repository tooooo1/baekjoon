#include <iostream>

using namespace std;

int main() {
    int T=3;
    
    while(T--) { //3번 반복
        int flag = 0;
        
        for(int i=0; i<4; i++) {
            int x;
            cin >> x;
            if(x) flag++; 
        }

        switch(flag) {
            case 0:
                cout << "D\n"; //윷
                break;
            case 1:
                cout << "C\n"; //걸
                break;
            case 2:
                cout << "B\n"; //개
                break;
            case 3:
                cout << "A\n"; //도
                break;
            case 4:
                cout << "E\n"; //모
                break;
        }
    }

}