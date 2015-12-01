#ifndef _LINUX_MAJOR_H
#define _LINUX_MAJOR_H
#include <linux/fs.h>
/* Amlogic extension */
#define AML_BASE			CHRDEV_MAJOR_HASH_SIZE
#define HDMI_MAJOR			1+AML_BASE
#define AUDIODSP_MAJOR		2+AML_BASE
#define AMSTREAM_MAJOR		3+AML_BASE
#define UIO_MAJOR			4+AML_BASE
#define USB_DEV_EP_MAJOR	5+AML_BASE
#define TV_CONF_MAJOR		6+AML_BASE
#define HIDRAW_MAJOR		7+AML_BASE
#define HWJPEGDEC_MAJOR		8+AML_BASE
#define AMVIDEO_MAJOR		9+AML_BASE
#define AML_DEMOD_MAJOR		10+AML_BASE
#define AMAUDIO_MAJOR		11+AML_BASE
#define AMVIDEO2_MAJOR		12+AML_BASE
#define TV2_CONF_MAJOR		13+AML_BASE
#define BLOCK_EXT_MAJOR		14+AML_BASE
#define SCSI_OSD_MAJOR		15+AML_BASE	/* open-osd's OSD scsi device */

#endif
