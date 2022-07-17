//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MTShadowView, NSMapTable, _SFDimmingButton;

@interface SFStepperView : UIView
{
    UIView *_controlsContainer;	// 8 = 0x8
    MTShadowView *_shadowView;	// 16 = 0x10
    NSMapTable *_buttonToLongestStringMap;	// 24 = 0x18
    _SFDimmingButton *_incrementButton;	// 32 = 0x20
    _SFDimmingButton *_decrementButton;	// 40 = 0x28
    _SFDimmingButton *_resetButton;	// 48 = 0x30
    _SFDimmingButton *_doneButton;	// 56 = 0x38
}

+ (id)_buttonsFont;	// IMP=0x00000000000aebf5
- (void).cxx_destruct;	// IMP=0x00000000000af388
@property(readonly, nonatomic) _SFDimmingButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) _SFDimmingButton *resetButton; // @synthesize resetButton=_resetButton;
@property(readonly, nonatomic) _SFDimmingButton *decrementButton; // @synthesize decrementButton=_decrementButton;
@property(readonly, nonatomic) _SFDimmingButton *incrementButton; // @synthesize incrementButton=_incrementButton;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000af2bf
- (void)setLongestTitle:(id)arg1 forButton:(id)arg2;	// IMP=0x00000000000aee9e
- (void)layoutSubviews;	// IMP=0x00000000000aec7b
- (id)initWithFrame:(struct CGRect)arg1 includingResetButton:(_Bool)arg2;	// IMP=0x00000000000ad5ca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ad5b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ad587

@end
