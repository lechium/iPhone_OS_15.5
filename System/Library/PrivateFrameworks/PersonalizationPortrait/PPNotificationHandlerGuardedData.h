//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet;

@interface PPNotificationHandlerGuardedData : NSObject
{
    _Bool _delayedFiringInProgress;	// 8 = 0x8
    double _lastFiringTimeSince1970;	// 16 = 0x10
    NSMapTable *_blockMap;	// 24 = 0x18
    NSMutableSet *_objects;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004368a
- (id)init;	// IMP=0x00000000000435f2

@end

