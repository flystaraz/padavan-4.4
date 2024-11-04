/* H3C TX1801 */
/* 4 Wan/Lan ports; 1 LEDs(16:sys_green, 14:sys_yellow); 2 BTNs(18:reset,	21:mesh) */

#define BOARD_PID		"H3C TX1801"
#define BOARD_NAME		"H3C TX1801"
#define BOARD_DESC		"H3C TX1801 Wireless Router/(H3C TX1806)"
#define BOARD_VENDOR_NAME	"H3C"
#define BOARD_VENDOR_URL	"https://www.h3c.com/cn/"
#define BOARD_MODEL_URL		"https://www.h3c.com/cn/"
#define BOARD_BOOT_TIME		20
#define BOARD_FLASH_TIME	120

#define BOARD_GPIO_BTN_RESET 18
#undef  BOARD_GPIO_BTN_WPS 7
#define BOARD_GPIO_LED_INVERTED		/* LED pins value is inverted (1: LED show, 0: LED hide) */
#undef  BOARD_GPIO_LED_ALL
#undef  BOARD_GPIO_LED_WIFI
#define BOARD_GPIO_LED_WAN	 15     /* net_blue: 15, net_yellow: 13 */
#undef  BOARD_GPIO_LED_POWER
//#define BOARD_GPIO_LED_POWER 16      
#undef  BOARD_GPIO_LED_LAN
#undef  BOARD_GPIO_LED_USB
#undef  BOARD_GPIO_LED_ROUTER

#undef BOARD_GPIO_PWR_USB_ON
#undef BOARD_GPIO_PWR_USB
#define BOARD_HAS_5G_11AC	1
#define BOARD_HAS_5G_11AX	1
#define BOARD_HAS_2G_11AX	1
#define BOARD_NUM_ANT_5G_TX	2
#define BOARD_NUM_ANT_5G_RX	2
#define BOARD_NUM_ANT_2G_TX	2
#define BOARD_NUM_ANT_2G_RX	2
#define BOARD_NUM_ETH_LEDS	0
#define BOARD_NUM_ETH_EPHY	4
#define BOARD_HAS_EPHY_L1000	1
#define BOARD_HAS_EPHY_W1000	1