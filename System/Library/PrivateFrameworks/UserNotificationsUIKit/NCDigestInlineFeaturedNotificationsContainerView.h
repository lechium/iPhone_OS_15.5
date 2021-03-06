//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCDigestFeaturedNotificationsContainerDisplaying-Protocol.h>

@class MTVisualStylingProvider, NCNotificationInlineFeaturedSectionList, NSArray, NSString, UIView;

@interface NCDigestInlineFeaturedNotificationsContainerView <NCDigestFeaturedNotificationsContainerDisplaying>
{
    NSArray *_featuredNotificationContentProviders;	// 8 = 0x8
    MTVisualStylingProvider *_strokeVisualStylingProvider;	// 16 = 0x10
    NCNotificationInlineFeaturedSectionList *_inlineFeaturedSectionList;	// 24 = 0x18
    UIView *_dividerView;	// 32 = 0x20
    _Bool _adjustsFontForContentSizeCategory;	// 40 = 0x28
    NSString *_preferredContentSizeCategory;	// 48 = 0x30
    NSString *_materialGroupNameBase;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000e3c9
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;	// IMP=0x000000000000e2cf
- (void)_layoutDividerViewIfNecessary;	// IMP=0x000000000000e170
- (void)_configureDividerViewIfNecessary;	// IMP=0x000000000000dffb
- (void)_configureInlineFeaturedSectionListIfNecessaryWithDelegate:(id)arg1;	// IMP=0x000000000000ded7
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x000000000000de0a
- (void)layoutSubviews;	// IMP=0x000000000000dd23
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000dcaf
- (void)updateContent;	// IMP=0x000000000000dc76
@property(retain, nonatomic) NSArray *featuredNotificationContentProviders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property(readonly) Class superclass;

@end

