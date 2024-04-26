#include <iostream>
#include <string>

struct Manga {
    std::string title;
    std::string author;
    double rating;

    void display() {
        std::cout << "+ title: \n\t- " << title << "\n+ author: \n\t- " << author << "\n+ rating: \n\t- " << rating << std::endl;
    };

    void rate(int num) { rating = num; }
};

void inputMangaDetails(Manga &manga) {
    std::cout << "+ title: ";
    std::getline(std::cin >> std::ws, manga.title);

    std::cout << "+ author: ";
    std::getline(std::cin >> std::ws, manga.author);

    std::cout << "+ rating: ";
    std::cin >> manga.rating;
}

int main() {
    Manga MyManga;

    inputMangaDetails(MyManga);

    std::cout << "+ manga info:\n";
    MyManga.display();

    return 0;
}
