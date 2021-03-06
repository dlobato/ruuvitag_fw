#ifndef SDK_APPLICATION_CONFIG_H
#define SDK_APPLICATION_CONFIG_H

// Define any application-specific sdk configuration overrides here
#define PWM_ENABLED     1
#define PWM0_ENABLED    1
#define APP_PWM_ENABLED 1
#define PPI_ENABLED     1
#define TIMER_ENABLED   1
#define TIMER0_ENABLED  1
#define TIMER1_ENABLED  1
#define TIMER2_ENABLED  1
#define TIMER3_ENABLED  1
#define TIMER4_ENABLED  1
#define CRC16_ENABLED   1
#define CRC32_ENABLED   1
#define NRF_LOG_ENABLED 1

// WDT_CONFIG_RELOAD_VALUE - Reload value  <15-4294967295> (ms)
// 11000 as maximum advertisement interval is 10000 + some margin
#ifndef WDT_CONFIG_RELOAD_VALUE
#define WDT_CONFIG_RELOAD_VALUE 11000 
#endif

#endif
