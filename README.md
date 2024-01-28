## Installation

This project relies on the [dep package manager](https://github.com/finwo/dep)
to manage it's dependencies.

```sh
dep add finwo/opener
```

## Usage

```c
#include "finwo/opener.h"

int main() {
  opener("https://example.com");
  return 0;
}
```
