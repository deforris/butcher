# butcher
A visualization engine being built for my personal projects.

## Architecture

### backroom
The engine itself.

- cabinet *(utils)*
  - Holds all standard utilities
    - logging
    - math
    - parsers
    - profiling

### front
Additional features to engine. Afterall not all butchers need a store front.

- displaycase *(testbed)*
  - Allows for proving out the engines internals in a controled environment
