//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CompactMonthListViewController, EKEvent, UIViewController;

@protocol CompactMonthListViewControllerDelegate <NSObject>
- (void)compactMonthListViewController:(CompactMonthListViewController *)arg1 didSelectEvent:(EKEvent *)arg2;

@optional
- (void)compactMonthListViewController:(CompactMonthListViewController *)arg1 wantsToCommitViewControllerFromPreview:(UIViewController *)arg2;
@end
