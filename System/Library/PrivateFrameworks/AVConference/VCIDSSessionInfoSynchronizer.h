//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, VCConnectionManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCIDSSessionInfoSynchronizer : NSObject
{
    NSMutableArray *_peerSubscribedStreams;	// 8 = 0x8
    NSMutableDictionary *_peerPublishedStreams;	// 16 = 0x10
    NSMutableArray *_publishedStreams;	// 24 = 0x18
    NSMutableDictionary *_subscribedStreams;	// 32 = 0x20
    CDUnknownBlockType _peerSubscribedStreamCallback;	// 40 = 0x28
    CDUnknownBlockType _peerPublishedStreamCallback;	// 48 = 0x30
    CDUnknownBlockType _errorReponseCallback;	// 56 = 0x38
    id _delegate;	// 64 = 0x40
    unsigned int _currentParticipantGenerationCounter;	// 72 = 0x48
    NSNumber *_primaryLinkID;	// 80 = 0x50
    NSNumber *_duplicationLinkID;	// 88 = 0x58
    VCConnectionManager *_connectionManager;	// 96 = 0x60
    id _reportingAgentWeak;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_stateQueue;	// 112 = 0x70
    int _sessionInfoRequestBytesUsed;	// 120 = 0x78
    int _sessionInfoResponseBytesUsed;	// 124 = 0x7c
    int _lastProcessedBytesSent;	// 128 = 0x80
    int _bytesSentToReport;	// 132 = 0x84
    int _maxSentRate;	// 136 = 0x88
    int _minSentRate;	// 140 = 0x8c
    int _lastProcessedBytesReceived;	// 144 = 0x90
    int _bytesReceivedToReport;	// 148 = 0x94
    int _maxReceivedRate;	// 152 = 0x98
    int _minReceivedRate;	// 156 = 0x9c
    double _lastUpdateTimestamp;	// 160 = 0xa0
    unsigned int _subscribedStreamsRetryCount;	// 168 = 0xa8
}

@property(copy, nonatomic) CDUnknownBlockType errorReponseCallback; // @synthesize errorReponseCallback=_errorReponseCallback;
@property(copy, nonatomic) CDUnknownBlockType peerPublishedStreamCallback; // @synthesize peerPublishedStreamCallback=_peerPublishedStreamCallback;
@property(copy, nonatomic) CDUnknownBlockType peerSubscribedStreamCallback; // @synthesize peerSubscribedStreamCallback=_peerSubscribedStreamCallback;
- (void)deregisterPeriodicTask;	// IMP=0x00000000002cb91f
- (void)setErrorResponseCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cb903
- (id)sessionInfoSynchronizerDelegate;	// IMP=0x00000000002cb8f5
@property(readonly) id reportingAgent;
- (void)setVCIDSSessionInfoPublishedStreamIDs:(id)arg1;	// IMP=0x00000000002cb493
- (void)sendVCIDSSessionInfoSubscribedStreamIDs:(id)arg1;	// IMP=0x00000000002cb070
- (void)retryVCIDSSessionInfoSubscribedStreamIDs;	// IMP=0x00000000002cae46
- (void)setVCIDSSessionInfoSubscribedStreamIDs:(id)arg1;	// IMP=0x00000000002cabb2
- (void)dealloc;	// IMP=0x00000000002caad8
- (void)flushRealTimeReportingStats;	// IMP=0x00000000002cd5ab
- (void)registerPeriodicTask;	// IMP=0x00000000002cd558
- (void)periodicTask:(void *)arg1;	// IMP=0x00000000002cd322
- (void)optOutStreamIDsForNonPrimaryConnection:(id)arg1 sentOnConnection:(id)arg2;	// IMP=0x00000000002cd0ac
- (void)optInStreamIDsForNewPrimaryConnection:(id)arg1 oldPrimaryConnection:(id)arg2;	// IMP=0x00000000002cd06a
- (void)optInAllStreamsForConnection:(id)arg1;	// IMP=0x00000000002cd051
- (void)optInStreamIDsForConnection:(id)arg1;	// IMP=0x00000000002ccd94
- (void)updateVCIDSSessionInfoResponse:(id)arg1;	// IMP=0x00000000002cbfbd
- (void)checkVCIDSSessionInfoNeedUpdate:(unsigned char)arg1;	// IMP=0x00000000002cbd73
- (void)resetParticipantGenerationCounter;	// IMP=0x00000000002cbc98
@property(retain, nonatomic) NSNumber *duplicationLinkID;
@property(retain, nonatomic) NSNumber *primaryLinkID;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 reportingAgent:(id)arg3;	// IMP=0x00000000002cb989

@end
