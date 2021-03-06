//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIColor, UILabel;
@protocol SBUIPasscodeLockView, SBUIPasscodeLockViewDelegate;

@interface LUIPasscodeView : UIView
{
    double _backdropAlpha;	// 8 = 0x8
    UIColor *_backdropColorWithAlpha;	// 16 = 0x10
    id <SBUIPasscodeLockViewDelegate> _passcodeDelegate;	// 24 = 0x18
    UIView<SBUIPasscodeLockView> *_passCodeView;	// 32 = 0x20
    UILabel *_hintLabel;	// 40 = 0x28
    UIActivityIndicatorView *_spinner;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000035725
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIView<SBUIPasscodeLockView> *passCodeView; // @synthesize passCodeView=_passCodeView;
@property(nonatomic) __weak id <SBUIPasscodeLockViewDelegate> passcodeDelegate; // @synthesize passcodeDelegate=_passcodeDelegate;
- (void)stopAnimatingSpinner;	// IMP=0x0010000000035680
- (void)startAnimatingSpinner;	// IMP=0x0010000000035663
- (void)setAlpha:(double)arg1;	// IMP=0x0010000000035646
- (id)backdropColorWithAlpha;	// IMP=0x0010000000035631
- (double)backdropAlpha;	// IMP=0x001000000003561f
- (_Bool)resignFirstResponder;	// IMP=0x00100000000355d3
- (_Bool)becomeFirstResponder;	// IMP=0x00100000000355b6
- (void)setHintLabelText:(id)arg1;	// IMP=0x00100000000353dd
- (void)didMoveToWindow;	// IMP=0x001000000003538a
- (void)layoutSubviews;	// IMP=0x0010000000035040
@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView;
- (id)initWithFrame:(struct CGRect)arg1 withPasscodeLockViewForStyle:(int)arg2;	// IMP=0x0010000000034cdf

@end

