//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface AXUISettingsLeftRightSliderCell : PSSliderTableCell
{
    UILabel *_leftLabel;	// 136 = 0x88
    UILabel *_rightLabel;	// 144 = 0x90
    UILabel *_valueLabel;	// 152 = 0x98
    double _displayValue;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000002d993
@property(nonatomic) double displayValue; // @synthesize displayValue=_displayValue;
- (id)newControl;	// IMP=0x000000000002d940
- (id)labelColor;	// IMP=0x000000000002d8be
- (void)setAccessibilityLabel:(id)arg1;	// IMP=0x000000000002d849
- (void)updateValue;	// IMP=0x000000000002d7d9
- (void)layoutSubviews;	// IMP=0x000000000002d77a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000002cda9
- (_Bool)_accessibilityIgnoreInternalLabels;	// IMP=0x000000000002cda1

@end
