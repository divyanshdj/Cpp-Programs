#include <iostream>
using namespace std;

class TeamLeader{
    public:
        void oldCode(){
            cout<<"Mere pass pura purana code h"<<endl;
        }
};

class FrontEndDeveloper : public TeamLeader{
    public:
    void frontend(){
        cout<<"M pura frontend smbhal lunga"<<endl;
    }
};

class BackendDevelopr : public TeamLeader{
    public:
    void backend(){
        cout<<"m backEnd ka pura code smbhal lunga"<<endl;
    }
};

int main(){
    // TeamLeader t;
    // t.oldCode();
    // cout<<endl;

    FrontEndDeveloper fd;

    BackendDevelopr bd;

    fd.oldCode();
    fd.frontend();
    cout<<endl;
    bd.oldCode();
    bd.backend();

    return 0;
}