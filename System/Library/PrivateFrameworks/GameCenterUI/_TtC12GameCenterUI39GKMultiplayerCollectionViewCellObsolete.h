//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, UIButton, _TtC12GameCenterUI16DynamicTypeLabel, _TtC12GameCenterUI23GKMultiplayerStatusView;

@interface _TtC12GameCenterUI39GKMultiplayerCollectionViewCellObsolete : UICollectionViewCell
{
    MISSING_TYPE *avatarView;	// 8 = 0x8
    MISSING_TYPE *silhouetteView;	// 16 = 0x10
    MISSING_TYPE *shouldDisplaySilhouette;	// 24 = 0x18
    MISSING_TYPE *nameLabel;	// 32 = 0x20
    MISSING_TYPE *subtitleLabel;	// 40 = 0x28
    MISSING_TYPE *displaysMessagesIcon;	// 48 = 0x30
    MISSING_TYPE *messagesIconView;	// 56 = 0x38
    MISSING_TYPE *statusAccessoryView;	// 64 = 0x40
    MISSING_TYPE *statusButtonView;	// 72 = 0x48
    MISSING_TYPE *tapHandler;	// 80 = 0x50
    MISSING_TYPE *layoutMode;	// 96 = 0x60
}

+ (id)reuseIdentifier;	// IMP=0x0000000000240b00
- (void).cxx_destruct;	// IMP=0x0000000000243170
@property(nonatomic, readonly) UIButton *accessibilityStatusButtonView;
@property(nonatomic, readonly) _TtC12GameCenterUI23GKMultiplayerStatusView *accessibilityStatusAccessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityNameLabel;
- (void)didTapRemoveButton:(id)arg1;	// IMP=0x0000000000242fe0
- (void)didTapAddButton:(id)arg1;	// IMP=0x0000000000242fd0
- (void)prepareForReuse;	// IMP=0x0000000000242fa0
- (void)layoutSubviews;	// IMP=0x0000000000242e10
- (void)applyWithParticipant:(id)arg1 number:(long long)arg2 isRemovingEnabled:(_Bool)arg3 isInvitingEnabled:(_Bool)arg4 layoutMode:(long long)arg5;	// IMP=0x0000000000241fb0
@property(nonatomic, copy) CDUnknownBlockType tapHandler;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000241560
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000241530

@end

