//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PUTileLayoutInfo, PUTilingView;

@interface PUTileController : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _detached;	// 9 = 0x9
    _Bool _shouldPreserveCurrentContent;	// 10 = 0xa
    _Bool _reusable;	// 11 = 0xb
    _Bool _wantsVisibleRectChanges;	// 12 = 0xc
    NSString *_reuseIdentifier;	// 16 = 0x10
    NSMutableArray *_reasonsToSuppressAnimatedUpdates;	// 24 = 0x18
    long long _animationCount;	// 32 = 0x20
    PUTilingView *_tilingView;	// 40 = 0x28
    PUTileLayoutInfo *_layoutInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000437362
@property(readonly, nonatomic) _Bool wantsVisibleRectChanges; // @synthesize wantsVisibleRectChanges=_wantsVisibleRectChanges;
@property(readonly, nonatomic) PUTileLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(readonly, nonatomic) __weak PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic, getter=isReusable) _Bool reusable; // @synthesize reusable=_reusable;
@property(retain, nonatomic) NSMutableArray *reasonsToSuppressAnimatedUpdates; // @synthesize reasonsToSuppressAnimatedUpdates=_reasonsToSuppressAnimatedUpdates;
@property(nonatomic) _Bool shouldPreserveCurrentContent; // @synthesize shouldPreserveCurrentContent=_shouldPreserveCurrentContent;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic, getter=isDetached) _Bool detached; // @synthesize detached=_detached;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) _Bool shouldSuppressAnimatedUpdates;
- (void)stopSuppressingAnimatedUpdatesWithReason:(id)arg1;	// IMP=0x000000000043721b
- (void)startSuppressingAnimatedUpdatesWithReason:(id)arg1;	// IMP=0x00000000004371a5
- (id)description;	// IMP=0x000000000043709a
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000437020
- (_Bool)adoptAssetTransitionInfo:(id)arg1;	// IMP=0x0000000000437018
- (id)generateAssetTransitionInfo;	// IMP=0x0000000000437010
- (void)setLayoutInfo:(id)arg1;	// IMP=0x0000000000436f75
- (void)setTilingView:(id)arg1;	// IMP=0x0000000000436f64
@property(readonly, nonatomic) _Bool shouldAvoidInPlaceSnapshottedFadeOut;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)reuseIfApplicable;	// IMP=0x0000000000436e7b
- (void)setPreloadedImage:(id)arg1;	// IMP=0x0000000000436e75
- (void)didChangeVisibleRect;	// IMP=0x0000000000436e6f
- (void)didChangeActive;	// IMP=0x0000000000436e69
- (void)didChangeAnimating;	// IMP=0x0000000000436e63
- (void)didEndAnimation:(long long)arg1;	// IMP=0x0000000000436d0f
- (long long)willBeginAnimation;	// IMP=0x0000000000436ccc
@property(readonly, nonatomic) struct CGRect visibleRect;
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x0000000000436be6
- (void)removeAllAnimations;	// IMP=0x0000000000436b6c
- (id)freeze;	// IMP=0x0000000000436b04
@property(readonly, nonatomic) _Bool isPresentationActive;
@property(readonly, nonatomic) PUTileLayoutInfo *presentationLayoutInfo;
- (void)prepareForReuse;	// IMP=0x000000000043696a
- (void)becomeReusable;	// IMP=0x00000000004368c8
- (void)addToTilingView:(id)arg1;	// IMP=0x000000000043684e
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000004367db
- (id)init;	// IMP=0x00000000004367c7

@end

