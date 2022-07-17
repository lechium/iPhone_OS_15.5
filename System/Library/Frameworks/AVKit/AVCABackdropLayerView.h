//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, NSHashTable, UIColor;

__attribute__((visibility("hidden")))
@interface AVCABackdropLayerView : UIView
{
    _Bool _forceLowQualityEffect;	// 8 = 0x8
    UIColor *_customBackgroundColor;	// 16 = 0x10
    AVCABackdropLayerView *_groupLeader;	// 24 = 0x18
    NSHashTable *_dependents;	// 32 = 0x20
    long long _activeBackdropEffect;	// 40 = 0x28
}

+ (id)reducedTransparencyColor;	// IMP=0x000000000007b7cf
+ (id)colorMatrixFilter;	// IMP=0x000000000007b79f
+ (id)averageFilter;	// IMP=0x000000000007b76f
+ (id)blurFilter;	// IMP=0x000000000007b73f
+ (Class)layerClass;	// IMP=0x000000000007b72e
- (void).cxx_destruct;	// IMP=0x000000000007b682
@property(nonatomic) long long activeBackdropEffect; // @synthesize activeBackdropEffect=_activeBackdropEffect;
@property(readonly, nonatomic) NSHashTable *dependents; // @synthesize dependents=_dependents;
@property(nonatomic) __weak AVCABackdropLayerView *groupLeader; // @synthesize groupLeader=_groupLeader;
@property(copy, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) _Bool forceLowQualityEffect; // @synthesize forceLowQualityEffect=_forceLowQualityEffect;
- (void)_enumerateDependents:(CDUnknownBlockType)arg1;	// IMP=0x000000000007b4bf
- (void)_ensureDependents;	// IMP=0x000000000007b474
- (void)_updateFilters;	// IMP=0x000000000007a91a
- (void)removeDependent:(id)arg1;	// IMP=0x000000000007a848
- (void)addDependent:(id)arg1;	// IMP=0x000000000007a776
- (void)updateGroupLeader;	// IMP=0x000000000007a6b1
@property(nonatomic, getter=isCaptureOnly) _Bool captureOnly;
- (void)updateActiveBackdropEffectIfGroupLeader;	// IMP=0x000000000007a295
- (void)didMoveToSuperview;	// IMP=0x000000000007a254
- (void)didMoveToWindow;	// IMP=0x000000000007a213
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000007a20b
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000007a203
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007a1a4

// Remaining properties
@property(readonly, nonatomic) CABackdropLayer *layer; // @dynamic layer;

@end
