```cpp
#include <iostream>
using namespace std;

class Number
{
    int n, sum;

public:
    void input()
    {
        cout << "Enter a 3-digit number: ";
        cin >> n;
    }

    void calculate()
    {
        int a, b, c;

        a = n / 100;        // Hundreds digit
        b = (n / 10) % 10;  // Tens digit
        c = n % 10;         // Units digit

        sum = a + b + c;

        cout << "Sum of digits = " << sum << endl;
    }
};

int main()
{
    Number obj;

    obj.input();
    obj.calculate();

    return 0;
}
```

**Example:**

```text
Enter a 3-digit number: 456
Sum of digits = 15
```

The logic is:

* Hundreds digit → `n / 100`
* Tens digit → `(n / 10) % 10`
* Units digit → `n % 10`
* Sum → `a + b + c`



