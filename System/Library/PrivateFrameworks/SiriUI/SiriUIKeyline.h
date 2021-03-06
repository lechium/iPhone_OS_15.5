//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SiriUIKeyline : UIView
{
    UIView *_keyLineView;	// 8 = 0x8
    _Bool _veritical;	// 16 = 0x10
    long long _keylineType;	// 24 = 0x18
    double _customLeftPadding;	// 32 = 0x20
    double _customRightPadding;	// 40 = 0x28
    UIColor *_customBackgroundColor;	// 48 = 0x30
}

+ (id)keylineWithKeylineType:(long long)arg1 platterStyling:(_Bool)arg2;	// IMP=0x0000000000057133
+ (id)keylineWithKeylineType:(long long)arg1;	// IMP=0x0000000000057107
+ (id)verticalKeyline;	// IMP=0x00000000000570e0
+ (id)keylineForSelectableRow;	// IMP=0x00000000000570b9
+ (id)keylineWithDefaultInsets;	// IMP=0x0000000000057092
+ (id)keyline;	// IMP=0x000000000005706b
- (void).cxx_destruct;	// IMP=0x0000000000057729
@property(nonatomic, getter=_isVeritical, setter=_setVertical:) _Bool veritical; // @synthesize veritical=_veritical;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) double customRightPadding; // @synthesize customRightPadding=_customRightPadding;
@property(nonatomic) double customLeftPadding; // @synthesize customLeftPadding=_customLeftPadding;
@property(nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
- (void)layoutSubviews;	// IMP=0x00000000000574f3
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 useAutolayout:(_Bool)arg2;	// IMP=0x000000000005737d
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000057356
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000057342
- (double)_keylineThicknessForType:(long long)arg1;	// IMP=0x00000000000572e3
- (id)_keylineColorForType:(long long)arg1 platterStyling:(_Bool)arg2;	// IMP=0x00000000000572aa
- (id)initWithKeylineType:(long long)arg1 platterStyling:(_Bool)arg2;	// IMP=0x0000000000057193
- (id)initWithKeylineType:(long long)arg1;	// IMP=0x0000000000057167

@end

