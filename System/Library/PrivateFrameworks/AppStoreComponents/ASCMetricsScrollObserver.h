//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/_UIScrollViewScrollObserver-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface ASCMetricsScrollObserver : NSObject <_UIScrollViewScrollObserver>
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSHashTable *_delegates;	// 16 = 0x10
    NSMutableSet *_appearedModelIDs;	// 24 = 0x18
    NSMutableSet *_renderedModelIDs;	// 32 = 0x20
}

+ (id)observerForScrollView:(id)arg1;	// IMP=0x000000000003b195
- (void).cxx_destruct;	// IMP=0x000000000003ba86
@property(readonly, nonatomic) NSMutableSet *renderedModelIDs; // @synthesize renderedModelIDs=_renderedModelIDs;
@property(readonly, nonatomic) NSMutableSet *appearedModelIDs; // @synthesize appearedModelIDs=_appearedModelIDs;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x000000000003ba06
- (_Bool)hasModelRendered:(id)arg1;	// IMP=0x000000000003b970
- (void)modelDidRender:(id)arg1;	// IMP=0x000000000003b8e0
- (_Bool)hasModelAppeared:(id)arg1;	// IMP=0x000000000003b84a
- (void)modelDidAppear:(id)arg1;	// IMP=0x000000000003b7ba
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000003b645
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000003b5d3
- (void)addDelegate:(id)arg1;	// IMP=0x000000000003b561
- (_Bool)isDelegateAdded:(id)arg1;	// IMP=0x000000000003b4ea
- (struct CGPoint)centerOfView:(id)arg1;	// IMP=0x000000000003b3e8
@property(readonly, nonatomic) struct CGRect visibleRect;
- (void)dealloc;	// IMP=0x000000000003b32d
- (id)initWithScrollView:(id)arg1;	// IMP=0x000000000003b235

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
