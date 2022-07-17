//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUViewControllerCell-Protocol.h>

@class NSString, UIViewController;

@interface HUViewControllerTableViewCell : UITableViewCell <HUViewControllerCell>
{
    _Bool _ignoreRounding;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    UIViewController *_parentViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000020d100
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool ignoreRounding; // @synthesize ignoreRounding=_ignoreRounding;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)_removeFromParentViewControllerAndClearProperty:(_Bool)arg1;	// IMP=0x000000000020cfae
- (void)removeFromParentViewController;	// IMP=0x000000000020cf97
- (void)addToParentViewController:(id)arg1;	// IMP=0x000000000020ce41
- (void)layoutSubviews;	// IMP=0x000000000020cc34
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000020ca03
- (void)prepareForReuse;	// IMP=0x000000000020c99d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
