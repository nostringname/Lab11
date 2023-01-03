#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    float count = 0;
    float sum = 0;
    float ok = 0;
    float mean;
    float n;
    string textline;
    ifstream source("score.txt");

    while (getline(source,textline)) {
        n = atof(textline.c_str());
        sum += n;
        ok += n*n;
        count++;
    }
    mean = sum/count;
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sqrt(((1/count)*(ok))-(pow(mean,2)));
    source.close();
    return 0;
}

