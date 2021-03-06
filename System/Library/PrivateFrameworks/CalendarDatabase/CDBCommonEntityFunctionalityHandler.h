//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CDBCommonEntityFunctionalityHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_lock;	// 8 = 0x8
    NSMutableSet *_destructionObservers;	// 16 = 0x10
}

+ (void)_notifyDestructionObservers:(id)arg1;	// IMP=0x000000000007e25f
- (void).cxx_destruct;	// IMP=0x000000000007e39e
@property(retain, nonatomic) NSMutableSet *destructionObservers; // @synthesize destructionObservers=_destructionObservers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lock; // @synthesize lock=_lock;
- (void)notifyOfEntityDestruction;	// IMP=0x000000000007e09f
- (void)removeDestructionObserver:(struct CalRelation *)arg1;	// IMP=0x000000000007df85
- (void)addDestructionObserver:(struct CalRelation *)arg1;	// IMP=0x000000000007de6b
- (void)dealloc;	// IMP=0x000000000007dde0
- (id)init;	// IMP=0x000000000007dd1c

@end

