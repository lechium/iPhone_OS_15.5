//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController
{
    id <SBLockScreenEmergencyCallViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000591083
@property(nonatomic) __weak id <SBLockScreenEmergencyCallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1;	// IMP=0x0000000000591041
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000591039
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double *)arg2;	// IMP=0x0000000000590f67
- (void)setBackgroundStyle:(long long)arg1;	// IMP=0x0000000000590f38
- (void)dismiss;	// IMP=0x0000000000590e66
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000590cf1

@end
