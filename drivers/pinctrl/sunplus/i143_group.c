#include "pinctrl_sunplus.h"


static const unsigned pins_spif1[] = { 57, 58, 59, 60, 61, 62 };
static const unsigned pins_spif2[] = { 63, 64, 65, 66, 67, 68 };
static const sp7021grp_t sp7021grps_spif[] = {
	EGRP("SPI_FLASH1", 1, pins_spif1),
	EGRP("SPI_FLASH2", 2, pins_spif2)
};

static const unsigned pins_emmc[] = {
	69, 70, 71, 72, 73, 74, 75, 76,
	77, 78
};
static const sp7021grp_t sp7021grps_emmc[] = {
	EGRP("CARD0_EMMC", 1, pins_emmc)
};

static const unsigned pins_gl2sw[] = {
	 2,  3,  4,  5,  6,  7,  8,  9,
	10, 11, 12, 13, 14, 15, 16, 17,
	18, 19, 20, 21, 22, 23, 24, 25,
	26, 27
};
static const sp7021grp_t sp7021grps_gl2sw[] = {
	EGRP("GL2SW", 1, pins_gl2sw)
};

static const unsigned pins_pwm[] = {
	2, 3, 4, 5, 6, 7, 8, 9
};
static const sp7021grp_t sp7021grps_pwm[] = {
	EGRP("DISP_PWM", 1, pins_pwm)
};

static const unsigned pins_spim0[] = { 32, 33, 34, 35, 36 };
static const sp7021grp_t sp7021grps_spim0[] = {
	EGRP("SPI_MASTER0", 1, pins_spim0)
};

static const unsigned pins_spim1[] = { 37, 38, 39, 40, 41 };
static const sp7021grp_t sp7021grps_spim1[] = {
	EGRP("SPI_MASTER1", 1, pins_spim1)
};

static const unsigned pins_spis0[] = { 32, 33, 34, 35, 36 };
static const sp7021grp_t sp7021grps_spis0[] = {
	EGRP("SPI_SLAVE0", 1, pins_spis0)
};

static const unsigned pins_spis1[] = { 37, 38, 39, 40, 41 };
static const sp7021grp_t sp7021grps_spis1[] = {
	EGRP("SPI_SLAVE0", 1, pins_spis1)
};

static const unsigned pins_i2cm0[] = { 45, 46 };
static const sp7021grp_t sp7021grps_i2cm0[] = {
	EGRP("I2C_MASTER0", 1, pins_i2cm0)
};

static const unsigned pins_i2cm1[] = { 47, 48 };
static const sp7021grp_t sp7021grps_i2cm1[] = {
	EGRP("I2C_MASTER1", 1, pins_i2cm1)
};

static const unsigned pins_wakeup[] = { 102 };
static const sp7021grp_t sp7021grps_wakeup[] = {
	EGRP("WAKEUP", 1, pins_wakeup)
};

static const unsigned pins_uart1[] = { 85, 86, 87, 88 };
static const sp7021grp_t sp7021grps_uart1[] = {
	EGRP("UART1", 1, pins_uart1)
};

static const unsigned pins_uart2_1X[] = { 89, 90, 91, 92 };
static const unsigned pins_uart2_2X[] = { 64, 65, 66, 67 };
static const sp7021grp_t sp7021grps_uart2[] = {
	EGRP("UART2_1X", 1, pins_uart2_1X),
	EGRP("UART2_2X", 2, pins_uart2_2X)
};

static const unsigned pins_uart3[] = { 93, 94, 95, 96 };
static const sp7021grp_t sp7021grps_uart3[] = {
	EGRP("UART3", 1, pins_uart3)
};

static const unsigned pins_uart4[] = { 97, 98, 99, 100 };
static const sp7021grp_t sp7021grps_uart4[] = {
	EGRP("UART4", 1, pins_uart4)
};

static const unsigned pins_uartdbg[] = { 81, 82 };
static const sp7021grp_t sp7021grps_uartdbg[] = {
	EGRP("UART_DEBUG", 1, pins_uartdbg)
};

static const unsigned pins_timeri0[] = { 86 };
static const sp7021grp_t sp7021grps_timeri0[] = {
	EGRP("STC_TIMER0", 1, pins_timeri0)
};

static const unsigned pins_gpioi0[] = { 87 };
static const sp7021grp_t sp7021grps_gpioi0[] = {
	EGRP("GPIO_INT0", 1, pins_gpioi0)
};

static const unsigned pins_uart0[] = { 79, 80 };
static const sp7021grp_t sp7021grps_uart0[] = {
	EGRP("UART0", 1, pins_uart0)
};

