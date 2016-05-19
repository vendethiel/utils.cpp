#define DELEGATE(VAR, FN) \
  template<typename... Ts> \
  decltype(auto) FN(Ts&&... args) -> decltype(VAR.FN(std::forward<Ts>(args)...)) \
  { \
    return VAR.FN(std::forward<Ts>(args)...); \
  }
