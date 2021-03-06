
#ifndef __REALTEK_FM_H
#define __REALTEK_FM_H





#define FM_FUNCTION_SUCCESS 0 
#define FM_FUNCTION_ERROR -EPERM
#define FM_FUNCTION_FULL_SEARCH_ERROR -EAGAIN



/** The following define the IOCTL command values via the ioctl macros */
#define	REALTEK_FM_IOCTL_BASE     'R'
#define	REALTEK_FM_IOCTL_ENABLE		 _IOW(REALTEK_FM_IOCTL_BASE, 0, int)
#define REALTEK_FM_IOCTL_GET_ENABLE  _IOW(REALTEK_FM_IOCTL_BASE, 1, int)
#define REALTEK_FM_IOCTL_SET_TUNE    _IOW(REALTEK_FM_IOCTL_BASE, 2, int)
#define REALTEK_FM_IOCTL_GET_FREQ    _IOW(REALTEK_FM_IOCTL_BASE, 3, int)
#define REALTEK_FM_IOCTL_SEARCH      _IOW(REALTEK_FM_IOCTL_BASE, 4, int[4])
#define REALTEK_FM_IOCTL_STOP_SEARCH _IOW(REALTEK_FM_IOCTL_BASE, 5, int)
#define REALTEK_FM_IOCTL_MUTE        _IOW(REALTEK_FM_IOCTL_BASE, 6, int)
#define REALTEK_FM_IOCTL_SET_VOLUME  _IOW(REALTEK_FM_IOCTL_BASE, 7, int)
#define REALTEK_FM_IOCTL_GET_VOLUME  _IOW(REALTEK_FM_IOCTL_BASE, 8, int)
#define REALTEK_FM_IOCTL_GET_STATUS  _IOW(REALTEK_FM_IOCTL_BASE, 9, int[2])
#define REALTEK_FM_IOCTL_FULL_SEARCH _IOW(REALTEK_FM_IOCTL_BASE, 10, int[100])

#endif



