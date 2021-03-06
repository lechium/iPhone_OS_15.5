//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton, UIStackView;

@interface LUILogOptionsView : UIView
{
    UIStackView *_buttonStackView;	// 8 = 0x8
    UIButton *_tenMinutesLogButton;	// 16 = 0x10
    UIButton *_halfHourButton;	// 24 = 0x18
    UIButton *_hourButton;	// 32 = 0x20
    UIButton *_lastDayButton;	// 40 = 0x28
    UIButton *_streamButton;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000a154
@property(retain, nonatomic) UIButton *streamButton; // @synthesize streamButton=_streamButton;
@property(retain, nonatomic) UIButton *lastDayButton; // @synthesize lastDayButton=_lastDayButton;
@property(retain, nonatomic) UIButton *hourButton; // @synthesize hourButton=_hourButton;
@property(retain, nonatomic) UIButton *halfHourButton; // @synthesize halfHourButton=_halfHourButton;
@property(retain, nonatomic) UIButton *tenMinutesLogButton; // @synthesize tenMinutesLogButton=_tenMinutesLogButton;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
- (id)_createButtonWithTitle:(id)arg1;	// IMP=0x0000000000009db0
- (id)_createButtonStackView;	// IMP=0x0000000000009ba4
- (void)layoutSubviews;	// IMP=0x00000000000099e6
- (void)_setup;	// IMP=0x000000000000998e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000009931

@end

