#include <iostream>

using namespace std;

int F, S, G, U, D;
bool flag=true;


int main() {
    cin >> F >> S >> G >> U >> D;
    int x=0,y=0, cnt=0;

    while(true) {
        if((D==0 &&S>G) || (U==0 && S<G)) {
            flag=false;
            break;
        }
        if(U*x-D*y+S>F) {
            x--;
            y++;
            cnt++;
        } else {
            if(U*x-D*y+S>G)
                y++;
            else if(U*x-D*y+S<G)
                x++;
            else if(U*x-D*y+S==G)
                break;
        }

        if(cnt>10) {
            flag=false;
            break;
        }
        
    }

    if(flag) cout << x+y;
    else cout << "use the stairs";  
}