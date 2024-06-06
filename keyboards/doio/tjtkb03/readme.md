# doio/tjtkb03
This is a port I made starting with KB04.  

NOTE:  The LED doesn't work

NOTE2:  Via only works by loading the kb04-01-convert-to-03.json file in design mode.  This firmware is using the device id 0401 because that was the only way I could get it to show up in via.  Apparently the device id needs to exist and be compiled into via?

* Keyboard Maintainer: [jesstedder](https://github.com/jesstedder)
* Hardware Supported: DOIO Knob Board - KB03
* Hardware Availability: [keebmonkey.com](https://www.keebmonkey.com/products/megalodon-dual-layer-knob-macro-pad)

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb doio/tjtkb03 -km default

Flashing example for this keyboard:

    qmk flash -kb doio/tjtkb03 -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (1! key) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
