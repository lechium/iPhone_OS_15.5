//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel, UIView, _UIPortalView;

@interface _UIPrototypingMenuSlider
{
    _Bool _didBringKnobToFront;	// 8 = 0x8
    double _stepSize;	// 16 = 0x10
    UIView *_knobView;	// 24 = 0x18
    UIImageView *_knobBGView;	// 32 = 0x20
    _UIPortalView *_knobPortal;	// 40 = 0x28
    UILabel *_currentValueLabel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001100054
@property(retain, nonatomic) UILabel *currentValueLabel; // @synthesize currentValueLabel=_currentValueLabel;
@property(retain, nonatomic) _UIPortalView *knobPortal; // @synthesize knobPortal=_knobPortal;
@property(retain, nonatomic) UIImageView *knobBGView; // @synthesize knobBGView=_knobBGView;
@property(retain, nonatomic) UIView *knobView; // @synthesize knobView=_knobView;
@property(nonatomic) double stepSize; // @synthesize stepSize=_stepSize;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000010fff82
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010fff3a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010ffef2
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010ffea7
- (struct UIEdgeInsets)_thumbHitEdgeInsets;	// IMP=0x00000000010ffd94
- (void)_setKnobViewProminent:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000010ff941
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x00000000010ff37a
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x00000000010ff2b7
- (void)layoutSubviews;	// IMP=0x00000000010ff235
- (void)decrement;	// IMP=0x00000000010ff1d4
- (void)increment;	// IMP=0x00000000010ff17a
@property(readonly, nonatomic) struct CGPoint knobCenter;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000010fee3c

@end

