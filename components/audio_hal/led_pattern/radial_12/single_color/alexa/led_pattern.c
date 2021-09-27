// Copyright 2018 Espressif Systems (Shanghai) PTE LTD
// All rights reserved.

#include <esp_err.h>
#include <esp_log.h>
#include <led_pattern.h>

const led_pattern_state_t led_radial12_listening_enter[] = {
    {100, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}},
};

const led_pattern_state_t led_radial12_listening_ongoing[] = {
    {100, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}},
};

const led_pattern_state_t led_radial12_speaking[] = {
    {30, {0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F}},
    {30, {0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}},
    {30, {0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00001F}},
    {30, {0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}},
    {30, {0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F}},
    {30, {0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}},
    {30, {0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F}},
    {30, {0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}},
    {30, {0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F}},
    {30, {0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}},
    {30, {0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF}},
    {30, {0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}},
    {30, {0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF}},
    {30, {0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}},
    {30, {0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF}},
    {30, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}},
    {30, {0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF,0x0000EF}},
    {30, {0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}},
    {30, {0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF,0x0000CF}},
    {30, {0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}},
    {30, {0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF,0x0000AF}},
    {30, {0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}},
    {30, {0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F,0x00008F}},
    {30, {0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}},
    {30, {0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F,0x00006F}},
    {30, {0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}},
    {30, {0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F,0x00004F}},
    {30, {0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}},
    {30, {0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00002F,0x00001F}},
    {30, {0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}},
};

