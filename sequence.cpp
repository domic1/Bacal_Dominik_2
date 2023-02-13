#include <iostream>
#include "sequence.h"
#include <cmath>
using namespace std;

Sequence::Sequence(int w, int h, string c)
{
    width w;
    height = h;
    color = c;
}

Sequence::~Sequence()
{

}

Sequence::Sequence(const Sequence & fSequence)
{
    width = new int;
    height = new int;
    color = new string;
    *width = *fSequence.width;
    *height = *fSequence.height;
    *color = *fSequence.color;
}

Sequence::getWidth()
{
    return width;
}
Sequence::setWidth(int w)
{
    width = w;
}
Sequence::getHeight()
{
    return height;
}
Sequence::setHeight(int h)
{
    height = h;
}
Sequence::getColor()
{
    return color;
}
Sequence::setColor(string c)
{
    color = c;
}
Sequence::calcSimpleIntegral()
{
    /**
        Funkcja bazuje w oprarciu o wzór
       \f$ \int\frac{1}{\sqrt{x^2 - a^2}}dx = ln|x+\sqrt{x^2-a^2}|+C \f$

    */
}
Sequence::calcComplexIntegral()
{
    /**
        Funkcja bazuje w oparciu o wzory \n
        \f$ \int\frac{dx}{x\sqrt{x^2-1}} = -cosec^{-1}x+C \f$ \n
        \f$ \int sin^2 x dx = \int\frac{1-cos2x}{2} dx \f$
    */

}
Sequence::heightOfEquTriangle(int a)
{
    //! wysokość trójkąta o boku a to \f$h=\frac{a\times\sqrt3}{2} \f$
    float h = (a*sqrt(3))/2;
    return h;
}
Sequence::sin(double x) {

    /**
        funkcja oblicza sinus danego kąta na podstawie
        kąta podanego w stopniach kątowych
        \param[in] x - kąt w stopniach kątowych

        <table>
            <tr><th>Radiany<th>Wartość sin</th><th>Stopnie</th></tr>
            <tr><td>\f$\frac{Π}{2}\f$</td><td>1</td><td>90</td></tr>
            <tr><td>\f$\frac{Π}{3}\f$</td><td> \f$\frac{\sqrt{3}}{2}\f$ </td><td>60</td></tr>
            <tr><td>\f$\frac{Π}{4}\f$</td><td>\f$\frac{\sqrt{2}}{2}\f$</td><td>45</td></tr>
            <tr><td>\f$\frac{Π}{6}\f$</td><td>\f$\frac{1}{2}\f$</td><td>30</td></tr>
            <tr><td>0</td><td>0</td><td>0</td></tr>
        </table>

        Jeśli wykres nie działa należy w doxygenie w image path dodać ścieżke img

        | Wykres Sinusa |
        | :---- |
        | \image html sinus.bmp |
    */
}
Sequence::cos(double x)
{
    /**
        funkcja oblicza cosinus danego kąta na podstawie
        kąta podanego w stopniach kątowych
        \param[in] x - kąt w stopniach kątowych

        <table>
            <tr><th>Radiany<th>Wartość cosinus</th><th>Stopnie</th></tr>
            <tr><td>\f$\frac{Π}{2}\f$</td><td>0</td><td>90</td></tr>
            <tr><td>\f$\frac{Π}{3}\f$</td><td> \f$\frac{1}{2}\f$ </td><td>60</td></tr>
            <tr><td>\f$\frac{Π}{4}\f$</td><td>\f$\frac{\sqrt{2}}{2}\f$</td><td>45</td></tr>
            <tr><td>\f$\frac{Π}{6}\f$</td><td>\f$\frac{\sqrt{3}}{2}\f$</td><td>30</td></tr>
            <tr><td>0</td><td>0</td><td>0</td></tr>
        </table>

        Jeśli wykres nie działa należy w doxygenie w image path dodać ścieżke img

        | Wykres cosinusa |
        | :---- |
        | \image html cosinus.jpg |
    */


}
