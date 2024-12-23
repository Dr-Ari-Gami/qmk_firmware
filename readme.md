# Dr_Ari_Gami's fork of ZSA's fork of QMK Firmware
The purpose of this fork is to customize my keyboard layout beyond what [Oryx](https://configure.zsa.io/) allows. Specifically, I added indicator lights for caps lock, num lock, and caps word

## Supported Keyboard

* [Moonlander Mark I](/keyboards/moonlander)

## Building

* Clone this repo `git clone https://github.com/Dr-Ari-Gami/qmk_firmware`
* Enter the repo's directory `cd qmk_firmware`
* Compile `make zsa/moonlander:my_layout`. Binary is stored in `/zsa_moonlander_my_layout.bin`
* Flash using [Keymapp](https://www.zsa.io/flash)