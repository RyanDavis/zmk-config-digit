#define COMBO(name, keypress, keypos) \
combo_##name { \
  timeout-ms = <70>; \
  bindings = <keypress>; \
  key-positions = <keypos>; \
};
#define COMBOS(name, keypress, keypos) \
combo_##name { \
  timeout-ms = <50>; \
  bindings = <keypress>; \
  key-positions = <keypos>; \
};
#define COMBOLL(name, keypress, mylayers, keypos) \
combo_##name { \
  timeout-ms = <100>; \
  bindings = <keypress>; \
  layers = <mylayers>; \
  key-positions = <keypos>; \
};
#define COMBOLS(name, keypress, mylayers, keypos) \
combo_##name { \
  timeout-ms = <50>; \
  bindings = <keypress>; \
  layers = <mylayers>; \
  key-positions = <keypos>; \
};
#define COMBOL(name, keypress, mylayers, keypos) \
combo_##name { \
  timeout-ms = <70>; \
  bindings = <keypress>; \
  layers = <mylayers>; \
  key-positions = <keypos>; \
};
