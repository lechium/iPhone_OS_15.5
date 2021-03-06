//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LoginUILogViewer/NSObject-Protocol.h>

@class LUILogContentViewController, NSDate;

@protocol LUILogContentViewControllerDelegate <NSObject>
- (NSDate *)logContentViewControllerLogEndDate:(LUILogContentViewController *)arg1;
- (NSDate *)logContentViewControllerLogStartDate:(LUILogContentViewController *)arg1;
- (void)logContentViewController:(LUILogContentViewController *)arg1 didSelectDateForLog:(NSDate *)arg2;
- (void)logContentViewController:(LUILogContentViewController *)arg1 didSelectLogOptionWithTimeInterval:(double)arg2;
@end

