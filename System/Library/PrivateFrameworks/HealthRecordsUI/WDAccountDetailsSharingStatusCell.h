//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface WDAccountDetailsSharingStatusCell : UITableViewCell
{
    NSArray *_withSpinnerConstraint;	// 8 = 0x8
    NSArray *_noSpinnerConstraint;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UIActivityIndicatorView *_statusIndicator;	// 40 = 0x28
}

+ (id)reuseIdentifier;	// IMP=0x000000000006b518
- (void).cxx_destruct;	// IMP=0x000000000006b594
@property(retain, nonatomic) UIActivityIndicatorView *statusIndicator; // @synthesize statusIndicator=_statusIndicator;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)stopSpinner;	// IMP=0x000000000006b3f8
- (void)startSpinner;	// IMP=0x000000000006b2d8
- (void)_setupConstraints;	// IMP=0x000000000006aabb
- (void)_setupUI;	// IMP=0x000000000006a85c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000006a7ec

@end
