//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class SBIconView, UIView, UIViewController;
@protocol SBHIconViewConfigurationInteraction, SBLeafIconDataSource;

@protocol SBIconViewConfigurationUIDelegate <NSObject>

@optional
- (void)iconView:(SBIconView *)arg1 configurationDidEndWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationWillEndWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationDidBeginWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationWillBeginWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationDidUpdateWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (UIView *)iconView:(SBIconView *)arg1 homeScreenContentViewForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (struct CGRect)iconView:(SBIconView *)arg1 contentBoundingRectForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (UIViewController *)iconView:(SBIconView *)arg1 containerViewControllerForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (id <SBHIconViewConfigurationInteraction>)stackConfigurationInteractionForIconView:(SBIconView *)arg1;
- (id <SBHIconViewConfigurationInteraction>)iconView:(SBIconView *)arg1 configurationInteractionForDataSource:(id <SBLeafIconDataSource>)arg2;
- (_Bool)iconView:(SBIconView *)arg1 supportsConfigurationForDataSource:(id <SBLeafIconDataSource>)arg2;
@end
