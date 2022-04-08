
#include <iostream>
class Fraction {
public:
    Fraction(int _numeration, int _denumenator) {
        if (_denumenator == 0) {
            throw  std::runtime_error("Rintime error");
        }
    }
private:
    int numeration;
    int denumerator;
};


int main()
{
    int first_number;
    int second_number;

    std::cout << "Enter first integer number\n";

    try {

        if (!(std::cin >> first_number)) {

            throw(std::exception("Error! Wrong data!"));

        }
        if (!(std::cin >> second_number)) {

            throw(std::exception("Error! Wrong data!"));

        }

        Fraction fraction = Fraction(first_number, second_number);
    }
    catch (std::exception ex) {

        std::cout << ex.what();

    }
    catch (std::runtime_error runtimeError) {

        std::cout << runtimeError.what();

    }
}
