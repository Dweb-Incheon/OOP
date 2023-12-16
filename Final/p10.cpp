#include <iostream>
using namespace std;
class Uni {
private:
    string _name;
    int _score;
public:
    class ScoreEx {
    public:
        string _reason;
        ScoreEx(string reason): _reason(reason){}
    };
    Uni(string name, int score){ 
        if(score < 0) throw ScoreEx("^^");
        if(name.length() > 4) throw ScoreEx("--");
        _name = name;
        _score = score;
    }
};

int main() {
    try {
        Uni uni_1("lee", -10);
    }
    catch(Uni::ScoreEx ex) { 
        cout << ex._reason << endl;
    }
    try {
        Uni uni_2("choi_uni", 90);
    }
    catch(Uni::ScoreEx ex) {
        cout << ex._reason << endl;
    }
    return 0;
}
