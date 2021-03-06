//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/ASCMetricsScrollObserverDelegate-Protocol.h>

@class ASCMetrics, ASCMetricsActivity, ASCMetricsScrollObserver, NSString, UIView;
@protocol ASCViewModel;

__attribute__((visibility("hidden")))
@interface ASCAppearMetricsPresenter : NSObject <ASCMetricsScrollObserverDelegate>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _appeared;	// 9 = 0x9
    _Bool _settingModel;	// 10 = 0xa
    UIView *_view;	// 16 = 0x10
    ASCMetricsActivity *_activity;	// 24 = 0x18
    id <ASCViewModel> _model;	// 32 = 0x20
    ASCMetrics *_metrics;	// 40 = 0x28
    ASCMetricsScrollObserver *_scrollObserver;	// 48 = 0x30
}

+ (id)log;	// IMP=0x0000000000005bf1
- (void).cxx_destruct;	// IMP=0x0000000000007484
@property(retain, nonatomic) ASCMetricsScrollObserver *scrollObserver; // @synthesize scrollObserver=_scrollObserver;
@property(nonatomic, getter=isSettingModel) _Bool settingModel; // @synthesize settingModel=_settingModel;
@property(nonatomic, getter=isAppeared) _Bool appeared; // @synthesize appeared=_appeared;
@property(readonly, nonatomic) ASCMetrics *metrics; // @synthesize metrics=_metrics;
@property(copy, nonatomic) id <ASCViewModel> model; // @synthesize model=_model;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) ASCMetricsActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000073ef
- (void)disappearIfNeeded;	// IMP=0x0000000000007263
@property(readonly, nonatomic) _Bool canDisappear;
- (void)appearIfNeeded;	// IMP=0x0000000000006ea7
@property(readonly, nonatomic) _Bool canAppear;
- (void)viewDidRetryFailedRequest;	// IMP=0x0000000000006a9e
- (void)viewDidFailRequest:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000006719
- (void)viewDidEndRenderWithPredicate:(id)arg1;	// IMP=0x0000000000006546
- (void)viewDidAction;	// IMP=0x000000000000639a
- (void)viewDidSetHidden;	// IMP=0x000000000000632f
- (void)viewDidMoveToWindow;	// IMP=0x000000000000618e
@property(readonly, copy) NSString *description;
- (id)initWithView:(id)arg1;	// IMP=0x0000000000005cff
- (id)initWithView:(id)arg1 metrics:(id)arg2;	// IMP=0x0000000000005c4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

