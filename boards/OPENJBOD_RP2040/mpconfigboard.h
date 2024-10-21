// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME                   "OpenJBOD RP2040"
// Disable USB serial console for production
#define MICROPY_HW_USB_CDC			(0)
#define MICROPY_HW_ENABLE_UART_REPL		(1)
// Reserve 1MB for MPy firmware
#define MICROPY_HW_FLASH_STORAGE_BYTES          (PICO_FLASH_SIZE_BYTES - (1 * 1024 * 1024))
// Defaults for networking
#define MICROPY_PY_NETWORK			(1)
#define MICROPY_PY_NETWORK_HOISTNAME_DEFAULT	"openjbod"
#define MICROPY_HW_WIZNET_SPI_ID		(0)
#define MICROPY_HW_WIZNET_SPI_BAUDRATE		(20 * 1000 * 1000)
#define MICROPY_HW_WIZNET_SPI_SCK		(2)
#define MICROPY_HW_WIZNET_SPI_MOSI		(3)
#define MICROPY_HW_WIZNET_SPI_MISO		(4)
#define MICROPY_HW_WIZNET_PIN_CS		(5)
#define MICROPY_HW_WIZNET_PIN_RST		(0)
#define MICROPY_HW_WIZNET_PIN_INTN		(1)
