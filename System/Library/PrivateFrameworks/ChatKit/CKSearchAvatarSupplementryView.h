//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <ChatKit/CKSearchResultSupplementryCell-Protocol.h>

@class CKAvatarView, CKSpotlightQueryResult, CNContact, NSString;

@interface CKSearchAvatarSupplementryView : UICollectionReusableView <CKSearchResultSupplementryCell>
{
    unsigned long long _parentContentType;	// 8 = 0x8
    CKSpotlightQueryResult *_associatedResult;	// 16 = 0x10
    CNContact *_contact;	// 24 = 0x18
    CKAvatarView *_avatarView;	// 32 = 0x20
    struct UIEdgeInsets marginInsets;	// 40 = 0x28
}

+ (double)desiredZPosition;	// IMP=0x00000000002f0505
+ (id)reuseIdentifier;	// IMP=0x00000000002f04f8
+ (id)supplementaryViewType;	// IMP=0x00000000002f04eb
- (void).cxx_destruct;	// IMP=0x00000000002f0fc9
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CKSpotlightQueryResult *associatedResult; // @synthesize associatedResult=_associatedResult;
@property(nonatomic) unsigned long long parentContentType; // @synthesize parentContentType=_parentContentType;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets;
- (void)prepareForReuse;	// IMP=0x00000000002f0edc
- (void)layoutSubviews;	// IMP=0x00000000002f0c91
- (void)_updateVisibilityIfNeeded;	// IMP=0x00000000002f0b08
- (void)_parentPreviewDidChange:(id)arg1;	// IMP=0x00000000002f09e7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002f0683

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
