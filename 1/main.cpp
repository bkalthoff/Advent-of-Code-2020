#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
size_t len = 200;
int32_t values[200] = {0};

int main() {
        ifstream file("input.txt");
        for (size_t i = 0; i < len; i++) {
                file >> values[i];
        }

        sort(values, values + len);
        int32_t *asc = values;
        int32_t *desc = &values[len - 1];

        while (1) {
                if (*asc + *desc == 2020) {
                        cout << *asc * *desc << endl;
                        break;
                } else if (*asc + *desc < 2020) {
                        asc++;
                } else {
                        desc--;
                }
        }
        return 1;
}