//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel;

@interface UIPickerContentView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_checkView;	// 16 = 0x10
    struct {
        unsigned int checked:1;
        unsigned int highlighted:1;
    } _pickerContentViewFlags;	// 24 = 0x18
}

+ (double)_checkmarkOffset;	// IMP=0x0000000000c60249
- (void).cxx_destruct;	// IMP=0x0000000000c608bd
- (_Bool)_isSelectable;	// IMP=0x0000000000c608b5
- (double)labelWidthForBounds:(struct CGRect)arg1;	// IMP=0x0000000000c60887
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000c6086d
- (_Bool)isHighlighted;	// IMP=0x0000000000c60859
- (void)layoutSubviews;	// IMP=0x0000000000c606bf
@property(readonly, nonatomic) UILabel *titleLabel;
@property(nonatomic, getter=isChecked) _Bool checked;
- (id)checkedColor;	// IMP=0x0000000000c60269

@end

