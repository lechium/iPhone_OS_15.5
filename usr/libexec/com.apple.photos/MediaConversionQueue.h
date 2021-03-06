//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MediaConversionQueueEntry, NSMutableArray, NSString, PFCameraViewfinderSessionWatcher;
@protocol MediaConversionQueueDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaConversionQueue : NSObject
{
    struct os_unfair_lock_s _queueStateLock;	// 8 = 0x8
    unsigned long long _queueEntryCounter;	// 16 = 0x10
    unsigned long long _requestCounter;	// 24 = 0x18
    NSMutableArray *_queuedRequests;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_cameraWatcherQueue;	// 48 = 0x30
    MediaConversionQueueEntry *_currentlyProcessingRequestQueueEntry;	// 56 = 0x38
    NSObject<MediaConversionQueueDelegate> *_delegate;	// 64 = 0x40
    PFCameraViewfinderSessionWatcher *_cameraWatcher;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000d7ad
@property(retain) PFCameraViewfinderSessionWatcher *cameraWatcher; // @synthesize cameraWatcher=_cameraWatcher;
@property __weak NSObject<MediaConversionQueueDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) MediaConversionQueueEntry *currentlyProcessingRequestQueueEntry; // @synthesize currentlyProcessingRequestQueueEntry=_currentlyProcessingRequestQueueEntry;
@property(retain) NSObject<OS_dispatch_queue> *cameraWatcherQueue; // @synthesize cameraWatcherQueue=_cameraWatcherQueue;
@property(retain) NSObject<OS_dispatch_queue> *requestProcessingQueue; // @synthesize requestProcessingQueue=_requestProcessingQueue;
@property(retain) NSMutableArray *queuedRequests; // @synthesize queuedRequests=_queuedRequests;
@property unsigned long long requestCounter; // @synthesize requestCounter=_requestCounter;
@property unsigned long long queueEntryCounter; // @synthesize queueEntryCounter=_queueEntryCounter;
@property struct os_unfair_lock_s queueStateLock; // @synthesize queueStateLock=_queueStateLock;
- (void)cameraWatcherDidChangeState:(id)arg1;	// IMP=0x001000000000d4c7
- (void)sendCancellationReplyForClientRequest:(id)arg1;	// IMP=0x001000000000d2b2
- (void)cancelRequestsForConnectionIdentifier:(id)arg1;	// IMP=0x001000000000d0a8
- (void)assertDelegate:(id)arg1 respondsToSelector:(SEL)arg2;	// IMP=0x001000000000cf65
- (_Bool)findAndRemoveCancelledRequest:(id *)arg1 queueEntryWithoutRemainingClients:(id *)arg2 forRequestIdentifier:(id)arg3 shouldCancelCurrentQueueEntry:(_Bool *)arg4;	// IMP=0x001000000000cc51
- (void)cancelRequestWithIdentifier:(id)arg1;	// IMP=0x001000000000c9da
- (void)modifyRequestWithIdentifier:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c771
- (id)orderingSummaryForRequestList:(id)arg1;	// IMP=0x001000000000c710
- (_Bool)copyConversionOutput:(id)arg1 toRequestDestination:(id)arg2 requestIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x001000000000c50a
- (void)processCompletedQueueEntry:(id)arg1 resultURLCollection:(id)arg2 didConvertSuccessfully:(_Bool)arg3 conversionOutputInformation:(id)arg4 conversionOutputData:(id)arg5 conversionOutputFileType:(id)arg6 conversionError:(id)arg7;	// IMP=0x001000000000bcaf
- (id)markCompletionAndRetrieveClientRequestsForQueueEntry:(id)arg1 resultURLCollection:(id)arg2 didConvertSuccessfully:(_Bool)arg3 conversionOutputInformation:(id)arg4 conversionOutputData:(id)arg5 conversionOutputFileType:(id)arg6 conversionError:(id)arg7;	// IMP=0x001000000000ba63
- (id)entriesSortedByExecutionOrderForPendingEntries:(id)arg1;	// IMP=0x001000000000ba0a
- (id)optimizeQueueAndDequeueNextRequest;	// IMP=0x001000000000b73f
- (void)processQueue;	// IMP=0x001000000000b544
- (void)scheduleQueueProcessing;	// IMP=0x001000000000b4f9
- (id)anyDestinationURLCollectionForQueueEntry:(id)arg1;	// IMP=0x001000000000b496
- (void)enumerateCurrentlyProcessingAndQueuedEntries:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b3e1
- (_Bool)currentlyProcessingRequestQueueEntryIsPresentAndOptional;	// IMP=0x001000000000b3aa
- (_Bool)enqueueEntry:(id)arg1 clientRequest:(id)arg2 isDuplicateOfOriginalQueueEntry:(id *)arg3;	// IMP=0x001000000000acfa
- (id)queueEntryWithConversionOptions:(id)arg1;	// IMP=0x001000000000abce
- (unsigned long long)nextRequestNumber;	// IMP=0x001000000000ab94
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000000aa4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

