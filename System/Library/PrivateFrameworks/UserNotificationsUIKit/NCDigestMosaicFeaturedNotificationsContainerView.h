//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCDigestFeaturedNotificationsContainerDisplaying-Protocol.h>

@class MTVisualStylingProvider, NSArray, NSMutableArray, NSString;

@interface NCDigestMosaicFeaturedNotificationsContainerView : UIView <NCDigestFeaturedNotificationsContainerDisplaying>
{
    NSArray *_featuredNotificationContentProviders;	// 8 = 0x8
    NSMutableArray *_notificationViews;	// 16 = 0x10
    MTVisualStylingProvider *_strokeVisualStylingProvider;	// 24 = 0x18
    _Bool _adjustsFontForContentSizeCategory;	// 32 = 0x20
    NSString *_preferredContentSizeCategory;	// 40 = 0x28
    NSString *_materialGroupNameBase;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000f4d9f
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (double)_overlapMarginForLargeFeaturedView;	// IMP=0x00000000000f4b2a
- (struct CGRect)_sizingBoundsForSmallFeaturedViewInRect:(struct CGRect)arg1;	// IMP=0x00000000000f4a6c
- (struct CGRect)_sizingBoundsForMediumFeaturedViewInRect:(struct CGRect)arg1;	// IMP=0x00000000000f4a06
- (struct CGRect)_sizingBoundsForLargeFeaturedViewInRect:(struct CGRect)arg1;	// IMP=0x00000000000f49a0
- (unsigned long long)_contentViewStyleForIndex:(unsigned long long)arg1;	// IMP=0x00000000000f4985
- (_Bool)_shouldShowImageAttachments;	// IMP=0x00000000000f4824
- (_Bool)_isDisplayingRichFeaturedNotifications;	// IMP=0x00000000000f47ff
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x00000000000f4644
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;	// IMP=0x00000000000f45de
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x00000000000f440d
- (void)_configureNotificationContentView:(id)arg1 withContentProvider:(id)arg2 showImageAttachment:(_Bool)arg3 contentViewStyle:(unsigned long long)arg4;	// IMP=0x00000000000f40c7
- (id)_newNotificationSeamlessContentViewForContentProvider:(id)arg1;	// IMP=0x00000000000f3ff3
- (id)_newFeaturedNotificationViewForContentProvider:(id)arg1 contentViewStyle:(unsigned long long)arg2 showImageAttachment:(_Bool)arg3;	// IMP=0x00000000000f3e33
- (void)_layoutSmallFeaturedView:(id)arg1;	// IMP=0x00000000000f3c69
- (void)_layoutMediumFeaturedView:(id)arg1;	// IMP=0x00000000000f3aa1
- (void)_layoutLargeFeaturedView:(id)arg1;	// IMP=0x00000000000f3908
- (void)layoutSubviews;	// IMP=0x00000000000f37a8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000f3479
- (void)updateContent;	// IMP=0x00000000000f32ef
@property(retain, nonatomic) NSArray *featuredNotificationContentProviders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

