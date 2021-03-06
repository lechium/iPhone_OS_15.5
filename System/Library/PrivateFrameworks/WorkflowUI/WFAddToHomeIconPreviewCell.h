//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel, WFHomeScreenIcon;

@interface WFAddToHomeIconPreviewCell
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_iconLabel;	// 16 = 0x10
    WFHomeScreenIcon *_icon;	// 24 = 0x18
}

+ (double)defaultRowHeight;	// IMP=0x00000000001337a2
- (void).cxx_destruct;	// IMP=0x0000000000133764
@property(retain, nonatomic) WFHomeScreenIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)redrawIcon;	// IMP=0x0000000000133699
- (void)configureIcon:(id)arg1;	// IMP=0x000000000013351e
- (void)configureName:(id)arg1;	// IMP=0x00000000001334ac
- (void)configureWithName:(id)arg1 icon:(id)arg2;	// IMP=0x000000000013344b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000132ea7

@end

