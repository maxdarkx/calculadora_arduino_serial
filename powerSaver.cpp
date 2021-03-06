#include <avr/power.h>
#include <avr/sleep.h>

//function to use the arduino under power saving modes (SERIAL makes only use of SLEEP_MODE_IDLE)
void sleepNow()
{
/* Now is the time to set the sleep mode. In the Atmega8 datasheet
 * http://www.atmel.com/dyn/resources/prod_documents/doc2486.pdf on page 35
 * there is a list of sleep modes which explains which clocks and
 * wake up sources are available in which sleep modus.
 *
 * In the avr/sleep.h file, the call names of these sleep modus are to be found:
 *
 * The 5 different modes are:
 * SLEEP_MODE_IDLE -the least power savings
 * SLEEP_MODE_ADC
 * SLEEP_MODE_PWR_SAVE
 * SLEEP_MODE_STANDBY
 * SLEEP_MODE_PWR_DOWN -the most power savings
 *
 * the power reduction management <avr/power.h> is described in
 * http://www.nongnu.org/avr-libc/user-manual/group_avr_power.html
 */

set_sleep_mode(SLEEP_MODE_IDLE); // sleep mode is set here

sleep_enable(); // enables the sleep bit in the mcucr register
// so sleep is possible. just a safety pin

//Disable all MCU peripherals

power_adc_disable();
power_spi_disable();
power_timer0_disable();
power_timer1_disable();
power_timer2_disable();
power_twi_disable();

sleep_mode(); // here the device is actually put to sleep!!

// THE PROGRAM CONTINUES FROM HERE AFTER WAKING UP
sleep_disable(); // first thing after waking from sleep:
// disable sleep...

power_all_enable();

}
