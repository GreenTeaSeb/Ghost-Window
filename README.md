# ghost-window

A simple ghost window for window managers to add in empy space if you need it

## Installation
1. To start just download the [binary](https://github.com/GreenTeaSeb/ghost-window/releases/download/v1.0/ghost_window) from the release tab

2. After you've downloaded it and placed it where you wish, you may add an allias if you wish to launch it quicker via terminal
	```
	echo "alias ghost='path to binary'" >> ~/.baschrc
	```

## key binding
For an easier usage, consider adding it to your keybinds
For example in sway:

	bindsym $mod+Insert exec .local/bin/ghoXst_window
		
Other keybinders are also usable

## Exiting
To exit it simply press ```esc``` or close it with your window closing key bind
