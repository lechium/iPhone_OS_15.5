//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SUICAudioPowerLevelLinearConverter : NSObject
{
}

+ (float)_expectedLinearInputPowerLevelMaximum;	// IMP=0x0000000000011a43
+ (float)_adjustedLinearPowerLevel:(float)arg1 isInput:(_Bool)arg2;	// IMP=0x0000000000011a06
+ (float)linearValueForOutputPowerLevel:(float)arg1;	// IMP=0x00000000000119ed
+ (float)linearValueForInputPowerLevel:(float)arg1;	// IMP=0x00000000000119d1
+ (float)_linearValueForPowerLevel:(float)arg1 shouldAdjustForDeviceType:(_Bool)arg2 isInput:(_Bool)arg3;	// IMP=0x0000000000011979

@end
