#include "main.h"
#include <fmt/fmt.h>
#include <fmt/ranges.h> // for std container
#include <vector>

extern UART_HandleTypeDef huart2;

extern "C" int __io_putchar(int ch) {
  return HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, 10);
}

extern "C" void main_thread(void *) {
  fmt::println("The answer is {}.", 42);
  fmt::println("Vector is {}", std::vector<int>{1, 2, 3});

  while (true) {
  }
}
