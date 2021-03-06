//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperation, NSOperationQueue, NSString, VUIMediaLibrary;
@protocol OS_dispatch_queue;

@interface VUIMediaLibraryFetchController : NSObject
{
    VUIMediaLibrary *_mediaLibrary;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_logName;	// 24 = 0x18
    NSString *_logNameSuffix;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 48 = 0x30
    NSOperationQueue *_serialFetchOperationQueue;	// 56 = 0x38
    NSOperation *_fetchOperation;	// 64 = 0x40
    unsigned long long _mediaLibraryRevision;	// 72 = 0x48
    unsigned long long _pauseCount;	// 80 = 0x50
}

+ (id)_logStringWithFetchControllers:(id)arg1;	// IMP=0x0000000000175412
- (void).cxx_destruct;	// IMP=0x000000000017621b
@property(nonatomic) unsigned long long pauseCount; // @synthesize pauseCount=_pauseCount;
@property(nonatomic) unsigned long long mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(retain, nonatomic) NSOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSOperationQueue *serialFetchOperationQueue; // @synthesize serialFetchOperationQueue=_serialFetchOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *logNameSuffix; // @synthesize logNameSuffix=_logNameSuffix;
@property(copy, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_enqueueSyncProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017602e
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000175f20
- (void)_enqueueProcessingQueueBlock:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;	// IMP=0x0000000000175e57
- (void)_fetchOperationCompleted:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000175b86
- (void)_enqueueFetchWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000175943
- (void)_startFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001758e2
- (void)_startFetchIfNeededWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000175752
- (void)_cancelFetch;	// IMP=0x0000000000175653
- (void)_moveToPausedState;	// IMP=0x000000000017561b
- (_Bool)_shouldFetchForMediaLibraryRevision:(unsigned long long)arg1;	// IMP=0x00000000001755f8
- (_Bool)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changeSet:(id)arg3 updateOnNoChanges:(_Bool)arg4;	// IMP=0x0000000000175547
- (void)_didCompleteFetchOperation:(id)arg1;	// IMP=0x00000000001754e7
- (id)_fetchOperationForFetchReason:(long long)arg1;	// IMP=0x0000000000175473
- (void)cancelFetch;	// IMP=0x00000000001753e4
- (void)beginFetchWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x0000000000174e2a
- (void)resume;	// IMP=0x0000000000174b51
- (void)pause;	// IMP=0x00000000001748ae
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000000174689
- (id)init;	// IMP=0x000000000017461a

@end

