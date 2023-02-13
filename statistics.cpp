#include <iostream>
#include "statistics.h"
#include <cmath>
using namespace std;

Statistics::Statistics(double aa, double aw)
{
    arithmeticAverage = aa;
    arithmeticWeighted = aw;
}
Statistics::~Statistics();
Statistics::Statistics(const Statistics & fStatistics)
{
    arithmeticAverage = new double;
    arithmeticWeighted = new double;
    *arithmeticAverage= *fStatistics.arithmeticAverage;
    *arithmeticWeighted = *fSequence.arithmeticWeighted;
}

Statistics::setArithmeticAverage(double aa)
{
    arithmeticAverge = aa;
}
Statistics::getArithmeticAverage()
{
    return arithmeticAverge;
}
Statistics::setAverageWeighted(double aw)
{
    averageWeighted = aw;
}
Statistics::getAverageWeighted()
{
    return averageWeighted;
}

Statistics::calcArithmeticAverage()
{

}
Statistics::calcArithmeticWeighted()
{

}
Statistics::calcHarmonicSeries()
{
    
}