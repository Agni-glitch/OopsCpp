#include <iostream>
#include <cstring>
using namespace std;

class CWH {
protected:
    string title;
    float rating;

public:
    CWH(string s, float r) {
        title = s;
        rating = r;
    }
    // this is a abstruct base class (class having atleast one pure virtual function)
    virtual void display() = 0;  // Pure virtual function
    virtual ~CWH() {}  //do nothing function--> pure virtual function
};

class CWHVideo : public CWH {
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r) {
        videoLength = vl;
    }

    void display(void) {
        cout << "Video title : " << title << endl;
        cout << "Rating out of 5 : " << rating << endl;
        cout << "Video length : " << videoLength << endl;
    }
};

class CWHText : public CWH {
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r) {
        words = wc;
    }

    void display(void) {
        cout << "Text title : " << title << endl;  // Changed this line
        cout << "Rating out of 5 : " << rating << endl;
        cout << "Number of words : " << words << endl;
    }
};

int main() {
    string title;
    float vlen, ratings;
    int words = 890;

    title = "C++ coding tutorial";
    vlen = 4.45;
    ratings = 4.85;

    CWHVideo cppCode(title, ratings, vlen);
    cppCode.display();

    CWHText cppCode2(title, ratings, words);
    cppCode2.display();

    CWH* tuts[2];
    tuts[0] = &cppCode;
    tuts[1] = &cppCode2;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}