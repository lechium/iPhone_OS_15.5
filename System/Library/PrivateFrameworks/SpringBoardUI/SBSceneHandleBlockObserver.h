//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/BSInvalidatable-Protocol.h>
#import <SpringBoardUI/SBSceneHandleObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBSceneHandleBlockObserver : NSObject <BSInvalidatable, SBSceneHandleObserver>
{
    NSMutableDictionary *_createBlocks;	// 8 = 0x8
    NSMutableDictionary *_destroyBlocks;	// 16 = 0x10
    NSMutableDictionary *_didUpdateContentStateBlocks;	// 24 = 0x18
    NSMutableDictionary *_didUpdateSettingsBlocks;	// 32 = 0x20
    NSMutableDictionary *_didUpdateClientSettingsBlocks;	// 40 = 0x28
    NSMutableDictionary *_didUpdatePairingStatusBlocks;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000558e
- (void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;	// IMP=0x000000000000542a
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;	// IMP=0x000000000000529d
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;	// IMP=0x0000000000005110
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;	// IMP=0x0000000000004fbf
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x0000000000004e5b
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x0000000000004cf7
- (void)invalidate;	// IMP=0x0000000000004c7d
- (void)removeObserverForToken:(id)arg1;	// IMP=0x0000000000004c10
- (id)observeDidUpdatePairingStatusForExternalIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004b5b
- (id)observeDidUpdateClientSettings:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004aa6
- (id)observeDidUpdateSettings:(CDUnknownBlockType)arg1;	// IMP=0x00000000000049f1
- (id)observeDidUpdateContentState:(CDUnknownBlockType)arg1;	// IMP=0x000000000000493c
- (id)observeDestroy:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004887
- (id)observeCreate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000047d2
- (void)dealloc;	// IMP=0x000000000000472e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
