# Build Options
#   change to "no" to disable the options, or define them in the Makefile in 
#   the appropriate keymap folder that will get included automatically
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_mouse_keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_command
COMBO_ENABLE = no
NKRO_ENABLE = yes           # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
KEY_OVERRIDE_ENABLE = no    #  https://beta.docs.qmk.fm/using-qmk/software-features/feature_key_overrides 
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight. 
LEADER_ENABLE = yes         # https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_leader_key
MIDI_ENABLE = no
UNICODE_ENABLE = no        # For table flip emojis
UNICODEMAP_ENABLE = no
UCIS_ENABLE = no
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
TAP_DANCE_ENABLE = yes
CUSTOM_MATRIX = yes



# At kinesis/kint41/rules.mk they already set
# DEBOUNCE_TYPE = sym_eager_pk
