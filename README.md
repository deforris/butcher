# butcher
A visualization engine being built for my personal projects. I may not ever finish this.

## Architecture

### backroom
The engine itself.

- block *(3D)*
- board *(2D)*
- building *(platform)*
- cabinet *(utils)*
    - math
    - parsers
- freezer *(memory)*
- labels *(text)*
- recipes *(data struct)*
- scale *(observability)*
    - dashboard
    - logging
    - metrics
    - tracing
    - visualization
- stuffer *(packer)*
- speakers *(audio)* 
- wrapping *(textures)*


### front
Additional features to engine. Afterall not all butchers need a store front.

- displaycase *(testbed)*
  - Allows for proving out the engines internals in a controled environment
- driver *(installer)*
- inspector *(qa/asserter)*
- alarm *(encryption)*
