## chew

![chew](imgur.com image replace me!)




### Handedness

Set it with the [EEPROM](https://docs.qmk.fm/#/feature_split_keyboard?id=handedness-by-eeprom) method.
Move into the default keymap folder and flash one time both sides with these commands:

`qmk compile && qmk flash -bl uf2-split-left`  
`qmk compile && qmk flash -bl uf2-split-right`


_A short description of the keyboard/project_

- Keyboard Maintainer: [Florent](https://github.com/flinguenheld/)
- Hardware Supported: _The PCBs, controllers supported_
- Hardware Availability: _Links to where you can find this hardware_

Make example for this keyboard (after setting up your build environment):

    make chew:default

Flashing example for this keyboard:

    make chew:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

- **Physical reset button**: Press twice the button on the PCB
- **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
