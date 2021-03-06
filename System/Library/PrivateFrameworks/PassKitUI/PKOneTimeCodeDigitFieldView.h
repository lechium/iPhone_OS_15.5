//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface PKOneTimeCodeDigitFieldView : UIView
{
    UILabel *_label;	// 8 = 0x8
    _Bool _primary;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    unsigned long long _highligtType;	// 32 = 0x20
}

+ (id)codeEntryFont;	// IMP=0x00000000003c9a28
- (void).cxx_destruct;	// IMP=0x00000000003c9aa0
@property(nonatomic) unsigned long long highligtType; // @synthesize highligtType=_highligtType;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)_updateLayer;	// IMP=0x00000000003c9800
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000003c96fa
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x00000000003c94cd
- (void)layoutSubviews;	// IMP=0x00000000003c945e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003c9415
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003c924f
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x00000000003c920b
- (id)init;	// IMP=0x00000000003c91d9

@end

