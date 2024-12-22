#include "main.h"
#include <fmt/fmt.h>

extern UART_HandleTypeDef huart2;

extern "C" int __io_putchar(int ch) {
  return HAL_UART_Transmit(&huart2, (uint8_t *)&ch, 1, 10);
}

struct MyStruct {
  int x;
  float y;
};

template <> struct fmt::formatter<MyStruct> {
  constexpr auto parse(fmt::format_parse_context &ctx) { return ctx.begin(); }

  template <typename FormatContext>
  auto format(const MyStruct &m, FormatContext &ctx) const {
    return fmt::format_to(ctx.out(), "MyStruct(x={}, y={})", m.x, m.y);
  }
};

extern "C" void main_thread(void *) {
  MyStruct s{42, 3.14f};
  fmt::print("{}\n", s); // MyStruct(x=42, y=3.14)

  while (true) {
  }
}
