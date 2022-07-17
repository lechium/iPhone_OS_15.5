//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/_SFSettingsAlertStepperConfiguration-Protocol.h>

@class NSString, _SFSettingsAlertButton;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertStepper <_SFSettingsAlertStepperConfiguration>
{
    _SFSettingsAlertButton *_incrementButton;	// 48 = 0x30
    _SFSettingsAlertButton *_decrementButton;	// 56 = 0x38
    _SFSettingsAlertButton *_resetButton;	// 64 = 0x40
    long long _value;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000efc0e
@property(readonly, nonatomic) long long value; // @synthesize value=_value;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000efb97
- (id)_button:(long long)arg1;	// IMP=0x00000000000efb6c
- (void)setEnabled:(_Bool)arg1 forButton:(long long)arg2;	// IMP=0x00000000000efb1d
- (void)setText:(id)arg1 forButton:(long long)arg2;	// IMP=0x00000000000efaa5
- (void)setImage:(id)arg1 forButton:(long long)arg2;	// IMP=0x00000000000efa2d
- (void)_resetTapped:(id)arg1;	// IMP=0x00000000000efa07
- (void)_decrementTapped:(id)arg1;	// IMP=0x00000000000ef9e1
- (void)_incrementTapped:(id)arg1;	// IMP=0x00000000000ef9bb
- (id)initUsingResetButton:(_Bool)arg1 usingTopSeparator:(_Bool)arg2;	// IMP=0x00000000000eeea0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000eee3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
