//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject
{
    MTAlarmManager *_alarmManager;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000005edca5
- (void).cxx_destruct;	// IMP=0x00000000005ee2af
- (void)_updateAlarmStatusBarItem;	// IMP=0x00000000005edfa2
- (void)_nextAlarmChanged:(id)arg1;	// IMP=0x00000000005ede0b
- (id)init;	// IMP=0x00000000005edcfa

@end

