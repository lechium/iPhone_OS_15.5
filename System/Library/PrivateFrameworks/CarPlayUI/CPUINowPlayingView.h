//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CPUIPlayModeControlView, CPUIProgressView, CPUIShadowImageView, CPUISongDetailsView, CPUITransportControlView, NSArray, NSLayoutConstraint, UIFocusContainerGuide;
@protocol CPUINowPlayingLayoutProtocol;

@interface CPUINowPlayingView : UIView
{
    id <CPUINowPlayingLayoutProtocol> _nowPlayingLayout;	// 8 = 0x8
    CPUITransportControlView *_transportControlView;	// 16 = 0x10
    CPUIPlayModeControlView *_playModeControlView;	// 24 = 0x18
    CPUIProgressView *_progressView;	// 32 = 0x20
    CPUISongDetailsView *_songDetailsView;	// 40 = 0x28
    CPUIShadowImageView *_artworkViewBrick;	// 48 = 0x30
    UIFocusContainerGuide *_controlsFocusContainerGuide;	// 56 = 0x38
    UIFocusContainerGuide *_bottomRegionFocusContainerGuide;	// 64 = 0x40
    NSArray *_activeConstraints;	// 72 = 0x48
    NSArray *_verticalSpacerLayoutGuides;	// 80 = 0x50
    NSLayoutConstraint *_songDetailsViewHeightConstraint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000026dbd
@property(retain, nonatomic) NSLayoutConstraint *songDetailsViewHeightConstraint; // @synthesize songDetailsViewHeightConstraint=_songDetailsViewHeightConstraint;
@property(retain, nonatomic) NSArray *verticalSpacerLayoutGuides; // @synthesize verticalSpacerLayoutGuides=_verticalSpacerLayoutGuides;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) UIFocusContainerGuide *bottomRegionFocusContainerGuide; // @synthesize bottomRegionFocusContainerGuide=_bottomRegionFocusContainerGuide;
@property(retain, nonatomic) UIFocusContainerGuide *controlsFocusContainerGuide; // @synthesize controlsFocusContainerGuide=_controlsFocusContainerGuide;
@property(readonly, nonatomic) CPUIShadowImageView *artworkViewBrick; // @synthesize artworkViewBrick=_artworkViewBrick;
@property(readonly, nonatomic) CPUISongDetailsView *songDetailsView; // @synthesize songDetailsView=_songDetailsView;
@property(readonly, nonatomic) CPUIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) CPUIPlayModeControlView *playModeControlView; // @synthesize playModeControlView=_playModeControlView;
@property(readonly, nonatomic) CPUITransportControlView *transportControlView; // @synthesize transportControlView=_transportControlView;
@property(readonly, nonatomic) id <CPUINowPlayingLayoutProtocol> nowPlayingLayout; // @synthesize nowPlayingLayout=_nowPlayingLayout;
- (id)_constraintsForNowPlayingLayout:(id)arg1;	// IMP=0x00000000000245bb
- (id)_verticalSpacerLayoutGuidesForNowPlayingLayout:(id)arg1;	// IMP=0x00000000000241e4
- (void)recalculateLayout:(_Bool)arg1 allowsAlbumArt:(_Bool)arg2 hasDataSource:(_Bool)arg3 viewArea:(struct CGRect)arg4 safeArea:(struct CGRect)arg5 rightHandDrive:(_Bool)arg6;	// IMP=0x0000000000023e99
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000023b0b

@end

