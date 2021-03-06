//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebClientContext, AMSUIWebContainerViewController, NSLock, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebFlowController : NSObject
{
    AMSUIWebContainerViewController *_rootContainer;	// 8 = 0x8
    AMSUIWebClientContext *_context;	// 16 = 0x10
    NSString *_currentRefreshToken;	// 24 = 0x18
    NSLock *_timeoutLock;	// 32 = 0x20
    NSMutableSet *_timeouts;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007bd8b
@property(retain, nonatomic) NSMutableSet *timeouts; // @synthesize timeouts=_timeouts;
@property(retain, nonatomic) NSLock *timeoutLock; // @synthesize timeoutLock=_timeoutLock;
@property(retain, nonatomic) NSString *currentRefreshToken; // @synthesize currentRefreshToken=_currentRefreshToken;
@property(readonly, nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak AMSUIWebContainerViewController *rootContainer; // @synthesize rootContainer=_rootContainer;
- (void)_takeSnapshotFromContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b922
- (void)_setWindowSize:(struct CGSize)arg1 onContainer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007b917
- (id)_refreshPageWithForContainer:(id)arg1 options:(id)arg2 isRetry:(_Bool)arg3;	// IMP=0x000000000007a8e0
- (void)stopTimeoutInterruption;	// IMP=0x000000000007a5e6
- (void)startTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000007a24a
- (void)startTimeoutInterruption;	// IMP=0x0000000000079f8b
- (id)refreshPageForContainer:(id)arg1 options:(id)arg2;	// IMP=0x0000000000079f76
- (id)replaceWithPageModel:(id)arg1 forContainer:(id)arg2 options:(id)arg3;	// IMP=0x000000000007948d
- (void)pushWithOptions:(id)arg1;	// IMP=0x0000000000078d48
- (void)presentWithOptions:(id)arg1;	// IMP=0x00000000000786a0
- (void)popViewControllerToRelativeIndex:(long long)arg1;	// IMP=0x0000000000078302
- (void)popViewController;	// IMP=0x00000000000781d5
- (void)performSafeTransitionFrom:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000007801a
- (void)dismissViewController;	// IMP=0x0000000000077f46
@property(readonly, nonatomic) __weak AMSUIWebContainerViewController *currentContainer;
- (id)initWithRootContainer:(id)arg1 context:(id)arg2;	// IMP=0x0000000000077dc7

@end

