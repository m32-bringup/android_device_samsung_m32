# sec_touchpad.idc
# Prevent the sec_touchpad (INPUT_PROP_POINTER) from showing a mouse cursor.
# Even though the kernel sets INPUT_PROP_POINTER on this node, it is an
# internal touchpad, not a user-visible pointer device.
device.internal = 1
