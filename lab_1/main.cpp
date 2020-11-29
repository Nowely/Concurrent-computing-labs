#include <iostream>
#include "omp.h"
#include "lcg_generator.h"

using namespace std;

int main() {

    LCG lcg(2147483648, 1103515245, 12345, 12345);

    for (int i = 0; i < 100; i++) {
        cout << lcg.Next() << endl;
    }

    /*int value = 123;
#pragma omp parallel
    {
        value++;
#pragma omp critical
        {
            std::cout << value++ << std::endl;
        }
    }

    int id;
#pragma omp parallel private(id)
    {
        id = omp_get_thread_num();
        printf("%d: Hello World!\n", id);
    }*/
    return 0;
}

