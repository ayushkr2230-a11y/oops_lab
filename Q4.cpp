```cpp
#include <iostream>
using namespace std;

class Number
{
    int n, rev;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void reverse()
    {
        rev = 0;

        while (n != 0)
        {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        cout << "Reverse = " << rev << endl;
    }
};

int main()
{
    Number obj;

    obj.input();
    obj.reverse();

    return 0;
}
```

**Example Output:**

```text
Enter a number: 12345
Reverse = 54321
```

**Logic:**
`12345 → 5 → 4 → 3 → 2 → 1 → 54321`
