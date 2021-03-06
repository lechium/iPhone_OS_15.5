//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HFUserHandle, HUAvatarContentView, NSString, UIView;
@protocol CNAvatarViewController, HUResizableCellDelegate, UIContentConfiguration;

@interface HUAvatarTableViewCell : UITableViewCell <HUCellProtocol>
{
    _Bool _showAccessLevelDescription;	// 8 = 0x8
    HFItem *_item;	// 16 = 0x10
    id <UIContentConfiguration> _contentConfiguration;	// 24 = 0x18
    double _avatarSize;	// 32 = 0x20
    id <CNAvatarViewController> _avatarViewController;	// 40 = 0x28
    UIView *_avatarView;	// 48 = 0x30
    HUAvatarContentView *_avatarContentView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000010f9cb
@property(retain, nonatomic) HUAvatarContentView *avatarContentView; // @synthesize avatarContentView=_avatarContentView;
@property(readonly, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) id <CNAvatarViewController> avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(nonatomic) _Bool showAccessLevelDescription; // @synthesize showAccessLevelDescription=_showAccessLevelDescription;
@property(nonatomic) double avatarSize; // @synthesize avatarSize=_avatarSize;
- (id)contentConfiguration;	// IMP=0x000000000010f941
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)_setupConstraints;	// IMP=0x000000000010f559
- (void)setContentConfiguration:(id)arg1;	// IMP=0x000000000010f483
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x000000000010f345
@property(retain, nonatomic) HFUserHandle *userHandle;
- (void)layoutSubviews;	// IMP=0x000000000010f09c
- (void)prepareForReuse;	// IMP=0x000000000010effa
@property(readonly, copy) NSString *description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000010edcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

