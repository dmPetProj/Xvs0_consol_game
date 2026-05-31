# **Крестики-нолики**
Классическая игра с полем 3x3 в консоли персонального компьютера! C++ 17 и выше.

## Фичи

- игра между двумя людьми за одним компьютером
- игра между ботом и человеком
- игра между ботами
- поддержка кастомных ботов

## Как создать бота?
Ваш бот должен наследовататься от класса `Abstract_bot` следующим образом:
```
class Bot : public Abstract_bot {

    public:

        Bot(const FieldValues color);

        int make_move (const Board& board) const noexcept override;

};

```
Переопределение метода make_move в вашем классе **обязательно**. Выходным значением из этого метода ожидается целое число в диапазоне [0, 8].
Конструктор вашшего класса должен вызывать родительский констрктор с параметром. Пример:
```
Bot::Bot(const FieldValues color) :
/* конструктор с параметром задающим цвет игроку */
    Abstract_bot(color)
    {}
```
Полный пример рабочего бота находится в коде проекта [можно посмотреть здесь](https://github.com/dmPetProj/Xvs0_consol_game/blob/main/src/players/bot.h)

Далее необходимо поместить имя вашего бота в `Matchmaker.cpp` где нужно будет поменять тип вызываемого бота на созданный вами тип
```
std::array<std::unique_ptr<Abstract_player>, 2> Matchmaker::make_BvsP() {
/* игрок против бота */
        return make<Player, Bot>(); <-- здесь вместо Bot имя вашего класса
}

std::array<std::unique_ptr<Abstract_player>, 2> Matchmaker::make_2bots() {
/* бот против бота */
        return make<Bot, Bot>(); <-- здесь вместо Bot имя вашего класса
}
```
