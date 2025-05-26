# My's fork of QMK Firmware

This purpose of this fork is to house my custom firmware, based off of [my layout on oryx](https://configure.zsa.io/moonlander/layouts/Dw5d7/AzPvy0/0), that includes indicator lights for caps lock (on layers 0 and 1), and num lock (on layer 3)

## Supported Keyboard
* [Moonlander Mark I](/keyboards/zsa/moonlander/)

## Building
To set up the local build enviroment to create the firmware image manually, head to the [Newbs guide from QMK](https://docs.qmk.fm/#/newbs).

And instead of using just `qmk setup`, you will want to run this instead:

```sh
qmk setup Dr-Ari-Gami/qmk_firmware -b firmware24
```

Compile firmware with the following command, while in the `qmk_firmware` directory:
```sh
qmk compile -kb moonlander -km my-standard-layout
```

# Update Process
1. Check out branch from ZSA's master branch:
    1. `git remote add zsa https://github.com/Dr-Ari-Gami/qmk_firmware.git`
    2. `git fetch --all`