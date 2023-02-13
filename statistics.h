#define __STATISTICS_H__

class Statistics
{
    /** \page Doxygen Doxygen
        for more info see
        <a href="https://doxygen.nl/manual/autolink.html">Doxygen</a>
        \page IBM IBM
        for more info see
        <a href="https://www.ibm.com/docs/pl/spss-statistics/saas?topic=expressions-statistical-functions">IBM</a>

    */

    /*! \mainpage Dokumentacja na potrzeby egzaminu
    *
    * \section intro_sec Wprowadzanie
    *
    * Ta dokumentacja powstała z wykorzystaniem oprogramowania
      Doxygen w wersji 1.9.5 na potrzeby zaliczenia przedmiotu
      zarządzanie przedsięwzięciami informatycznymi
    *
    * \section Zawartość
    *
    * \subsection sequence
       klasa sequence składa się z plików o rozszerzeniach .h i .cpp
       zawiera konstruktor domyślny, konstruktor kopiujący,
       destruktor, funkcje dostępu do składowych, funkcje obliczeniowe
       wysokości trójkąta, całek.
      \subsection statistics
       klasa sequence składa się z plików o rozszerzeniach .h i .cpp
       zawiera konstruktor domyślny, konstruktor kopiujący,
       destruktor, funkcje dostępu do składowych, funkcje obliczeniowe
       średniej arytmetycznej i średniej ważonej
    *
    * etc...
    */

    private:
        //!\brief składowa przechowująca średnią arytmetyczną
        double arithmeticAverage();
        //!\brief składowa przechowująca średnią ważoną 
        double averageWeighted();

    public:
        //!\brief konstruktor domyślny
        Statistics(double = 0, double = 0);
        //!\brief destruktor
        ~Statistics();
        //!\brief konstruktor kopiujący
        Statistics(const Statistics & fStatistics);

        //!\brief metoda pozwalająca zwrócić wartość średniej arytmetycznej obiektu
        double getArithmeticAverage();
        //!\brief metoda pozwalająca zmienić wartość średniej arytmetycznej obiektu
        void setArithmeticAverage(double);
        //!\brief funkcja pozwalająca zwrócić wartość średniej ważonej obiektu
        double getArithmeticWeighted();
        //!\brief funkcja pozwalająca zmienić wartość średniej ważonej obiektu
        void setArithmeticWeighted(double);

          
        /**
            \brief metoda obliczająca średnią arytmetyczną

            calcArithmeticAverage jest funkcją, która oblicza średnią ustalonej liczby obiektów
            dowolnego typu, które można dodawać i dzielić. Dane wejściowe to tablica wartości,
            a dane wyjściowe to średnia arytmetyczna tych wartości. Funkcja używa pętli for
            do sumowania elementów w tablicy, a następnie dzieli sumę przez liczbę elementów,
            aby uzyskać średnią.
            Średnią arytmetyczną oblicza się ze wzoru \f$ a = \frac{\sum_{i=1}^n}{n} \f$

        */
        double calcArithmeticAverage();

        /** \brief metoda obliczająca średnią ważoną kilku wartości

            calcAverageWeighted funkcją, który oblicza średnią ważoną ustalonej
            liczby obiektów dowolnego typu, które można pomnożyć i dodać.
            Dane wejściowe to dwie tablice: jedna dla wartości i jedna dla wag.
            Wynikiem jest średnia ważona tych wartości.
            Funkcja używa dwóch pętli for do sumowania iloczynów wartości i wag oraz samych wag.
            Następnie dzieli sumę produktów przez sumę wag, aby uzyskać średnią ważoną.

            Średnią ważoną oblicza się ze wzoru: \f$  X_w = \frac{\sum_{i=1}^n w_i x_i}{\sum_{i=1}^n w_i} \f$

        */
        //!\brief 
        double calcArithmeticWeighted();
        //!\funckja obliczająca wartość ciągu harmonicznego
        double calcHarmonicSeries();
};
