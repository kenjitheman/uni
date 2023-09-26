## Defective Cakes Production Line

The Defective Cakes Production Line is a system that produces cakes using
automated machinery. During a production cycle, several cakes are made, each
with a target standard weight, and they are weighed before packing. If a cake's
weight deviates beyond a specified tolerance, it is considered defective.

- Determine the total length of the work cycle for producing N cakes and display
  it in the format "H hours X minutes."
- Calculate the total number of defective cakes.
- Calculate the average weight of the non-defective cakes.
- Determine in which half of the line's operation cycle (first or second) there
  was more shortage.

- Follow the on-screen prompts to input the necessary data, such as the number
  of cakes (N), standard weight (W), maximum deviation (D), and cake production
  times (T).

- The script will calculate and display the total cycle time, the number of
  defective cakes, the average weight of non-defective cakes, and which half of
  the operation cycle had more shortages.

## Implementation

Can be implemented in two versions:

- one with the use of a one-dimensional array and another without it. The choice
  of implementation is up to the developer's discretion.

### Original "explanation":

#### Задача «Браковані тортики»

- За один цикл роботи автоматизованій лінії з виробництва тортів виготовляється
  N тортів за однією і тою ж технологічною картою. Нормативна вага торту\*
  відповідно до технологічної карти складає W. На виготовлення одного торту
  конвеєром витрачається не більше, ніж T хвилин \*\* (конкретний час виготовлення
  торту може відрізнятись та залежить від показників датчиків конвеєру, які
  фіксують завершення кожної стадії процесу).
- Перед пакуванням торту виконується зважування виробу. Реальна вага торту може
  відрізнятися від нормативної. Максимально допустиме відхилення від нормативної
  ваги складає ±D\*\*. Якщо в результаті зважування виявлено відхилення, що
  перевищує максимально допустиме, такий торт вважається браком.
- Визначити загальну довжину робочого циклу роботи лінії для виготовлення N
  тортів та вивести у форматі «Г годин Х хвилин».
- Визначити загальну кількість бракованих тортів та розрахувати середню вагу тих
  тортів, що виявилися небракованими.
- Визначити, в яку половину циклу роботи лінії (в першу чи другу) було більше
  браку.
- Одиницю вимірювання ваги визначити на власний розсуд.
- Зверніть увагу на обмеження предметної галузі, що можуть накладатися на вхідні
  дані задачі (типи даних, діапазони допустимих даних)
- 3адачу реалізувати у двох варіантах – із використанням одновимірного масиву та
  без нього!
