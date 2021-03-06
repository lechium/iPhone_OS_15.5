//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognitionSessionObserver-Protocol.h>

@class CHRecognitionSession, CHRecognitionSessionResult, NSString;
@protocol CHQueryDelegate, CHStrokeProviderVersion, OS_dispatch_queue;

@interface CHQuery : NSObject <CHRecognitionSessionObserver>
{
    NSObject<OS_dispatch_queue> *_processingQueue;	// 8 = 0x8
    CHRecognitionSessionResult *_currentProcessingSessionResult;	// 16 = 0x10
    double _lastProcessedTime;	// 24 = 0x18
    _Bool __queryActive;	// 32 = 0x20
    id <CHQueryDelegate> _delegate;	// 40 = 0x28
    CHRecognitionSession *_recognitionSession;	// 48 = 0x30
    id <CHStrokeProviderVersion> _lastProcessedStrokeProviderVersion;	// 56 = 0x38
    double _preferredUpdatesInterval;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000102660
@property(nonatomic) _Bool _queryActive; // @synthesize _queryActive=__queryActive;
@property(nonatomic) double preferredUpdatesInterval; // @synthesize preferredUpdatesInterval=_preferredUpdatesInterval;
@property(copy) id <CHStrokeProviderVersion> lastProcessedStrokeProviderVersion; // @synthesize lastProcessedStrokeProviderVersion=_lastProcessedStrokeProviderVersion;
@property(readonly, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
@property(nonatomic) __weak id <CHQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateForRecognitionSessionResultChangeIfNeeded;	// IMP=0x0000000000102340
- (void)waitForPendingUpdates;	// IMP=0x0000000000102270
- (void)pause;	// IMP=0x00000000001020e0
- (void)start;	// IMP=0x0000000000101eb0
- (void)dealloc;	// IMP=0x0000000000101e60
- (id)initWithRecognitionSession:(id)arg1;	// IMP=0x0000000000101c90
- (id)init;	// IMP=0x0000000000101c00
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;	// IMP=0x00000000001026d0
- (double)preferredRecognitionResultUpdatesInterval;	// IMP=0x00000000001026b0
@property(readonly, nonatomic) NSString *debugName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
- (id)q_sessionResult;	// IMP=0x0000000000102a60
- (void)q_queryResultDidChange;	// IMP=0x0000000000102800
- (void)q_setNeedsQueryResultUpdating;	// IMP=0x0000000000102780
- (void)q_updateQueryResult;	// IMP=0x0000000000102770

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

