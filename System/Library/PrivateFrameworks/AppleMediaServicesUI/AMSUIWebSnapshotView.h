//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface AMSUIWebSnapshotView
{
    UIView *_snapshot;	// 8 = 0x8
    double _originalRatio;	// 16 = 0x10
    long long _originalInterfaceStyle;	// 24 = 0x18
    unsigned long long _visibilityModifiers;	// 32 = 0x20
    struct CGRect _originalSnapshotFrame;	// 40 = 0x28
}

+ (void)_screenCapFromView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009dbd2
+ (id)_imageViewForImage:(id)arg1;	// IMP=0x000000000009db85
- (void).cxx_destruct;	// IMP=0x000000000009e33e
@property(nonatomic) unsigned long long visibilityModifiers; // @synthesize visibilityModifiers=_visibilityModifiers;
@property(nonatomic) long long originalInterfaceStyle; // @synthesize originalInterfaceStyle=_originalInterfaceStyle;
@property(nonatomic) struct CGRect originalSnapshotFrame; // @synthesize originalSnapshotFrame=_originalSnapshotFrame;
@property(nonatomic) double originalRatio; // @synthesize originalRatio=_originalRatio;
@property(retain, nonatomic) UIView *snapshot; // @synthesize snapshot=_snapshot;
- (_Bool)_visibilityUnmodified;	// IMP=0x000000000009e25a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000009df34
- (void)layoutSubviews;	// IMP=0x000000000009d6be
- (void)_updateSnapshot:(id)arg1;	// IMP=0x000000000009d628
- (id)initWithView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009d3c9

@end