static const unsigned pins_adbg1[] = { 49, 50 };
static const unsigned pins_adbg2[] = { 53, 54 };
static const sp7021grp_t sp7021grps_adbg[] = {
	EGRP("ACHIP_DEBUG1", 1, pins_adbg1),
	EGRP("ACHIP_DEBUG2", 2, pins_adbg2),
};

static const unsigned pins_aua2axi1[] = { 51, 52, 53 };
static const unsigned pins_aua2axi2[] = { 54, 55, 56 };
static const sp7021grp_t sp7021grps_au2x[] = {
	EGRP("ACHIP_UA2AXI1", 1, pins_aua2axi1),
	EGRP("ACHIP_UA2AXI2", 2, pins_aua2axi2),
};

static const unsigned pins_u54_jtag[] = { 33, 34, 35 };
static const sp7021grp_t sp7021grps_u54_jtag[] = {
	EGRP("U54_JTAG", 1, pins_u54_jtag),
};

static const unsigned pins_hdmi1[] = { 28, 29, 30, 31 };
static const unsigned pins_hdmi2[] = { 42, 54, 55, 56 };
static const sp7021grp_t sp7021grps_hdmi[] = {
	EGRP("HDMI_TX1", 1, pins_hdmi1),
	EGRP("HDMI_TX2", 2, pins_hdmi2)
};

static const unsigned pins_u0otg[] = { 0 };
static const sp7021grp_t sp7021grps_u0otg[] = {
	EGRP("USB0_OTG", 1, pins_u0otg)
};

static const unsigned pins_u1otg[] = { 1 };
static const sp7021grp_t sp7021grps_u1otg[] = {
	EGRP("USB1_OTG", 1, pins_u1otg)
};

static const unsigned pins_isp_dvp[] = {
	16, 17, 18, 19, 20, 21, 22, 23,
	24, 25, 26, 27, 28, 29, 30, 31,
	32, 33, 34
};
static const sp7021grp_t sp7021grps_isp0_dvp[] = {
	EGRP("ISP0_DVP", 1, pins_isp_dvp)
};
static const sp7021grp_t sp7021grps_isp1_dvp[] = {
	EGRP("ISP1_DVP", 1, pins_isp_dvp)
};

static const unsigned pins_isp0_spi[] = { 35, 36, 37, 38, 39 };
static const sp7021grp_t sp7021grps_isp0_spi[] = {
	EGRP("ISP0_SPI", 1, pins_isp0_spi)
};

static const unsigned pins_isp1_spi[] = { 40, 41, 42, 43, 44 };
static const sp7021grp_t sp7021grps_isp1_spi[] = {
	EGRP("ISP1_SPI", 1, pins_isp1_spi)
};

static const unsigned pins_uphd[] = {
	 2,  3,  4,  5,  6,  7,  8,  9,
	10, 11, 12, 13, 14, 15, 16
};
static const sp7021grp_t sp7021grps_up0d[] = {
	EGRP("UPHY0_DEBUG", 1, pins_uphd)
};
static const sp7021grp_t sp7021grps_up1d[] = {
	EGRP("UPHY1_DEBUG", 1, pins_uphd)
};
static const sp7021grp_t sp7021grps_up2d[] = {
	EGRP("UPHY2_DEBUG", 1, pins_uphd)
};

static const unsigned pins_uphyif1[] = { 33, 34 };
static const unsigned pins_uphyif2[] = { 35, 36 };
static const unsigned pins_uphyif3[] = { 37, 38 };
static const sp7021grp_t sp7021grps_uphy0if[] = {
	EGRP("UPHY0_IF1", 1, pins_uphyif1),
	EGRP("UPHY0_IF2", 2, pins_uphyif2),
	EGRP("UPHY0_IF3", 3, pins_uphyif3)
};
static const sp7021grp_t sp7021grps_uphy1if[] = {
	EGRP("UPHY1_IF1", 1, pins_uphyif1),
	EGRP("UPHY1_IF2", 2, pins_uphyif2),
	EGRP("UPHY1_IF3", 3, pins_uphyif3)
};
static const sp7021grp_t sp7021grps_uphy2if[] = {
	EGRP("UPHY2_IF1", 1, pins_uphyif1),
	EGRP("UPHY2_IF2", 2, pins_uphyif2),
	EGRP("UPHY2_IF3", 3, pins_uphyif3)
};

static const unsigned pins_sdc30[] = { 89, 90, 91, 92, 93, 94 };
static const sp7021grp_t sp7021grps_sdc30[] = {
	EGRP("SD_CARD", 1, pins_sdc30)
};

static const unsigned pins_sdio30[] = { 95, 96, 97, 98, 99, 100 };
static const sp7021grp_t sp7021grps_sdio30[] = {
	EGRP("SDIO", 1, pins_sdio30)
};

