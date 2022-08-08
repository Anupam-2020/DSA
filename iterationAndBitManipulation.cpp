#include <bits/stdc++.h>

using namespace std;

void fibonacciSeries()
{
    int n, firstNumber = 0, secondNumber = 1, l;
    cin >> n;
    cout << firstNumber << " " << secondNumber << " ";
    for (int i = 0; i < n; i++)
    {
        l = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = l;
        cout << l << " ";
    }
}

void primeNumber()
{
    int n, flag = 0;
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime No.";
    }
    else
    {
        cout << "Composite No.";
    }
}

void differenceOfSumAndProductOfDigitsOfANumber()
{
    int n, sum = 0, product = 1;
    cin >> n;
    int temp = n;
    while (temp)
    {
        int digit = temp % 10;
        temp = temp / 10;
        sum = sum + digit;
        product = product * digit;
    }

    cout << product - sum;
}

void hammingWeightProblem()
{
    int count = 0;
    uint32_t n;
    cin >> n;
    while (n)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
}

void decimalToBinary()
{
    int n, digit = 0, counter = 0;
    cin >> n;

    while (n)
    {
        digit = digit + (n & 1) * (pow(10, counter));
        counter++;
        n = n >> 1;
    }
    cout << digit;
}

void decimalToBinarySecondApproach()
{
    int n, digit = 0, counter = 0;
    cin >> n;

    while (n)
    {
        digit = digit + (n % 2) * (pow(10, counter));
        n = n / 2;
        counter++;
    }
    cout << digit;
}

void decimalToBinaryIncludingNegativeNumbers()
{
    int n;
    cin >> n;
    int i = 31;
    int arr[32] = {0};
    if (n > 0)
    {
        while ((i) || (n))
        {
            arr[i] = n % 2;
            i--;
            n = n / 2;
        }
    }

    else
    {
        int x, counter = 0;
        x = abs(n);
        while (i >= 0)
        {
            if (x)
            {
                arr[i] = x % 2;
            }

            if ((counter == 0 && arr[i] == 1))
            {
                counter++;
                i--;
                x = x / 2;
                continue;
            }

            if (counter)
            {
                if (arr[i] == 1)
                {
                    arr[i] = 0;
                }

                else
                {
                    arr[i] = 1;
                }
            }
            i--;
            x = x / 2;
        }
    }

    for (int i = 0; i < 32; i++)
    {
        cout << arr[i] << " ";
    }
}

void binaryToDecimal()
{
    int n, digit, result = 0;
    cin >> n;
    int i = 0;
    while (n)
    {
        digit = n % 10;
        result = result + digit * pow(2, i);
        i++;
        n = n / 10;
    }

    cout << result;
}

void reverseInteger()
{
    int n, result = 0;
    cin >> n;
    while (n)
    {
        int digit = n % 10;
        if ((result > INT_MAX / 10) || (result < INT_MIN / 10))
        {
            result = 0;
            break;
        }
        result = result * 10 + digit;
        n = n / 10;
    }

    cout << result;
}

void bitwiseComplement()
{
    // example1 => input-5  ->  output-2.
    // example2 => input-7 -> output-0.
    int n;
    cin >> n;
    int mask = 0;
    int m = n;
    if (n == 0)
    {
        cout << 1;
    }
    else
    {
        while (m)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int answer = (mask) & (~n);
        cout << answer;
    }
}

void powerOfTwo() { // to find if the given no. can be represented as power of 2 or not.
    int n;
    cin>>n;
    int answer = 1;
    int flag = 0;
    for(int i = 0; i <= 30; i++) {
        if(answer == n) {
            flag = 1;
            break;
        }
        if(answer < INT16_MAX/2) // edge case.
        answer = answer * 2;
    }
    if(flag == 1) {
        cout<<"True";
    }
    else cout<<"false";
}


void powerOfTwoOptimisedApproach() {
    int n;
    cin>>n;

    if(((n)&(n-1)) == 0) {
        cout<<"true";
    }
    else cout<<"false";
}



int main()
{
    // fibonacciSeries();
    // primeNumber();
    // differenceOfSumAndProductOfDigitsOfANumber();
    // hammingWeightProblem();
    // decimalToBinary();
    // decimalToBinarySecondApproach();
    // decimalToBinaryIncludingNegativeNumbers();
    // binaryToDecimal();
    // reverseInteger();
    // bitwiseComplement();
    // powerOfTwo();
    // powerOfTwoOptimisedApproach()
}
