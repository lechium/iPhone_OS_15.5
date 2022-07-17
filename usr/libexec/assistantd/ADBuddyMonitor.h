//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADBuddyMonitor : NSObject
{
    _Bool _isPastBuddy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00400000000f648e
- (void).cxx_destruct;	// IMP=0x00200000000f6806
- (_Bool)isPastBuddy;	// IMP=0x00100000000f67fd
- (_Bool)_checkBuddyState;	// IMP=0x00100000000f67f5
- (void)_updateBuddyState;	// IMP=0x00100000000f668e
- (void)dealloc;	// IMP=0x00100000000f665f
- (id)init;	// IMP=0x00100000000f6513

@end
