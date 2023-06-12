#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class IntegerSequence
{
public:
    virtual vector<int> Numbers() = 0;
};

class VectorSequence : public IntegerSequence
{
private:
    vector<int>sequence;
public:
    VectorSequence(vector<int> numbers) : sequence(numbers){};
    vector<int>Numbers() override
    {
        return sequence;
    }
};


class PositiveSequence : public IntegerSequence
{
private:
    IntegerSequence* sequence;
public:
    PositiveSequence(IntegerSequence* seq) : sequence(seq){}
    vector<int>Numbers() override
    {
        vector<int>number = sequence -> Numbers();
        erase_if(number, [](int i) {return i < 0;});
        return number;

    }
};

class EvenNumbers :public IntegerSequence {
protected:
    IntegerSequence* sequence;
public:
    EvenNumbers(IntegerSequence* seq) : sequence(seq) {};
    std::vector<int> Numbers() override {
        std::vector<int> number = sequence->Numbers();
        std::erase_if(number, [](int i) {return i % 2 != 0; });
        return number;
    }
};

class SortedSequence :public IntegerSequence {
protected:
    IntegerSequence* sequence;
public:
    SortedSequence(IntegerSequence* seq) : sequence(seq) {};
    std::vector<int> Numbers() override {
        std::vector<int> number = sequence->Numbers();
        sort(number.begin(), number.end());
        return number;
    }
};

int main()
{
    vector<int> setNumbers;

    for (int i = 15; i > -16; i--)
    {
        setNumbers.push_back(i);
    }

    cout << "Sequence: ";
    for(int i : setNumbers)
    {
        cout << i << " ";
    }
    cout << "\n";

    IntegerSequence * seq1 = new VectorSequence(setNumbers);

    IntegerSequence * seq2 = new PositiveSequence(
            new SortedSequence(
                    new EvenNumbers(seq1)));

    setNumbers = seq2->Numbers();
    cout << "Sequence after transformation: ";
    for(int i : setNumbers)
    {
        cout << i << " ";
    }
}
