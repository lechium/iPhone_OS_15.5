//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SiriUIContentLabel, UIColor, UIFont;

@interface SiriUITextContainerView : UIView
{
    SiriUIContentLabel *_label;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    CDStruct_c3b3c0f9 _textContainerStyle;	// 24 = 0x18
}

+ (double)_distanceFromTopToBaselineWithFont:(id)arg1 textContainerStyle:(CDStruct_c3b3c0f9)arg2;	// IMP=0x000000000005657b
+ (double)_distanceFromBaselineToBottomWithFont:(id)arg1 textContainerStyle:(CDStruct_c3b3c0f9)arg2;	// IMP=0x000000000005655a
+ (struct CGRect)_textBoundingRectWithSize:(struct CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(CDStruct_c3b3c0f9)arg4;	// IMP=0x0000000000056443
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(CDStruct_c3b3c0f9)arg4;	// IMP=0x0000000000055ad7
- (void).cxx_destruct;	// IMP=0x00000000000565ce
@property(nonatomic) CDStruct_c3b3c0f9 textContainerStyle; // @synthesize textContainerStyle=_textContainerStyle;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000056161
- (void)layoutSubviews;	// IMP=0x0000000000055db3
- (id)initWithText:(id)arg1;	// IMP=0x0000000000055d9f
- (id)initWithText:(id)arg1 visualEffect:(id)arg2;	// IMP=0x0000000000055be8

@end
