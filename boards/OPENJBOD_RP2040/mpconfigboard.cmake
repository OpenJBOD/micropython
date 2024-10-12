# cmake file for OpenJBOD RP2040
# The board does not have official pico-sdk support
# Instead, we use our own header.
list(APPEND PICO_BOARD_HEADER_DIRS ${MICROPY_BOARD_DIR})
set(PICO_BOARD "openjbod_rp2040")
set(MICROPY_PY_NETWORK_WIZNET5K W5500)
set(MICROPY_PY_LWIP 1)
set(MICROPY_FROZEN_MANIFEST ${MICROPY_BOARD_DIR}/manifest.py)
