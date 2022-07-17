//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextFieldDelegate-Protocol.h>

@class NSObject, NSString, UIDocumentPasswordField, UILabel, UITextField;
@protocol UIDocumentPasswordViewDelegate;

@interface UIDocumentPasswordView <UITextFieldDelegate>
{
    UIDocumentPasswordField *_passwordTextField;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;	// 24 = 0x18
}

@property(readonly, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordTextField;
@property(nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate; // @synthesize passwordDelegate;
- (double)_textFieldWidth;	// IMP=0x00000000012f2644
- (double)_labelHorizontalOffset;	// IMP=0x00000000012f2636
- (id)_labelTextColor;	// IMP=0x00000000012f261d
- (id)_labelFont;	// IMP=0x00000000012f25fc
- (void)_passwordEntered:(id)arg1;	// IMP=0x00000000012f25a9
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000012f2556
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000012f2503
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000012f2364
- (_Bool)_canDrawContent;	// IMP=0x00000000012f235c
- (void)layoutSubviews;	// IMP=0x00000000012f216d
- (void)dealloc;	// IMP=0x00000000012f20e7
- (id)initWithDocumentName:(id)arg1;	// IMP=0x00000000012f1d7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
