# Cuddlebot Firmware

This repository is a fork of the cuddlebot-firmware at
https://github.com/mikepb/cuddlebot-firmware

Changes are made to the actuator firmware under `actuator/` to compensate for physical difficulties and changes in the UBC SPIN Research Lab's CuddleBot

Before getting started, please install the STM32 Toolchains following this link (it is up to date as of August 2015)
fab.cba.mit.edu/classes/4.140/tutorials/EmbeddedProgramming/stm32.html

Once the toolchain is setup, checkout the ChibiOS submodule like so:

```sh
$ git submodule init
$ git submodule update
```

For instructions as to how to build the actuator firmware, navigate to the actuator folder.
