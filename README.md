# Prosoft-Test — тестовое задание, Школа разработчиков «Прософт-Системы»

Решения 5 задач LeetCode на C++ для вступительного тестового задания.

**LeetCode профиль:** https://leetcode.com/u/zxffg456/

## Структура репозитория

```
.
├── easy/     - 2 задачи уровня Easy   (README.md - разбор подходов)
├── medium/   - 2 задачи уровня Medium (README.md - разбор подходов)
└── hard/     - 1 задача уровня Hard   (README.md - разбор подхода)
```

## Задачи

- **[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)** - Easy · [код](easy/0020-valid-parentheses.cpp) · [разбор](easy/README.md#0020---valid-parentheses) · время O(n), память O(n)
- **[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)** - Easy · [код](easy/0121-best-time.cpp) · [разбор](easy/README.md#0121---best-time-to-buy-and-sell-stock) · время O(n), память O(1)
- **[Rotate Image](https://leetcode.com/problems/rotate-image/)** - Medium · [код](medium/0048-rotate-image.cpp) · [разбор](medium/README.md#0048-rotate-image) · время O(n²), память O(1)
- **[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)** - Medium · [код](medium/0003-longest-substring-without-repeating-characters.cpp) · [разбор](medium/README.md#0003-longest-substring-without-repeating-characters) · время O(n), память O(1)
- **[Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)** - Hard · [код](hard/0042-trapping-rain-water.cpp) · [разбор](hard/README.md#0042-trapping-rain-water) · время O(n), память O(1)

## Сборка и запуск.

Каждое решение — самостоятельный .cpp файл, компилируется отдельно.

Linux:
```bash
g++ -std=c++17 -O2 easy/0020-valid-parentheses.cpp -o solution
./solution
```
macOS:
```bash
# если компилятор ещё не установлен
xcode-select --install

clang++ -std=c++17 -O2 easy/0020-valid-parentheses.cpp -o solution
./solution
```
На macOS команда g++ обычно тоже сработает — она линкуется на Clang, так что g++ -std=c++17 ... даёт тот же результат, что и clang++.
```bash
g++ -std=c++17 -O2 easy/0020-valid-parentheses.cpp -o solution
./solution
```