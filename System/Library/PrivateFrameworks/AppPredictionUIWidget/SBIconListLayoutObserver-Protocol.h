//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBIconListView, SBIconView;

@protocol SBIconListLayoutObserver
- (void)iconListViewDidChangeBoundsSize:(SBIconListView *)arg1;
- (void)iconListView:(SBIconListView *)arg1 didRemoveIconView:(SBIconView *)arg2;
- (void)iconListView:(SBIconListView *)arg1 didAddIconView:(SBIconView *)arg2;
@end
