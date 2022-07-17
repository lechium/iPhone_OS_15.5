//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <CameraUI/CAMSemanticStyleSliderDelegate-Protocol.h>
#import <CameraUI/UIGestureRecognizerDelegate-Protocol.h>

@class CAMSemanticStyle, CAMSemanticStyleSlider, CEKEdgeGradientView, NSString, UIButton, UILabel, UIView;

@interface CAMSemanticStyleControl : UIControl <UIGestureRecognizerDelegate, CAMSemanticStyleSliderDelegate>
{
    CAMSemanticStyle *_semanticStyle;	// 8 = 0x8
    CAMSemanticStyleSlider *__toneSlider;	// 16 = 0x10
    CAMSemanticStyleSlider *__warmthSlider;	// 24 = 0x18
    UILabel *__descriptionLabel;	// 32 = 0x20
    UIButton *__resetButton;	// 40 = 0x28
    UIView *__gradientContainer;	// 48 = 0x30
    CEKEdgeGradientView *__edgeGradients;	// 56 = 0x38
    struct {
        double startInset;
        double endInset;
    } _gradientInsets;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a2ca1
@property(readonly, nonatomic) CEKEdgeGradientView *_edgeGradients; // @synthesize _edgeGradients=__edgeGradients;
@property(readonly, nonatomic) UIView *_gradientContainer; // @synthesize _gradientContainer=__gradientContainer;
@property(readonly, nonatomic) UIButton *_resetButton; // @synthesize _resetButton=__resetButton;
@property(readonly, nonatomic) UILabel *_descriptionLabel; // @synthesize _descriptionLabel=__descriptionLabel;
@property(readonly, nonatomic) CAMSemanticStyleSlider *_warmthSlider; // @synthesize _warmthSlider=__warmthSlider;
@property(readonly, nonatomic) CAMSemanticStyleSlider *_toneSlider; // @synthesize _toneSlider=__toneSlider;
@property(nonatomic) CDStruct_c3b9c2ee gradientInsets; // @synthesize gradientInsets=_gradientInsets;
@property(retain, nonatomic) CAMSemanticStyle *semanticStyle; // @synthesize semanticStyle=_semanticStyle;
- (void)sliderWillCollapse:(id)arg1;	// IMP=0x00000000000a2bf0
- (void)sliderWillExpand:(id)arg1;	// IMP=0x00000000000a2b97
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000a2adf
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000a2a9b
- (void)_handleResetMenuItem:(id)arg1;	// IMP=0x00000000000a29f2
- (void)_handleResetButtonReleased:(id)arg1;	// IMP=0x00000000000a27e9
- (void)_handleSliderDidChangeValue:(id)arg1;	// IMP=0x00000000000a26a2
- (void)_updateSubviewsVisibilityWithDuration:(double)arg1 delay:(double)arg2;	// IMP=0x00000000000a232c
- (void)setSemanticStyle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000a20ad
- (void)layoutSubviews;	// IMP=0x00000000000a1ae9
- (void)_updateResetButtonImage;	// IMP=0x00000000000a1a02
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000a19f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a1583

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
