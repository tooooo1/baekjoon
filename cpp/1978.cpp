#include <iostream>

using namespace std;

int main() {
    int N;
    bool flag=true;
    int count=0;
    int count__=0;
    
    cin>>N;

    int input[N];

    for (int i = 0; i < N; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 2; j <= input[i]; j++)
        {
            if(input[i]%j==0) {
                count__++;
                if(input[i]==j) {
                    if(count__==1) {
                        flag=false;
                        count__=0;
                    }else count__=0;
                }
                
            }
        }

        if(!flag) {
            count++;
            flag=true;
        }
        
    }

    cout<<count;


}