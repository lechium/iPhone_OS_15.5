//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CKAvatarView, CKEntity, CKLabel, UIView;

@interface CKMentionSuggestionCell : UICollectionViewCell
{
    CKEntity *_suggestedEntity;	// 8 = 0x8
    CKLabel *_handleLabel;	// 16 = 0x10
    CKAvatarView *_avatarView;	// 24 = 0x18
    UIView *_hoverView;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x0000000000124279
- (void).cxx_destruct;	// IMP=0x00000000001257be
@property(retain, nonatomic) UIView *hoverView; // @synthesize hoverView=_hoverView;
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CKLabel *handleLabel; // @synthesize handleLabel=_handleLabel;
@property(retain, nonatomic) CKEntity *suggestedEntity; // @synthesize suggestedEntity=_suggestedEntity;
- (void)didHoverOverCell:(id)arg1;	// IMP=0x00000000001255ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000124286

@end
