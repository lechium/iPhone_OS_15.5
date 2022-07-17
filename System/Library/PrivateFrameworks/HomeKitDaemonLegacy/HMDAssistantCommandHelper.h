//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSArray, NSMutableArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommandHelper : HMFObject <HMFMessageReceiver, HMFLogging>
{
    _Bool _executingActionSet;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
    CDUnknownBlockType _mediaResponseHandler;	// 24 = 0x18
    NSUUID *_messageId;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    HMFMessageDispatcher *_msgDispatcher;	// 56 = 0x38
    NSUUID *_uuid;	// 64 = 0x40
    NSMutableArray *_responses;	// 72 = 0x48
    unsigned long long _numErrors;	// 80 = 0x50
    NSArray *_requests;	// 88 = 0x58
    NSArray *_mediaRequests;	// 96 = 0x60
    NSMutableArray *_mediaResponses;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x00000000002e1d25
- (void).cxx_destruct;	// IMP=0x00000000002e0f05
@property(retain, nonatomic) NSMutableArray *mediaResponses; // @synthesize mediaResponses=_mediaResponses;
@property(retain, nonatomic) NSArray *mediaRequests; // @synthesize mediaRequests=_mediaRequests;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) _Bool executingActionSet; // @synthesize executingActionSet=_executingActionSet;
@property(nonatomic) unsigned long long numErrors; // @synthesize numErrors=_numErrors;
@property(retain, nonatomic) NSMutableArray *responses; // @synthesize responses=_responses;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSUUID *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) CDUnknownBlockType mediaResponseHandler; // @synthesize mediaResponseHandler=_mediaResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (void)removeResponses:(id)arg1;	// IMP=0x00000000002e0cb8
- (void)addActionSetRequest:(id)arg1 actionSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e0833
- (void)addWriteRequests:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e0441
- (void)addReadRequests:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e0050
- (void)addMediaWriteRequests:(id)arg1 withRequestProperty:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002df945
- (void)handleAccessoryCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000002df894
- (void)__handleAccessoryCharacteristicsChanged:(id)arg1;	// IMP=0x00000000002de9cc
- (void)_reportOperationStartedForAccessory:(id)arg1;	// IMP=0x00000000002de189
- (void)reportOperationStartedForAccessory:(id)arg1;	// IMP=0x00000000002de0d8
- (void)_reportResponses;	// IMP=0x00000000002dd434
- (void)_reportResponsesForMediaRequests;	// IMP=0x00000000002dcd07
- (void)timeoutAndReportResults;	// IMP=0x00000000002dcc96
- (void)_register;	// IMP=0x00000000002dcc32
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)dealloc;	// IMP=0x00000000002dcb66
- (id)initWithQueue:(id)arg1 msgDispatcher:(id)arg2;	// IMP=0x00000000002dca08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
