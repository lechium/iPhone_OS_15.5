//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView;

@interface HUAddPeopleTableHeaderFooterView : UITableViewHeaderFooterView
{
    _Bool _needsTopBorder;	// 8 = 0x8
    _Bool _needsBottomBorder;	// 9 = 0x9
    UIView *_topBorder;	// 16 = 0x10
    UIView *_bottomBorder;	// 24 = 0x18
}

+ (double)preferredHeight;	// IMP=0x0000000000149435
+ (id)identifier;	// IMP=0x0000000000149428
- (void).cxx_destruct;	// IMP=0x00000000001499ad
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) _Bool needsBottomBorder; // @synthesize needsBottomBorder=_needsBottomBorder;
@property(nonatomic) _Bool needsTopBorder; // @synthesize needsTopBorder=_needsTopBorder;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001496bd
- (void)layoutSubviews;	// IMP=0x0000000000149443
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000149222

@end
