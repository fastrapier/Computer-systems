# Byte and login operations

- `x` = *0x66*
- `y` = *0x39*

| byte operations | answers    | logic operations | answer |
|-----------------|------------|------------------|--------|
| x & y           | 0x20       | x && y           | 0x1    |
| x \| y          | 0x7F       | x \|\| y         | 0x1    |
| ~x \| ~y        | 0xFFFFFFDF | !x \|\| !y       | 0x0    |
| x & !y          | 0x0        | x && ~y          | 0x1    |