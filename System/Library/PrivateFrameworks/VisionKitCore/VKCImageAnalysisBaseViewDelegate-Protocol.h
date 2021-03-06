//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSObject-Protocol.h>

@class NSArray, UIView, UIViewController, VKAnalyticsEvent, VKCDataDetectorElementView, VKCImageAnalysisBaseView;

@protocol VKCImageAnalysisBaseViewDelegate <NSObject>
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 analyticsEventDidOccur:(VKAnalyticsEvent *)arg2;
- (void)triggerTapToRadar;
- (void)generateVisualSearchResultForItems:(NSArray *)arg1 queryID:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, VKCVisualSearchResult *, NSError *))arg3;
- (void)baseOverlayViewDismissVisualSearchController:(VKCImageAnalysisBaseView *)arg1;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 prepareForCalloutAction:(SEL)arg2 competion:(void (^)(void))arg3;
- (UIViewController *)presentingViewControllerForImageAnalysisInteraction;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 didFinishTransitionToNormalizedVisibleRect:(struct CGRect)arg2;
- (_Bool)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 shouldBeginInteractionAtPoint:(struct CGPoint)arg2 withTypes:(unsigned long long)arg3;
- (void)baseOverlayView:(VKCImageAnalysisBaseView *)arg1 didUpdateToNormalizedVisibleRect:(struct CGRect)arg2;
- (struct CGRect)contentsRectForImageRecognitionBaseView:(VKCImageAnalysisBaseView *)arg1;
- (_Bool)topLevelImplementsContentsRectDelegateForBaseView:(VKCImageAnalysisBaseView *)arg1;
- (UIView *)viewForImageSnapshotForBaseView:(VKCImageAnalysisBaseView *)arg1;
- (UIView *)previewForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;
@end

