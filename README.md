This repository contains the board files required to build MicroPython with support for the OpenJBOD RP2040 controller board.

# How to use

- Clone or download this repository into one directory.
- Clone or download MicroPython from [micropython/micropython](https://github.com/micropython/micropython) into anotherdirectory.
- Clone the OpenJBOD software from [OpenJBOD/software](https://github.com/openjbod/software) *or* remove the `module('frozen_openjbod.py')` line from boards/OPENJBOD_RP2040/manifest.py.
- Copy the boards/OPENJBOD_RP2040 folder into the ports/rp2/boards folder of the MicroPython folder.
- Follow the standard MicroPython build procedure using the OPENJBOD_RP2040 board.

For example:
```
# Install dependencies
sudo apt-get install apt-get install pkg-config build-essential gcc-arm-none-eabi libnewlib-arm-none-eabi python3-dev python3-pip
pip3 install freezefs

mkdir openjbod
cd openjbod
git clone https://github.com/openjbod/micropython openjbod
git clone https://github.com/openjbod/software
git clone https://github.com/micropython/micropython
cp -r openjbod/boards/OPENJBOD_RP2040 micropython/ports/rp2/boards/
# If you removed the frozen_openjbod.py requirement from manifest.py, skip this step:
python3 -m freezefs software/ micropython/ports/rp2/boards/OPENJBOD_RP2040/frozen_openjbod.py --on-import=extract --compress -t / -ov always

# Standard MicroPython build procedure
make -j $(nproc) -C micropython/mpy-cross/
make -j $(nproc) -C micropython/ports/rp2/ BOARD=OPENJBOD_RP2040 submodules
make -j $(nproc) -C micropython/ports/rp2/ BOARD=OPENJBOD_RP2040

cp micropython/ports/rp2/build-OPENJBOD_RP2040/firmware.uf2 .
```
