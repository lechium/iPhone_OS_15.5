//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmProxy : NSObject
{
    id _internal;	// 8 = 0x8
    void *fLocationdConnection;	// 16 = 0x10
    int fAlarmCounter;	// 24 = 0x18
    NSMutableDictionary *fAlarms;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *fReplyQueue;	// 40 = 0x28
    _Bool fAlarmAvailable;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000186c10
- (void)stopListeningForActivityAlarm:(id)arg1;	// IMP=0x0000000000186f4d
- (void)listenForActivityAlarm:(id)arg1;	// IMP=0x0000000000186ca9
- (_Bool)activityAlarmAvailable;	// IMP=0x0000000000186c85
- (void)dealloc;	// IMP=0x0000000000186b77
- (id)init;	// IMP=0x000000000018620d

@end

