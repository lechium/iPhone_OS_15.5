//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCLSchoolModeManager;

@interface SCLDDaemon : NSObject
{
    SCLSchoolModeManager *_schoolModeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000016a2
@property(readonly, nonatomic) SCLSchoolModeManager *schoolModeManager; // @synthesize schoolModeManager=_schoolModeManager;
- (void)registerForLaunchEvents;	// IMP=0x00100000000015e1
- (void)start;	// IMP=0x00100000000014b3

@end
