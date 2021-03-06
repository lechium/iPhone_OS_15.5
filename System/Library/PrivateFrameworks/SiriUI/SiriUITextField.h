//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@interface SiriUITextField : UITextField
{
}

+ (id)imageWithImage:(id)arg1 tintColor:(id)arg2;	// IMP=0x0000000000040b31
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0000000000040aaa
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000040a8c
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000040945
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000040927
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000408f4
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000004088a
- (_Bool)_shouldRepeatInsertText:(id)arg1;	// IMP=0x0000000000040882
- (void)_configureClearButton;	// IMP=0x00000000000406d7
- (id)textInputContextIdentifier;	// IMP=0x00000000000406ca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000040620

@end

