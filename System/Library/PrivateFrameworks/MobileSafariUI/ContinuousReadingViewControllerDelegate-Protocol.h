//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class ContinuousReadingItem, ContinuousReadingViewController, UIScrollView;

@protocol ContinuousReadingViewControllerDelegate <NSObject>
- (double)continuousReadingViewControllerNextWebViewLandingOffset:(ContinuousReadingViewController *)arg1 includeBottomBar:(_Bool)arg2;
- (void)continuousReadingViewController:(ContinuousReadingViewController *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)continuousReadingViewControllerCommitToLoadPreviousItem:(ContinuousReadingViewController *)arg1;
- (void)continuousReadingViewController:(ContinuousReadingViewController *)arg1 didCommitToLoadItem:(ContinuousReadingItem *)arg2;
- (void)continuousReadingViewControllerWillCommitToLoadNextItem:(ContinuousReadingViewController *)arg1;
@end
