# The AlphaDel Ferris Base Layout

## Build environment

1) See [The Complete Newbs Guide To QMK](https://docs.qmk.fm/#/newbs).

2) Clone the QMK repository
```bash
git clone git@github.com:qmk/qmk_firmware.git
```

3) Clone this repository inside the following folder structure `keyboards/ferris/keymaps/alphadel/`
```bash
git clone git@github.com:rafaeldelboni/alphadel-ferris-keymap.git qmk_firmware/keyboards/ferris/keymaps/alphadel
```

## Building Instructions

1) from the `qmk_firmware` directory run:
```bash
qmk compile -kb ferris/0_1 -km alphadel
```
