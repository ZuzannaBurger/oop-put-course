#include <iostream>
#include <sstream>
#include <memory>
#include <cassert>


using namespace std;

class Sequence {
public:
    virtual int Length() = 0;
    class Fake;
};

class Sequence::Fake : public Sequence{
public:
    int Length() override {return 100; }
};

class Gene {
private:
    string name_;
    shared_ptr<Sequence> seq_;
public:
    Gene(string name, shared_ptr<Sequence> seq) : seq_(seq), name_(name) {};

    string JSON() const
    {
        stringstream ss;
        ss << "{";
        ss << "\"name\": \"" << name_ << "\", ";
        ss << "\"length\": "<< seq_->Length();
        ss << "}";

        return ss.str();
    }
};



int main()
{
    shared_ptr<Sequence::Fake> fakeSeq = make_shared<Sequence::Fake>();

    Gene gene("BAST5", fakeSeq);
    cout << gene.JSON();
    
    return 0;
}
