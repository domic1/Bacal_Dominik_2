#define __SEQUENCE_H__

class Sequence
{
    private:
        //!\brief zmienna przechowująca szerokość obiektu
        int width;
        //!\brief zmienna przechowująca wysokość obiektu
        int height;
        //!\brief zmienna przechowująca kolor obiektu
        string color;

    public:
        //!\brief konstruktor domyślny
        Sequence(int=100, int =25, string = "red");
        //!\brief destruktor
        ~Sequence();
        //!\brief konstruktor kopiujący
        Sequence(const Sequence & fSequence);
        //!\brief funkcja zwracająca szerokość obiektu
        int getWidth();
        //!\brief funkcja pozwalająca ustawić szerokość obiektu
        void setWidth(int);
        //!\brief funkcja zwracająca wysokość obiektu
        int getHeight();
        //!\brief funkcja pozwalająca ustawić wysokość obiektu
        void setHeight(int);
        //!\brief funkcja zwracająca kolor obiektu
        string getColor();
        //!\brief funkcja pozwalająca ustawić kolor obiektu
        void setColor(string);
        //!\brief funkcja obliczająca silnię danej liczby
        double calcSimpleIntegral();
        //!\brief funkcja obliczająca skomplikowaną całkę
        double calcComplexIntegral();
        //!\brief funkcja obliczająca wysokość trójkąta równobocznego na podstawie długości ramienia
        double heightOfEquTriangle();
        //!\brief funkcja obliczająca sinus danego kąta
        double sin(double);
        //!\brief funkcja obliczająca cosinus danego kąta
        double cos(double);
};