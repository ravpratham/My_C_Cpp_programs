#include <iostream>
#include <string>
using namespace std;

class IPL{
    protected:
        string teamName;
        string teamCaptain;
        string teamBatters;
        string teamBowlers;
        string teamAllRounders;
        string teamWicketKeepers;

    public:
        IPL(string tN, string tC, string tBat, string tBall, string tAR, string tWK){
            teamName = tN;
            teamCaptain = tC;
            teamBatters = tBat;
            teamBowlers = tBall;
            teamAllRounders = tAR;
            teamWicketKeepers = tWK;
        }

};
class CSK:public IPL{};
class MI:public IPL{};
class RCB:public IPL{};
class KKR:public IPL{};
class SRH:public IPL{};
class DC:public IPL{};
class PBKS:public IPL{};
class RR:public IPL{};
class GT:public IPL{};
class LSG:public IPL{};


int main(){
    
}