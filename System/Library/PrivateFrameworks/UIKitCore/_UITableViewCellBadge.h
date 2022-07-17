//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge
{
    _Bool _selected;	// 120 = 0x78
    UILabel *_badgeTextLabel;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000ed29cf
@property(retain, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (_Bool)isHighlighted;	// IMP=0x0000000000ed2946
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000ed28fa
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) UIFont *font;
- (void)layoutSubviews;	// IMP=0x0000000000ed255c
- (void)_sizeToFit;	// IMP=0x0000000000ed2464
- (double)minHeight;	// IMP=0x0000000000ed2456
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000ed23e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000ed2333

@end
