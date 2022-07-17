//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKApplicationStateTrackingView : UIView
{
    struct WeakObjCPtr<WKWebView> _webViewToTrack;	// 8 = 0x8
    struct unique_ptr<WebKit::ApplicationStateTracker, std::default_delete<WebKit::ApplicationStateTracker>> _applicationStateTracker;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000003e1e98
- (void).cxx_destruct;	// IMP=0x00000000003e1e69
@property(readonly, nonatomic) UIView *_contentView;
@property(readonly, nonatomic) _Bool isBackground;
- (void)_didCompleteSnapshotSequence;	// IMP=0x00000000003e1dd6
- (void)_willBeginSnapshotSequence;	// IMP=0x00000000003e1d6d
- (void)_applicationWillEnterForeground;	// IMP=0x00000000003e1cb8
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;	// IMP=0x00000000003e1c77
- (void)_applicationDidEnterBackground;	// IMP=0x00000000003e1bc8
- (void)didMoveToWindow;	// IMP=0x00000000003e19a8
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000003e187a
- (id)initWithFrame:(struct CGRect)arg1 webView:(id)arg2;	// IMP=0x00000000003e1814

@end
