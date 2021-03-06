//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMGestureManager, NSMutableDictionary;

@interface SBFMotionGestureController : NSObject
{
    NSMutableDictionary *_observersByPriority;	// 8 = 0x8
    CMGestureManager *_motionGestureManager;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000003bc9f
- (void).cxx_destruct;	// IMP=0x000000000003c941
- (void)_removeGestureManager;	// IMP=0x000000000003c8cf
- (void)_addGestureManager;	// IMP=0x000000000003c6c9
- (void)_updateGestureManager;	// IMP=0x000000000003c668
- (id)_observersForPriority:(unsigned long long)arg1;	// IMP=0x000000000003c592
- (id)_highestPriorityObservers;	// IMP=0x000000000003c3d9
- (void)_enumerateObserversByPriority:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c2cb
- (_Bool)_hasObservers;	// IMP=0x000000000003c1f2
- (void)_notifyObserversOfGesture:(int)arg1;	// IMP=0x000000000003c02c
- (void)_removeGestureObserver:(id)arg1;	// IMP=0x000000000003bf0d
- (void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;	// IMP=0x000000000003be3c
- (void)removeGestureObserver:(id)arg1;	// IMP=0x000000000003be0e
- (void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;	// IMP=0x000000000003bde0
- (void)addGestureObserver:(id)arg1;	// IMP=0x000000000003bdcc
- (void)dealloc;	// IMP=0x000000000003bd8e
- (id)init;	// IMP=0x000000000003bd38

@end

