//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/_TVAppDocumentRequestController.h>

#import <VideosUI/IKUpdateServiceRequestDelegate-Protocol.h>
#import <VideosUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <VideosUI/VUIAppDocumentUpdateEventMonitorObserving-Protocol.h>

@class NSMutableArray, NSMutableOrderedSet, NSString, VUIAppContext, VUIAppDocumentUpdateEventStore;
@protocol VUIAppDocumentUpdateContext;

@interface VUIAppDocumentServiceViewController : _TVAppDocumentRequestController <IKUpdateServiceRequestDelegate, VUIAppDocumentUpdateEventMonitorObserving, UIPopoverPresentationControllerDelegate>
{
    _Bool _deferDocumentUpdateEventProcessing;	// 8 = 0x8
    _Bool _markDocumentDirtyForRefreshUpdate;	// 9 = 0x9
    NSString *_viewControllerIdentifier;	// 16 = 0x10
    NSString *_viewControllerDocumentIdentifier;	// 24 = 0x18
    NSMutableArray *_impressionableSwiftViewControllers;	// 32 = 0x20
    VUIAppContext *_appContext;	// 40 = 0x28
    NSString *_documentRef;	// 48 = 0x30
    id <VUIAppDocumentUpdateContext> _documentUpdateContext;	// 56 = 0x38
    NSMutableOrderedSet *_documentUpdateViewElements;	// 64 = 0x40
    VUIAppDocumentUpdateEventStore *_deferredDocumentUpdateEventStore;	// 72 = 0x48
    unsigned long long _viewWillAppearReason;	// 80 = 0x50
}

+ (id)_findCollectionListChildElementsInViewElement:(id)arg1;	// IMP=0x00000000002121e3
- (void).cxx_destruct;	// IMP=0x0000000000213995
@property(nonatomic, getter=isDocumentMarkedDirty) _Bool markDocumentDirtyForRefreshUpdate; // @synthesize markDocumentDirtyForRefreshUpdate=_markDocumentDirtyForRefreshUpdate;
@property(nonatomic) unsigned long long viewWillAppearReason; // @synthesize viewWillAppearReason=_viewWillAppearReason;
@property(nonatomic) _Bool deferDocumentUpdateEventProcessing; // @synthesize deferDocumentUpdateEventProcessing=_deferDocumentUpdateEventProcessing;
@property(retain, nonatomic) VUIAppDocumentUpdateEventStore *deferredDocumentUpdateEventStore; // @synthesize deferredDocumentUpdateEventStore=_deferredDocumentUpdateEventStore;
@property(retain, nonatomic) NSMutableOrderedSet *documentUpdateViewElements; // @synthesize documentUpdateViewElements=_documentUpdateViewElements;
@property(retain, nonatomic) id <VUIAppDocumentUpdateContext> documentUpdateContext; // @synthesize documentUpdateContext=_documentUpdateContext;
@property(copy, nonatomic) NSString *documentRef; // @synthesize documentRef=_documentRef;
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSMutableArray *impressionableSwiftViewControllers; // @synthesize impressionableSwiftViewControllers=_impressionableSwiftViewControllers;
@property(retain, nonatomic) NSString *viewControllerDocumentIdentifier; // @synthesize viewControllerDocumentIdentifier=_viewControllerDocumentIdentifier;
@property(retain, nonatomic) NSString *viewControllerIdentifier; // @synthesize viewControllerIdentifier=_viewControllerIdentifier;
- (_Bool)isEqualToAppDocumentServiceViewController:(id)arg1;	// IMP=0x0000000000213581
- (void)_disableFastScrollIfNeeded;	// IMP=0x00000000002133e8
- (void)_removeEventTypes:(id)arg1 receivedEvents:(id)arg2;	// IMP=0x00000000002131dd
- (_Bool)_hasRefreshEvents;	// IMP=0x000000000021306a
- (void)_removeStoreEvents:(unsigned long long)arg1;	// IMP=0x00000000002125d0
- (id)_receivedEvents;	// IMP=0x00000000002123b5
- (void)_unregisterDocumentUpdateEventDescriptors;	// IMP=0x00000000002120ec
- (void)_registerDocumentUpdateEventDescriptorsWithServiceCompletionStatus:(long long)arg1;	// IMP=0x0000000000211b6a
- (void)_startDocumentUpdatesForDeferredEventsIfPossible;	// IMP=0x000000000021179a
- (void)_performNextDocumentUpdateIfNeeded;	// IMP=0x00000000002114a8
- (void)_startDocumentUpdatesWithContext:(id)arg1;	// IMP=0x000000000021147a
- (void)_cancelDocumentUpdatesAndPreserveUpdateEvents;	// IMP=0x00000000002113a9
- (void)_cancelDocumentUpdates;	// IMP=0x0000000000211326
- (void)_cancelDocumentUpdateWithRequest:(id)arg1;	// IMP=0x0000000000211156
- (void)_startDocumentUpdateWithRequest:(id)arg1;	// IMP=0x0000000000210df5
- (void)documentDidUpdate:(id)arg1;	// IMP=0x0000000000210c77
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000210c6a
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x0000000000210b22
- (_Bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id *)arg4;	// IMP=0x0000000000210b1a
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;	// IMP=0x0000000000210a0b
- (void)updateServiceRequest:(id)arg1 documentDidChange:(id)arg2;	// IMP=0x00000000002108f8
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;	// IMP=0x0000000000210565
- (void)appDocumentHasBecomeActive;	// IMP=0x000000000021047d
- (void)appDocumentDidReceiveEvent:(id)arg1;	// IMP=0x00000000002102ec
- (void)viewWillAppearAfterTabSwitch;	// IMP=0x00000000002102d5
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000021009d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000210020
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000020ff2b
- (void)updateDocumentWithContextDictionary:(id)arg1 element:(id)arg2;	// IMP=0x000000000020fcd0
- (void)dealloc;	// IMP=0x000000000020fc7d
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000000020fc0e
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(_Bool)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4 viewControllerDocumentIdentifier:(id)arg5;	// IMP=0x000000000020f92b
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(_Bool)arg2;	// IMP=0x000000000020f8bc
- (id)initWithDocumentServiceRequest:(id)arg1;	// IMP=0x000000000020f84d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020f7de
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000020f76f
- (id)init;	// IMP=0x000000000020f700

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
