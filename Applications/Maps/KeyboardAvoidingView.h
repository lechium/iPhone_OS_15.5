//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface KeyboardAvoidingView : UIView
{
    float _constraintPriority;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    NSLayoutConstraint *_leadingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_trailingConstraint;	// 32 = 0x20
    NSLayoutConstraint *_topConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bottomConstraint;	// 48 = 0x30
}

+ (void)startObservingKeyboard;	// IMP=0x00400000007211ea
- (void).cxx_destruct;	// IMP=0x0020000000722094
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) float constraintPriority; // @synthesize constraintPriority=_constraintPriority;
- (void)updateForKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0010000000721db4
- (void)keyboardWillOrDidChangeFrame:(id)arg1;	// IMP=0x0010000000721cf5
- (void)removeConstraints;	// IMP=0x0010000000721b67
- (void)addConstraints;	// IMP=0x00100000007217c7
- (void)layoutSubviews;	// IMP=0x0010000000721786
- (void)updateConstraints;	// IMP=0x0010000000721745
- (void)updateForKeyboardFrame;	// IMP=0x00100000007216c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000007213c4
- (id)init;	// IMP=0x0010000000721390
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000072137c
- (id)initWithContentView:(id)arg1;	// IMP=0x001000000072134a
- (id)initWithContentView:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x001000000072120c

@end
