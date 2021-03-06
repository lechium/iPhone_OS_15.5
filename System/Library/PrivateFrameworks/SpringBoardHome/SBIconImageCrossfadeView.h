//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIView;
@protocol SBCrossfadingIconImageSource;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView
{
    double _containerScaleX;	// 8 = 0x8
    double _containerScaleY;	// 16 = 0x10
    _Bool _masksCorners;	// 24 = 0x18
    _Bool _performsTrueCrossfade;	// 25 = 0x19
    unsigned long long _crossfadeStyle;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    id <SBCrossfadingIconImageSource> _iconImageSource;	// 48 = 0x30
    UIView *_iconImageView;	// 56 = 0x38
    UIView *_crossfadeView;	// 64 = 0x40
    UIView *_backgroundView;	// 72 = 0x48
    UIView *_crossfadeContainerView;	// 80 = 0x50
    double _morphFraction;	// 88 = 0x58
    struct CGPoint _stretchAnchorPoint;	// 96 = 0x60
}

+ (Class)_containerViewClass;	// IMP=0x00000000002434c5
- (void).cxx_destruct;	// IMP=0x00000000002446db
@property(readonly, nonatomic) double morphFraction; // @synthesize morphFraction=_morphFraction;
@property(readonly, nonatomic) UIView *crossfadeContainerView; // @synthesize crossfadeContainerView=_crossfadeContainerView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIView *crossfadeView; // @synthesize crossfadeView=_crossfadeView;
@property(readonly, nonatomic) UIView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) id <SBCrossfadingIconImageSource> iconImageSource; // @synthesize iconImageSource=_iconImageSource;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long crossfadeStyle; // @synthesize crossfadeStyle=_crossfadeStyle;
@property(nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
- (void)_applyCornerRadius:(double)arg1;	// IMP=0x00000000002445bb
- (void)_setCornerRadiusEnabled:(_Bool)arg1;	// IMP=0x00000000002444e5
- (void)_updateCornerMask;	// IMP=0x000000000024449f
- (void)_applyCrossfadeScaleX:(double)arg1 scaleY:(double)arg2;	// IMP=0x000000000024443d
- (void)cleanup;	// IMP=0x0000000000244399
- (void)setCrossfadeViewFadeFraction:(double)arg1;	// IMP=0x0000000000244338
- (void)setSourceFadeFraction:(double)arg1;	// IMP=0x00000000002442bd
- (void)setMorphFraction:(double)arg1;	// IMP=0x0000000000244271
- (void)setAppSnapshotCornerRadius:(double)arg1;	// IMP=0x0000000000244230
- (void)setCrossfadeFraction:(double)arg1;	// IMP=0x00000000002441f0
- (void)layoutSubviews;	// IMP=0x00000000002439ed
- (void)prepareGeometry;	// IMP=0x000000000024383b
- (id)initWithSource:(id)arg1 crossfadeView:(id)arg2;	// IMP=0x00000000002434d6

@end

