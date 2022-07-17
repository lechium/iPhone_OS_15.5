//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AVObservationController : NSObject
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    NSMutableDictionary *_proxyObserversByTokens;	// 16 = 0x10
    NSMutableDictionary *_notificationObservers;	// 24 = 0x18
    NSMutableDictionary *_notificationCenters;	// 32 = 0x20
    id _owner;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000028873
- (void)_stopAllObservation;	// IMP=0x000000000002854c
- (void)stopAllObservation;	// IMP=0x000000000002851a
- (void)stopObserving:(id)arg1;	// IMP=0x0000000000028478
- (void)startObservingNotificationForName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000281eb
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(_Bool)arg3 observationHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000281c6
- (id)startObserving:(id)arg1 keyPath:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000280db
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027f95
- (id)startObserving:(id)arg1 keyPath:(id)arg2 includeInitialValue:(_Bool)arg3 observationHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000027ea2
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(_Bool)arg3 includeChanges:(_Bool)arg4 observationHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000027b25
- (void)dealloc;	// IMP=0x00000000000279f0
- (id)initWithOwner:(id)arg1;	// IMP=0x0000000000027900

@end
