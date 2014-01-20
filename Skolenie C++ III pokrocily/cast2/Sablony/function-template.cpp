#import <iostream>
using namespace std;

template<class T>
double GetAverage(T tArray[], int nElements) // jeden typ je sablonovy, jeden je predefinovany
{
    T tSum = T(); // tSum = 0, zavolanie defaultneho konstruktora pre tento typ - int(), float()

    for (int nIndex = 0; nIndex < nElements; ++nIndex)
    {
        tSum += tArray[nIndex];
    }

    // Whatever type of T is, convert to double
    return double(tSum) / nElements;
}
  

int main()
{
    int  IntArray[5] = {100, 200, 400, 500, 1000};
    float FloatArray[3] = { 1.55f, 5.44f, 12.36f};

    cout << GetAverage(IntArray, 5) << " ";
    cout << GetAverage(FloatArray, 3);
}