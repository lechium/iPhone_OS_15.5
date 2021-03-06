//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCNotificationListDimmable-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeManaging-Protocol.h>

@class NSString, UIView;
@protocol PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting;

@interface NCNotificationViewControllerView <PLContentSizeManaging, NCNotificationListDimmable>
{
    UIView *_stackDimmingView;	// 8 = 0x8
    UIView<PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting> *_contentView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000781d0
@property(nonatomic) __weak UIView<PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting> *contentView; // @synthesize contentView=_contentView;
- (void)_updateStackDimmingVisualStyling;	// IMP=0x0000000000078033
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;	// IMP=0x0000000000077fbe
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;	// IMP=0x0000000000077f50
- (void)invalidateStackedPlattersRecipe;	// IMP=0x0000000000077f3e
- (void)configureStackDimmingForTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000077d56
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000077d15
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000077ce7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000077c85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

