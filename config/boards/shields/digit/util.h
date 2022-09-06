#define COMBO(name, keypress, keypos) \
combo_##name { \
  timeout-ms = <100>; \
  bindings = <keypress>; \
  key-positions = <keypos>; \
};
#define COMBOS(name, keypress, keypos) \
combo_##name { \
  timeout-ms = <40>; \
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
  timeout-ms = <40>; \
  bindings = <keypress>; \
  layers = <mylayers>; \
  key-positions = <keypos>; \
};
#define COMBOL(name, keypress, mylayers, keypos) \
combo_##name { \
  timeout-ms = <60>; \
  bindings = <keypress>; \
  layers = <mylayers>; \
  key-positions = <keypos>; \
};
