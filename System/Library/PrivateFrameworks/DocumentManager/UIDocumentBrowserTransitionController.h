//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DocumentManager/UIViewControllerAnimatedTransitioning-Protocol.h>

@class FPItem, NSOperationQueue, NSProgress, NSString, NSURL, UIView;
@protocol DOCServiceDocumentBrowserViewControllerInterface, DOCServiceTransitionProtocol;

@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSURL *_itemURL;	// 8 = 0x8
    FPItem *_item;	// 16 = 0x10
    id <DOCServiceDocumentBrowserViewControllerInterface> _serviceDocumentBrowserProxy;	// 24 = 0x18
    UIView *_referenceView;	// 32 = 0x20
    _Bool _transitionDidFinish;	// 40 = 0x28
    NSProgress *_loadingProgress;	// 48 = 0x30
    UIView *_targetView;	// 56 = 0x38
    id <DOCServiceTransitionProtocol> _transitionController;	// 64 = 0x40
    NSOperationQueue *_transitionControllerQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000139b1
@property(retain, nonatomic) NSOperationQueue *transitionControllerQueue; // @synthesize transitionControllerQueue=_transitionControllerQueue;
@property(retain, nonatomic) id <DOCServiceTransitionProtocol> transitionController; // @synthesize transitionController=_transitionController;
@property _Bool transitionDidFinish; // @synthesize transitionDidFinish=_transitionDidFinish;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) NSProgress *loadingProgress; // @synthesize loadingProgress=_loadingProgress;
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000012c1a
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000012c0c
- (void)dealloc;	// IMP=0x0000000000012b32
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000012a80
- (void)_commonInit;	// IMP=0x0000000000012419
- (id)initWithItemURL:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3;	// IMP=0x0000000000012312
- (id)initWithItem:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3;	// IMP=0x000000000001220b
- (id)init;	// IMP=0x00000000000121fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

