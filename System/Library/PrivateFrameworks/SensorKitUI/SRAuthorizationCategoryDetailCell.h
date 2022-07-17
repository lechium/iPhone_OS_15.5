//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIColor, UIFont, UILabel, UIStackView;

@interface SRAuthorizationCategoryDetailCell : UITableViewCell
{
    _Bool _showAppUsage;	// 8 = 0x8
    _Bool _OBKStyle;	// 9 = 0x9
    UILabel *_categorySubTitleLabel;	// 16 = 0x10
    UILabel *_categoryTitleLabel;	// 24 = 0x18
    UILabel *_appUsageTitleLabel;	// 32 = 0x20
    UILabel *_appUsageBodyLabel;	// 40 = 0x28
    UILabel *_collectedTitleLabel;	// 48 = 0x30
    UILabel *_notCollectedTitleLabel;	// 56 = 0x38
    UILabel *_whenSharedTitleLabel;	// 64 = 0x40
    NSArray *_collectedLabels;	// 72 = 0x48
    NSArray *_notCollectedLabels;	// 80 = 0x50
    long long _numberOfCollectedLabels;	// 88 = 0x58
    long long _numberOfNotCollectedLabels;	// 96 = 0x60
    long long _numberOfWhenSharedLabels;	// 104 = 0x68
    NSArray *_whenSharedLabels;	// 112 = 0x70
    UIStackView *_categoryStack;	// 120 = 0x78
    UIStackView *_appUsageStack;	// 128 = 0x80
    UIStackView *_stacks;	// 136 = 0x88
    UIFont *_titleFont;	// 144 = 0x90
    UIFont *_bodyFont;	// 152 = 0x98
    UIColor *_fontColor;	// 160 = 0xa0
}

+ (id)categoryDetailCellForAuthGroup:(id)arg1 bundle:(id)arg2 titleFont:(id)arg3 bodyFont:(id)arg4 textColor:(id)arg5 OBKStyle:(_Bool)arg6;	// IMP=0x000000000000ce05
@property(nonatomic) _Bool OBKStyle; // @synthesize OBKStyle=_OBKStyle;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIStackView *stacks; // @synthesize stacks=_stacks;
@property(retain, nonatomic) UIStackView *appUsageStack; // @synthesize appUsageStack=_appUsageStack;
@property(retain, nonatomic) UIStackView *categoryStack; // @synthesize categoryStack=_categoryStack;
@property(retain, nonatomic) NSArray *whenSharedLabels; // @synthesize whenSharedLabels=_whenSharedLabels;
@property(nonatomic) long long numberOfWhenSharedLabels; // @synthesize numberOfWhenSharedLabels=_numberOfWhenSharedLabels;
@property(nonatomic) long long numberOfNotCollectedLabels; // @synthesize numberOfNotCollectedLabels=_numberOfNotCollectedLabels;
@property(nonatomic) long long numberOfCollectedLabels; // @synthesize numberOfCollectedLabels=_numberOfCollectedLabels;
@property(nonatomic) _Bool showAppUsage; // @synthesize showAppUsage=_showAppUsage;
@property(retain, nonatomic) NSArray *notCollectedLabels; // @synthesize notCollectedLabels=_notCollectedLabels;
@property(retain, nonatomic) NSArray *collectedLabels; // @synthesize collectedLabels=_collectedLabels;
@property(readonly, nonatomic) UILabel *whenSharedTitleLabel; // @synthesize whenSharedTitleLabel=_whenSharedTitleLabel;
@property(readonly, nonatomic) UILabel *notCollectedTitleLabel; // @synthesize notCollectedTitleLabel=_notCollectedTitleLabel;
@property(readonly, nonatomic) UILabel *collectedTitleLabel; // @synthesize collectedTitleLabel=_collectedTitleLabel;
@property(readonly, nonatomic) UILabel *appUsageBodyLabel; // @synthesize appUsageBodyLabel=_appUsageBodyLabel;
@property(readonly, nonatomic) UILabel *appUsageTitleLabel; // @synthesize appUsageTitleLabel=_appUsageTitleLabel;
@property(readonly, nonatomic) UILabel *categoryTitleLabel; // @synthesize categoryTitleLabel=_categoryTitleLabel;
@property(readonly, nonatomic) UILabel *categorySubTitleLabel; // @synthesize categorySubTitleLabel=_categorySubTitleLabel;
- (id)addBulletStackViewForTitleLabel:(id)arg1 count:(long long)arg2;	// IMP=0x000000000000c70c
- (id)stackViewForSubviews:(id)arg1 spacing:(double)arg2;	// IMP=0x000000000000c68c
- (id)dynamicHeightLabel;	// IMP=0x000000000000c618
- (void)dealloc;	// IMP=0x000000000000c4c5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 titleFont:(id)arg3 bodyFont:(id)arg4 fontColor:(id)arg5 OBKStyle:(_Bool)arg6;	// IMP=0x000000000000bf0e

@end
