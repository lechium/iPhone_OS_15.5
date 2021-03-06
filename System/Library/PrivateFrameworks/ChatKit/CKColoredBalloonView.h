//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKBalloonImageView, CKGradientView, UIView;
@protocol CKGradientReferenceView;

@interface CKColoredBalloonView
{
    _Bool _wantsGradient;	// 8 = 0x8
    CKGradientView *_gradientView;	// 16 = 0x10
    CKBalloonImageView *_mask;	// 24 = 0x18
    CKBalloonImageView *_effectViewMask;	// 32 = 0x20
    struct CGRect _gradientOverrideFrame;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003d0cc6
@property(retain, nonatomic) CKBalloonImageView *effectViewMask; // @synthesize effectViewMask=_effectViewMask;
@property(retain, nonatomic) CKBalloonImageView *mask; // @synthesize mask=_mask;
@property(nonatomic) struct CGRect gradientOverrideFrame; // @synthesize gradientOverrideFrame=_gradientOverrideFrame;
@property(nonatomic) _Bool wantsGradient; // @synthesize wantsGradient=_wantsGradient;
@property(retain, nonatomic) CKGradientView *gradientView; // @synthesize gradientView=_gradientView;
- (void)setEffectViewMaskImage:(id)arg1;	// IMP=0x00000000003d08dd
- (void)clearFilters;	// IMP=0x00000000003d05c1
- (void)addFilter:(id)arg1;	// IMP=0x00000000003d01d5
- (struct CKBalloonDescriptor_t)balloonDescriptor;	// IMP=0x00000000003d00b9
- (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1;	// IMP=0x00000000003d0027
- (void)updateWantsGradient;	// IMP=0x00000000003cfeb0
@property(readonly, nonatomic) _Bool hasBackground;
@property(retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
- (void)setColor:(BOOL)arg1;	// IMP=0x00000000003cfd76
- (id)overlayColor;	// IMP=0x00000000003cfce2
- (_Bool)needsGroupOpacity;	// IMP=0x00000000003cfca9
- (void)setCanUseOpaqueMask:(_Bool)arg1;	// IMP=0x00000000003cfc3a
- (void)setHasTail:(_Bool)arg1;	// IMP=0x00000000003cfbdc
- (void)prepareForDisplay;	// IMP=0x00000000003cf496
- (void)prepareForReuse;	// IMP=0x00000000003cf453
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000003cf3cc
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000003cf345
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x00000000003cf246
- (void)layoutSubviews;	// IMP=0x00000000003cefaa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003cee91
- (id)description;	// IMP=0x00000000003cedde
- (void)configureForComposition:(id)arg1;	// IMP=0x00000000000abb11
- (void)configureForMessagePart:(id)arg1;	// IMP=0x000000000037b9c3

@end

