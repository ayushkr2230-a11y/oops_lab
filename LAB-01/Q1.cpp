```cpp
#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    void input()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculate()
    {
        float area = 3.14159 * radius * radius;
        float circumference = 2 * 3.14159 * radius;

        cout << "Area = " << area << endl;
        cout << "Circumference = " << circumference << endl;
    }
};

int main()
{
    Circle c;

    c.input();
    c.calculate();

    return 0;
}
```

### Example Output

```text
Enter radius: 5
Area = 78.5397
Circumference = 31.4159
```

**OOP concepts used:**

* `class Circle` → creates a class
* `radius` → data member
* `input()` and `calculate()` → member functions
* `Circle c` → creates an object
* `c.input()` / `c.calculate()` → calls the member functions
