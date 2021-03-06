//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, NSMutableDictionary, NSString;
@protocol AVCMomentsDelegate, OS_dispatch_queue;

@interface AVCMoments : NSObject
{
    AVConferenceXPCClient *_connection;	// 8 = 0x8
    long long _streamToken;	// 16 = 0x10
    id _delegate;	// 24 = 0x18
    unsigned int _capabilities;	// 32 = 0x20
    NSString *_requesterID;	// 40 = 0x28
    NSMutableDictionary *_requests;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 56 = 0x38
    int _currentActiveRequestsCount;	// 64 = 0x40
    int _currentPendingRequestsCount;	// 68 = 0x44
}

@property(readonly, nonatomic) NSString *requesterID; // @synthesize requesterID=_requesterID;
@property(readonly, nonatomic) int pendingRequestCount; // @synthesize pendingRequestCount=_currentPendingRequestsCount;
@property(readonly, nonatomic) int activeRequestCount; // @synthesize activeRequestCount=_currentActiveRequestsCount;
@property(readonly, nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
- (_Bool)avcMomentsRequestDidRejectRequest:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000002f7805
- (_Bool)avcMomentsRequestDidEndRequest:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000002f762d
- (_Bool)avcMomentsRequestDidStartRequest:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000002f7479
- (id)newDictionaryForRequest:(id)arg1;	// IMP=0x00000000002f7335
- (id)newRequestWithMediaType:(unsigned char)arg1 mode:(unsigned char)arg2 requesteeID:(id)arg3;	// IMP=0x00000000002f70a3
- (id)newRequestWithMediaType:(unsigned char)arg1 requesteeID:(id)arg2;	// IMP=0x00000000002f7089
@property(readonly, nonatomic) id <AVCMomentsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishRequestHelperWithResult:(id)arg1;	// IMP=0x00000000002f6c67
- (void)didEndProcessingRequestHelperWithResult:(id)arg1;	// IMP=0x00000000002f65c6
- (void)didStartProcessingRequestHelperWithResult:(id)arg1;	// IMP=0x00000000002f624c
- (void)deregisterBlocksForNotifications;	// IMP=0x00000000002f61e1
- (void)registerBlocksForNotifications;	// IMP=0x00000000002f59e7
- (void)disconnect;	// IMP=0x00000000002f58fb
- (_Bool)connect;	// IMP=0x00000000002f55fd
- (id)description;	// IMP=0x00000000002f55a6
- (void)dealloc;	// IMP=0x00000000002f5500
- (id)initWithStreamToken:(long long)arg1 requesterID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;	// IMP=0x00000000002f51ab

@end

