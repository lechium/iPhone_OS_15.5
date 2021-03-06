//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGComponentObserver-Protocol.h>

@class NSMapTable, NSMutableArray, NSMutableIndexSet, PXGEffectComponent, PXGLoadingStatusComponent;
@protocol OS_dispatch_queue;

@interface PXGEntityManager : NSObject <PXGComponentObserver>
{
    NSMapTable *_observersByComponent;	// 8 = 0x8
    NSMapTable *_componentByClass;	// 16 = 0x10
    NSMutableArray *_components;	// 24 = 0x18
    NSMapTable *_componentByDataStore;	// 32 = 0x20
    NSMutableIndexSet *_reusableEntityIDs;	// 40 = 0x28
    long long _componentsPerformingChangesCount;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    long long _capacity;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000803cc
@property(nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)componentDidPerformChanges:(id)arg1;	// IMP=0x0000000000080263
- (void)componentWillPerformChanges:(id)arg1;	// IMP=0x0000000000080259
- (void)registerObserver:(id)arg1 forComponents:(id)arg2;	// IMP=0x0000000000080040
- (void)_notifyChangesForComponent:(id)arg1;	// IMP=0x000000000007fede
- (_Bool)_hasObserversForComponent:(id)arg1;	// IMP=0x000000000007fe92
- (id)componentsForComponentClasses:(id)arg1;	// IMP=0x000000000007fe33
- (id)componentForClass:(Class)arg1;	// IMP=0x000000000007fd43
- (void)_configureComponent:(id)arg1;	// IMP=0x000000000007fc83
- (void)cleanupUnusedObjects;	// IMP=0x000000000007fb5a
- (void)destroyEntities:(const CDStruct_6238c8e0 *)arg1 count:(long long)arg2;	// IMP=0x000000000007f94c
- (void)destroyEntity:(CDStruct_6238c8e0)arg1;	// IMP=0x000000000007f923
- (void)createEntitiesWithCount:(long long)arg1 addingToArray:(CDStruct_6238c8e0 *)arg2;	// IMP=0x000000000007f7d9
- (CDStruct_6238c8e0)createEntity;	// IMP=0x000000000007f7ab
- (id)description;	// IMP=0x000000000007f501
- (id)init;	// IMP=0x000000000007f487
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000007f36b
@property(readonly, nonatomic) PXGLoadingStatusComponent *loadingStatus;
@property(readonly, nonatomic) PXGEffectComponent *effectComponent;

@end

