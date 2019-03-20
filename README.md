# FORCEIO.CDT (Contract Development Toolkit)

FORCEIO.CDT is a toolchain for WebAssembly (WASM) and set of tools to facilitate contract writing for the EOSForce.

### Guided Installation (Building from Scratch)
```sh
$ git clone --recursive https://github.com/eosforce/eosforce.cdt
$ cd eosforce.cdt
$ ./build.sh
$ sudo ./install.sh
```

### Installed Tools

* diff name from eosio

---
* eosforce-cpp
* eosforce-cc
* eosforce-ld
* eosforce-init
* eosforce-abigen
* eosforce-abidiff
* eosforce-pp (post processing pass for WASM, automatically runs with eosforce-cpp and eosforce-ld)
* eosforce-wasm2wast
* eosforce-wast2wasm
* eosforce-ranlib
* eosforce-ar
* eosforce-objdump
* eosforce-readelf
