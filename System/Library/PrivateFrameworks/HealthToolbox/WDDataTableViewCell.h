//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class HKSource, NSString, UIFont;

__attribute__((visibility("hidden")))
@interface WDDataTableViewCell : UITableViewCell
{
    _Bool _displayValueAdjustsFontSizeToFitWidth;	// 8 = 0x8
    HKSource *_source;	// 16 = 0x10
    NSString *_displayValue;	// 24 = 0x18
    NSString *_dateString;	// 32 = 0x20
    UIFont *_bodyFont;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002260f
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) _Bool displayValueAdjustsFontSizeToFitWidth; // @synthesize displayValueAdjustsFontSizeToFitWidth=_displayValueAdjustsFontSizeToFitWidth;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(retain, nonatomic) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(retain, nonatomic) HKSource *source; // @synthesize source=_source;
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000000224b7
- (void)_setupUI;	// IMP=0x0000000000022137
- (void)layoutSubviews;	// IMP=0x00000000000220a1
- (struct CGRect)imageViewBounds;	// IMP=0x0000000000022024
- (void)dealloc;	// IMP=0x0000000000021f54
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000021f08

@end