const led_pattern_state_t led_radial12_mic_off_exit[] = {
    {11, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_mic_off_ongoing[] = {
    {66, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_mic_off_enter[] = {
    {33, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_listening_exit[] = {
    {33, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_error[] = {
    {66, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_bt_connect[] = {
    {75, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_bt_disconnect[] = {
    {75, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_notification_ongoing[] = {
    {60, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_notification_new[] = {
    {50, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_thinking[] = {
    {10, {0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000}},
    {10, {0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000}},
    {10, {0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000}},
    {10, {0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000}},
    {10, {0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF}},
    {10, {0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF}},
    {10, {0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF}},
    {10, {0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F,0x00009F}},
    {10, {0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F,0x00007F}},
    {10, {0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F,0x00005F}},
    {10, {0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F,0x00003F}},
    {10, {0x00003F,0x00005F,0x00007F,0x00009F,0x0000BF,0x0000DF,0x0000FF,0x000000,0x000000,0x000000,0x000000,0x00001F}},
};

const led_pattern_state_t led_radial12_alrt_short[] = {
    {100, {0x0000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},

};

const led_pattern_state_t led_radial12_alrt[] = {
    {50, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_bootup_1[] = {
    {70, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
    {70, {0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F,0x00000F}},
    {70, {0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F,0x00001F}},
    {70, {0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F,0x00003F}},
    {70, {0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F,0x00005F}},
    {70, {0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F,0x00007F}},
    {70, {0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F,0x00009F}},
    {70, {0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF,0x0000BF}},
    {70, {0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF,0x0000DF}},  
};

const led_pattern_state_t led_radial12_bootup_2[] = {
    {100, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
    {100, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}},
};

const led_pattern_state_t led_radial12_speaker_mute[] = {
    {22, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_speaker_vol[] = {
    {11, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_off[] = {
    {10, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
};

const led_pattern_state_t led_radial12_setup_mode[] = {
    {233, {0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000}},
    {233, {0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF}},
};

static const char *TAG = "led_pattern";

static bool is_init_done = false;
led_pattern_config_t led_radial12_conf[LED_PATTERN_MAX];

esp_err_t led_pattern_get_config(led_pattern_config_t **led_pattern_config)
{
    if (is_init_done == false) {
        ESP_LOGE(TAG, "LED pattern not initialized");
        return ESP_FAIL;
    }
    *led_pattern_config = led_radial12_conf;
    return ESP_OK;
}

bool led_pattern_is_init_done()
{
    return is_init_done;
}

void led_pattern_init()
{
    led_radial12_conf[LED_PATTERN_BOOTUP_1].led_states_count = sizeof(led_radial12_bootup_1) / sizeof(led_radial12_bootup_1[0]);
    led_radial12_conf[LED_PATTERN_BOOTUP_1].led_states = (led_pattern_state_t *)led_radial12_bootup_1;

    led_radial12_conf[LED_PATTERN_BOOTUP_2].led_states_count = sizeof(led_radial12_bootup_2) / sizeof(led_radial12_bootup_2[0]);
    led_radial12_conf[LED_PATTERN_BOOTUP_2].led_states = (led_pattern_state_t *)led_radial12_bootup_2;

    led_radial12_conf[LED_PATTERN_LISTENING_ENTER].led_states_count = sizeof(led_radial12_listening_enter) / sizeof(led_radial12_listening_enter[0]);
    led_radial12_conf[LED_PATTERN_LISTENING_ENTER].led_states = (led_pattern_state_t *)led_radial12_listening_enter;

    led_radial12_conf[LED_PATTERN_LISTENING_ONGOING].led_states_count = sizeof(led_radial12_listening_ongoing) / sizeof(led_radial12_listening_ongoing[0]);
    led_radial12_conf[LED_PATTERN_LISTENING_ONGOING].led_states = (led_pattern_state_t *)led_radial12_listening_ongoing;

    led_radial12_conf[LED_PATTERN_LISTENING_EXIT].led_states_count = sizeof(led_radial12_listening_exit) / sizeof(led_radial12_listening_exit[0]);
    led_radial12_conf[LED_PATTERN_LISTENING_EXIT].led_states = (led_pattern_state_t *)led_radial12_listening_exit;

    led_radial12_conf[LED_PATTERN_SPEAKER_VOL].led_states_count = sizeof(led_radial12_speaker_vol) / sizeof(led_radial12_speaker_vol[0]);
    led_radial12_conf[LED_PATTERN_SPEAKER_VOL].led_states = (led_pattern_state_t *)led_radial12_speaker_vol;

    led_radial12_conf[LED_PATTERN_SPEAKER_MUTE].led_states_count = sizeof(led_radial12_speaker_mute) / sizeof(led_radial12_speaker_mute[0]);
    led_radial12_conf[LED_PATTERN_SPEAKER_MUTE].led_states = (led_pattern_state_t *)led_radial12_speaker_mute;

    led_radial12_conf[LED_PATTERN_SPEAKING].led_states_count = sizeof(led_radial12_speaking) / sizeof(led_radial12_speaking[0]);
    led_radial12_conf[LED_PATTERN_SPEAKING].led_states = (led_pattern_state_t *)led_radial12_speaking;

    led_radial12_conf[LED_PATTERN_MIC_OFF_EXIT].led_states_count = sizeof(led_radial12_mic_off_exit) / sizeof(led_radial12_mic_off_exit[0]);
    led_radial12_conf[LED_PATTERN_MIC_OFF_EXIT].led_states = (led_pattern_state_t *)led_radial12_mic_off_exit;

    led_radial12_conf[LED_PATTERN_MIC_OFF_ONGOING].led_states_count = sizeof(led_radial12_mic_off_ongoing) / sizeof(led_radial12_mic_off_ongoing[0]);
    led_radial12_conf[LED_PATTERN_MIC_OFF_ONGOING].led_states = (led_pattern_state_t *)led_radial12_mic_off_ongoing;

    led_radial12_conf[LED_PATTERN_MIC_OFF_ENTER].led_states_count = sizeof(led_radial12_mic_off_enter) / sizeof(led_radial12_mic_off_enter[0]);
    led_radial12_conf[LED_PATTERN_MIC_OFF_ENTER].led_states = (led_pattern_state_t *)led_radial12_mic_off_enter;

    led_radial12_conf[LED_PATTERN_ERROR].led_states_count = sizeof(led_radial12_error) / sizeof(led_radial12_error[0]);
    led_radial12_conf[LED_PATTERN_ERROR].led_states = (led_pattern_state_t *)led_radial12_error;

    led_radial12_conf[LED_PATTERN_BT_CONNECT].led_states_count = sizeof(led_radial12_bt_connect) / sizeof(led_radial12_bt_connect[0]);
    led_radial12_conf[LED_PATTERN_BT_CONNECT].led_states = (led_pattern_state_t *)led_radial12_bt_connect;

    led_radial12_conf[LED_PATTERN_BT_DISCONNECT].led_states_count = sizeof(led_radial12_bt_disconnect) / sizeof(led_radial12_bt_disconnect[0]);
    led_radial12_conf[LED_PATTERN_BT_DISCONNECT].led_states = (led_pattern_state_t *)led_radial12_bt_disconnect;

    led_radial12_conf[LED_PATTERN_NOTIFICATION_ONGOING].led_states_count = sizeof(led_radial12_notification_ongoing) / sizeof(led_radial12_notification_ongoing[0]);
    led_radial12_conf[LED_PATTERN_NOTIFICATION_ONGOING].led_states = (led_pattern_state_t *)led_radial12_notification_ongoing;

    led_radial12_conf[LED_PATTERN_NOTIFICATION_NEW].led_states_count = sizeof(led_radial12_notification_new) / sizeof(led_radial12_notification_new[0]);
    led_radial12_conf[LED_PATTERN_NOTIFICATION_NEW].led_states = (led_pattern_state_t *)led_radial12_notification_new;

    led_radial12_conf[LED_PATTERN_THINKING].led_states_count = sizeof(led_radial12_thinking) / sizeof(led_radial12_thinking[0]);
    led_radial12_conf[LED_PATTERN_THINKING].led_states = (led_pattern_state_t *)led_radial12_thinking;

    led_radial12_conf[LED_PATTERN_ALERT_SHORT].led_states_count = sizeof(led_radial12_alrt_short) / sizeof(led_radial12_alrt_short[0]);
    led_radial12_conf[LED_PATTERN_ALERT_SHORT].led_states = (led_pattern_state_t *)led_radial12_alrt_short;

    led_radial12_conf[LED_PATTERN_ALERT].led_states_count = sizeof(led_radial12_alrt) / sizeof(led_radial12_alrt[0]);
    led_radial12_conf[LED_PATTERN_ALERT].led_states = (led_pattern_state_t *)led_radial12_alrt;

    led_radial12_conf[LED_PATTERN_SETUP].led_states_count = sizeof(led_radial12_setup_mode) / sizeof(led_radial12_setup_mode[0]);
    led_radial12_conf[LED_PATTERN_SETUP].led_states = (led_pattern_state_t *)led_radial12_setup_mode;

    led_radial12_conf[LED_PATTERN_OFF].led_states_count = sizeof(led_radial12_off) / sizeof(led_radial12_off[0]);
    led_radial12_conf[LED_PATTERN_OFF].led_states = (led_pattern_state_t *)led_radial12_off;

    is_init_done = true;
}
