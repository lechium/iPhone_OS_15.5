//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKBehavior.h>

@interface _HKBehavior (HKSPSleep)
- (_Bool)hksp_isDeviceUnlocked;	// IMP=0x0000000000016db5
- (void)hksp_activePairedDeviceHasSleepAppInstalledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016b5f
@property(nonatomic) _Bool hksp_isRunningUnitTests;
- (_Bool)hksp_activePairedDeviceHasHomeButton;	// IMP=0x0000000000016a12
- (_Bool)_hksp_activePairedDeviceSupportsCapability:(id)arg1;	// IMP=0x0000000000016979
- (_Bool)hksp_activePairedDeviceSupportsFocusMode;	// IMP=0x0000000000016918
- (_Bool)hksp_activePairedDeviceSupportsSleep;	// IMP=0x00000000000168b7
- (_Bool)hksp_hasActivePairedDevice;	// IMP=0x000000000001684d
- (_Bool)hksp_demoMode;	// IMP=0x0000000000016814
- (_Bool)hksp_supportsSleep;	// IMP=0x0000000000016713
@end
