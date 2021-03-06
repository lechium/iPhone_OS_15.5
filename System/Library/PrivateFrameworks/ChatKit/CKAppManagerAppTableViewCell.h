//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;
@protocol CKAppManagerAppTableViewCellDelegate;

@interface CKAppManagerAppTableViewCell : UITableViewCell
{
    id <CKAppManagerAppTableViewCellDelegate> _delegate;	// 8 = 0x8
    UISwitch *_appToggle;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x000000000004e587
- (void).cxx_destruct;	// IMP=0x000000000004e991
@property(retain, nonatomic) UISwitch *appToggle; // @synthesize appToggle=_appToggle;
@property(nonatomic) __weak id <CKAppManagerAppTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCellWithPluginInfo:(id)arg1;	// IMP=0x000000000004e837
- (void)appToggleTapped:(id)arg1;	// IMP=0x000000000004e7b1
- (void)setToggleVisible:(_Bool)arg1 editable:(_Bool)arg2 isOn:(_Bool)arg3;	// IMP=0x000000000004e69b
- (void)prepareForReuse;	// IMP=0x000000000004e650
- (void)layoutMarginsDidChange;	// IMP=0x000000000004e60f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000004e594

@end

