#include <iostream>
using namespace std;
// Anonymous union: A union that is not declared with a tag that is called an anonymous union.
struct book2
{
    char title[50] = "C++ programming";
    char author[50] = "Bjarne Stroustrup";
    union // Anonymous union
    {
        int dollars;
        int yen;
    } price;
};

int main()
{
    book2 myBook;
    cout << "Book Title: " << myBook.title << endl;
    cout << "Book Author: " << myBook.author << endl;
    cout << "Price in dollars: " << myBook.price.dollars << endl;
    cout << "Price in Yen: " << myBook.price.yen << endl;
    return 0;
}