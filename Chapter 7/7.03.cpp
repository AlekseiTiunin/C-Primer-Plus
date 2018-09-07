//box.cpp
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void box_display(box);
void box_volume(box *);

int main()
{
    box best_box;
    cout << "Enter maker of box: ";
    cin.getline(best_box.maker, 40);
    cout << "Enter height of box: ";
    cin >> best_box.height;
    cout << "Enter width of box: ";
    cin >> best_box.width;
    cout << "Enter length of box: ";
    cin >> best_box.length;
    box_volume(&best_box);
    box_display(best_box);

    cout << "Program end." << endl;

    return 0;
}

void box_volume(box * pbox)
{
    pbox->volume = pbox->height * pbox->length * pbox->width;
}

void box_display(box box)
{
    cout << "Maker: " << box.maker << endl;
    cout << "Height = " << box.height << " width = "
         << box.width << " lenght = " << box.length << endl;
    cout << "Volume = " << box.volume << endl;
}
