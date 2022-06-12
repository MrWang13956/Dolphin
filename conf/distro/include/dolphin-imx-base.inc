require conf/distro/poky.conf

DISTRO = "imx-nxp"
DISTRO_NAME = "NXP i.MX Release Distro"
DISTRO_VERSION = "5.4-zeus"

MAINTAINER = "NXP <lauren.post@nxp.com>"

REMOVE_VULKAN_FEATURE = "vulkan"
POKY_DEFAULT_DISTRO_FEATURES_remove      = "wayland ${REMOVE_VULKAN_FEATURE}"

INHERIT_remove = "uninative"
