//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UITextField, UIView, _UIAlertControllerTextField;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldView
{
    UIView *_containerView;	// 120 = 0x78
    _UIAlertControllerTextField *_textField;	// 128 = 0x80
    NSArray *_containerViewConstraints;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000047b9d
@property(retain, nonatomic) UIView *containerView;
@property(readonly) UITextField *textField;
- (id)_textFieldFont;	// IMP=0x0000000000047a66
- (double)_borderWidth;	// IMP=0x0000000000047a32
- (void)_loadConstraints;	// IMP=0x000000000004786a
- (void)dealloc;	// IMP=0x000000000004781f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000047732

@end

