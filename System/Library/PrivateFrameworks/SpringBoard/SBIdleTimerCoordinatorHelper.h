//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol SBIdleTimerCoordinating, SBIdleTimerProviding;

@interface SBIdleTimerCoordinatorHelper : NSObject
{
    id <SBIdleTimerProviding> _sourceProvider;	// 8 = 0x8
    id <SBIdleTimerCoordinating> _targetCoordinator;	// 16 = 0x10
    NSMapTable *_idleTimerCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000332a70
@property(readonly, nonatomic) NSMapTable *idleTimerCache; // @synthesize idleTimerCache=_idleTimerCache;
@property(nonatomic) __weak id <SBIdleTimerCoordinating> targetCoordinator; // @synthesize targetCoordinator=_targetCoordinator;
@property(nonatomic) __weak id <SBIdleTimerProviding> sourceProvider; // @synthesize sourceProvider=_sourceProvider;
- (id)_updateProviderInfo:(id)arg1 behavior:(id)arg2 reason:(id)arg3;	// IMP=0x000000000003b953
- (id)_updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3;	// IMP=0x000000000003b7dd
- (id)idleTimerProxyForProvider:(id)arg1;	// IMP=0x00000000003329f0
- (void)removeProvider:(id)arg1;	// IMP=0x0000000000332978
- (id)updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3;	// IMP=0x000000000003b7cb
- (void)bindProvider:(id)arg1 toSourceTimer:(id)arg2 behavior:(id)arg3 forReason:(id)arg4;	// IMP=0x000000000006c6b0
- (id)proposeProvider:(id)arg1 byCoordinator:(id)arg2 reason:(id)arg3;	// IMP=0x000000000033273f
- (id)proposeIdleTimerBehavior:(id)arg1 fromProvider:(id)arg2 reason:(id)arg3;	// IMP=0x000000000006bed6
- (_Bool)hasProvider:(id)arg1;	// IMP=0x00000000003326b5
- (id)initWithSourceProvider:(id)arg1;	// IMP=0x0000000000332627
- (id)init;	// IMP=0x0000000000332613

@end
