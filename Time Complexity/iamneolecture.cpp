#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int target, k;
    std::cin >> target >> k;

    std::vector<int> closestElements;

    for (int i = 0; i < n; i++)
    {
        closestElements.push_back(arr[i]);
    }

    std::sort(closestElements.begin(), closestElements.end(), [target](int a, int b)
              { return std::abs(a - target) < std::abs(b - target); });

    std::cout << "Output: ";
    for (int i = 0; i < k; i++)
    {
        std::cout << closestElements[i] << " ";
    }

    return 0;
}
