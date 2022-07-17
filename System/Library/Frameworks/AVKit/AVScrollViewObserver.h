//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/_UIScrollViewScrollObserver-Protocol.h>

@class NSHashTable, NSString, NSTimer, UIView;
@protocol AVScrollViewObserverContentView;

__attribute__((visibility("hidden")))
@interface AVScrollViewObserver : NSObject <_UIScrollViewScrollObserver>
{
    _Bool _scrolling;	// 8 = 0x8
    _Bool _scrollingQuickly;	// 9 = 0x9
    UIView<AVScrollViewObserverContentView> *_observer;	// 16 = 0x10
    NSHashTable *_observedScrollViews;	// 24 = 0x18
    NSTimer *_scrollingDidEndTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000154de
@property(retain, nonatomic) NSTimer *scrollingDidEndTimer; // @synthesize scrollingDidEndTimer=_scrollingDidEndTimer;
@property(copy, nonatomic) NSHashTable *observedScrollViews; // @synthesize observedScrollViews=_observedScrollViews;
@property(nonatomic) __weak UIView<AVScrollViewObserverContentView> *observer; // @synthesize observer=_observer;
@property(nonatomic, getter=isScrollingQuickly) _Bool scrollingQuickly; // @synthesize scrollingQuickly=_scrollingQuickly;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
- (void)_updateScrollingStatus;	// IMP=0x000000000001530e
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x0000000000015160
- (void)updateObservedScrollViews;	// IMP=0x0000000000014e4e
- (void)dealloc;	// IMP=0x0000000000014cc1
- (id)initWithContentView:(id)arg1;	// IMP=0x0000000000014c33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
