//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextField.h>

@class MISSING_TYPE;

@interface _TtC15RemindersUICore18TTRIInsetTextField : UITextField
{
    MISSING_TYPE *horizontalInset;	// 8 = 0x8
    MISSING_TYPE *verticalInset;	// 16 = 0x10
}

- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b1ee0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b1dc0
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000b1b50
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000b1880
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000b16f0
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000000b1690
@property(nonatomic) double verticalInset; // @synthesize verticalInset;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset;

@end
