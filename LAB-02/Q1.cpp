```cpp
#include <iostream>
using namespace std;

class Armstrong
{
    int n, original, sum;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void check()
    {
        original = n;
        sum = 0;

        while (n != 0)
        {
            int digit = n % 10;
            sum = sum + digit * digit * digit;
            n = n / 10;
        }

        if (sum == original)
            cout << original << " is an Armstrong number." << endl;
        else
            cout << original << " is not an Armstrong number." << endl;
    }
};

int main()
{
    Armstrong obj;

    obj.input();
    obj.check();

    return 0;
}
```

**Example Output:**

```text
Enter a number: 153
153 is an Armstrong number.
```

Because:

**153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153** ✅