static const unsigned pins_u3phytest[] = {
	33, 34, 35, 36, 37, 38, 39, 40,
	41, 42, 43, 44, 45
};
static const sp7021grp_t sp7021grps_u3phytest[] = {
	EGRP("U3PHY_TEST", 1, pins_u3phytest)
};

static const unsigned pins_usb_test[] = {
	 2,  3,  4,  5,  6,  7,  8,  9,
	10, 11, 12, 13, 14, 15, 16, 17,
	18, 19, 20, 21, 22, 23, 24, 25,
	26, 27, 28, 29, 30, 31, 32
};
static const sp7021grp_t sp7021grps_usb0test[] = {
	EGRP("USB0_TEST", 1, pins_usb_test)
};
static const sp7021grp_t sp7021grps_usb1test[] = {
	EGRP("USB1_TEST", 1, pins_usb_test)
};
static const sp7021grp_t sp7021grps_usb2test[] = {
	EGRP("USB2_TEST", 1, pins_usb_test)
};

func_t list_funcs[] = {
	FNCE("SPI_FLASH",       1, 0, 2, sp7021grps_spif),
	FNCE("CARD0_EMMC",      1, 2, 1, sp7021grps_emmc),
	FNCE("GL2SW",           1, 3, 1, sp7021grps_gl2sw),
	FNCE("DISP_PWM",        1, 4, 1, sp7021grps_pwm),
	FNCE("SPI_MASTER0",     1, 5, 1, sp7021grps_spim0),
	FNCE("SPI_MASTER1",     1, 6, 1, sp7021grps_spim1),
	FNCE("SPI_SLAVE0",      1, 7, 1, sp7021grps_spis0),
	FNCE("SPI_SLAVE1",      1, 8, 1, sp7021grps_spis1),
	FNCE("I2C_MASTER0",     1, 9, 1, sp7021grps_i2cm0),
	FNCE("I2C_MASTER1",     1,10, 1, sp7021grps_i2cm1),
	FNCE("WAKEUP",          1,11, 1, sp7021grps_wakeup),
	FNCE("UART1",           1,12, 1, sp7021grps_uart1),
	FNCE("UART2",           1,13, 2, sp7021grps_uart2),
	FNCE("UART3",           1,15, 1, sp7021grps_uart3),

	FNCE("UART4",           2, 0, 1, sp7021grps_uart4),
	FNCE("UART_DEBUG",      2, 1, 1, sp7021grps_uartdbg),
	FNCE("STC_TIMER0",      2, 2, 1, sp7021grps_timeri0),
	FNCE("GPIO_INT0",       2, 3, 1, sp7021grps_gpioi0),
	FNCE("UART0",           2, 4, 1, sp7021grps_uart0),
	FNCE("ACHIP_DEBUG",     2, 5, 2, sp7021grps_adbg),
	FNCE("ACHIP_UA2AXI",    2, 7, 2, sp7021grps_au2x),
	FNCE("U54_JTAG",        2, 9, 1, sp7021grps_u54_jtag),
	FNCE("HDMI_TX",         2,10, 2, sp7021grps_hdmi),
	FNCE("USB0_OTG",        2,12, 1, sp7021grps_u0otg),
	FNCE("USB1_OTG",        2,13, 1, sp7021grps_u1otg),
	FNCE("ISP0_DVP",        2,14, 1, sp7021grps_isp0_dvp),
	FNCE("ISP1_DVP",        2,15, 1, sp7021grps_isp1_dvp),

	FNCE("ISP0_SPI",        3, 0, 1, sp7021grps_isp0_spi),
	FNCE("ISP1_SPI",        3, 1, 1, sp7021grps_isp1_spi),
	FNCE("UPHY0_DEBUG",     3, 2, 1, sp7021grps_up0d),
	FNCE("UPHY1_DEBUG",     3, 3, 1, sp7021grps_up1d),
	FNCE("UPHY2_DEBUG",     3, 4, 1, sp7021grps_up2d),
	FNCE("UPHY0_IF",        3, 5, 2, sp7021grps_uphy0if),
	FNCE("UPHY1_IF",        3, 7, 2, sp7021grps_uphy1if),
	FNCE("UPHY2_IF",        3, 9, 2, sp7021grps_uphy2if),

	FNCE("SD_CARD",         4, 0, 1, sp7021grps_sdc30),
	FNCE("SDIO",            4, 1, 1, sp7021grps_sdio30),

	FNCE("U3PHY_TEST",      0, 0, 1, sp7021grps_u3phytest),
	FNCE("USB0_TEST",       0, 1, 1, sp7021grps_usb0test),
	FNCE("USB1_TEST",       0, 2, 1, sp7021grps_usb1test),
	FNCE("USB2_TEST",       0, 3, 1, sp7021grps_usb2test)
};

const int list_funcsSZ = ARRAY_SIZE(list_funcs);
