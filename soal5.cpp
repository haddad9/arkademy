#include <iostream>

using namespace std;

int evenSum(int batas)
{
    if (batas < 2)
        return 0;

    int fibo_genap1 = 0;
    int fibo_genap2 = 2;
    int sum = fibo_genap1 + fibo_genap2;


    while (fibo_genap2 <= batas)
    {

        int fibo_genap3 = 4*fibo_genap2 + fibo_genap1;
        if (fibo_genap3 > batas)
            break;

        fibo_genap1 = fibo_genap2;
        fibo_genap2 = fibo_genap3;
        sum += fibo_genap2;
    }

    return sum;
}

int main()
{
    cout << evenSum(100)<<endl;
    cout << evenSum(1000);

    return 0;
}
