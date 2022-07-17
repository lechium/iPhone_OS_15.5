//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, WFTrigger;

@interface WFTriggerConfigurationHeaderCell : UITableViewCell
{
    WFTrigger *_trigger;	// 8 = 0x8
    Class _triggerTypeClass;	// 16 = 0x10
    UIImageView *_triggerIconView;	// 24 = 0x18
    UILabel *_triggerTitleLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000185fbc
@property(readonly, nonatomic) UILabel *triggerTitleLabel; // @synthesize triggerTitleLabel=_triggerTitleLabel;
@property(readonly, nonatomic) UIImageView *triggerIconView; // @synthesize triggerIconView=_triggerIconView;
@property(retain, nonatomic) Class triggerTypeClass; // @synthesize triggerTypeClass=_triggerTypeClass;
@property(retain, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
- (void)updateUI;	// IMP=0x0000000000185b7e
- (void)configureWithImage:(id)arg1 tintColor:(id)arg2 title:(id)arg3 numberOfLines:(long long)arg4 withTrigger:(id)arg5;	// IMP=0x000000000018586c
- (void)prepareForReuse;	// IMP=0x0000000000185812
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000185173

@end
