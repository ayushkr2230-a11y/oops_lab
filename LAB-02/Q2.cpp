```cpp
#include <iostream>
using namespace std;

class Palindrome
{
    int n, original, rev;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void check()
    {
        original = n;
        rev = 0;

        while (n != 0)
        {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        if (rev == original)
            cout << original << " is a Palindrome number." << endl;
        else
            cout << original << " is not a Palindrome number." << endl;
    }
};

int main()
{
    Palindrome obj;

    obj.input();
    obj.check();

    return 0;
}
```

**Example Output:**

```text
Enter a number: 121
121 is a Palindrome number.
```

**Logic:**
`121 → Reverse = 121` → **Palindrome** ✅
