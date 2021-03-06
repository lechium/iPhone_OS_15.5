//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Network/NSCopying-Protocol.h>

@class NSArray, NSDate, NSError, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSessionTaskMetrics, NWURLSession, NWURLSessionRequestBodyInfo;
@protocol NWURLSessionRequestBodyProvider, NWURLSessionResponseConsumer, OS_dispatch_queue, OS_nw_activity, OS_nw_connection, OS_nw_content_context;

@interface NWURLSessionTask : NSObject <NSCopying>
{
    _Bool __isTopLevelNavigation;	// 8 = 0x8
    _Bool __preconnect;	// 9 = 0x9
    float _priority;	// 12 = 0xc
    unsigned int _qos;	// 16 = 0x10
    unsigned long long _taskIdentifier;	// 24 = 0x18
    NSURLRequest *_originalRequest;	// 32 = 0x20
    NSURLRequest *_currentRequest;	// 40 = 0x28
    NSURLResponse *_response;	// 48 = 0x30
    NSProgress *_progress;	// 56 = 0x38
    NSDate *_earliestBeginDate;	// 64 = 0x40
    long long _countOfBytesClientExpectsToSend;	// 72 = 0x48
    long long _countOfBytesClientExpectsToReceive;	// 80 = 0x50
    long long _countOfBytesSent;	// 88 = 0x58
    long long _countOfBytesReceived;	// 96 = 0x60
    long long _countOfBytesExpectedToSend;	// 104 = 0x68
    long long _countOfBytesExpectedToReceive;	// 112 = 0x70
    NSString *_taskDescription;	// 120 = 0x78
    NSError *_error;	// 128 = 0x80
    NSObject<OS_nw_activity> *__nw_activity;	// 136 = 0x88
    NSString *__pathToDownloadTaskFile;	// 144 = 0x90
    NSString *__storagePartitionIdentifier;	// 152 = 0x98
    NSURL *__siteForCookies;	// 160 = 0xa0
    CDUnknownBlockType __cookieTransformCallback;	// 168 = 0xa8
    NWURLSession *_session;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_queue;	// 184 = 0xb8
    id <NWURLSessionRequestBodyProvider> _requestBodyProvider;	// 192 = 0xc0
    unsigned long long _suspendCount;	// 200 = 0xc8
    long long _internalState;	// 208 = 0xd0
    NSObject<OS_nw_connection> *_connection;	// 216 = 0xd8
    NSObject<OS_nw_content_context> *_requestContext;	// 224 = 0xe0
    NWURLSessionRequestBodyInfo *_requestBody;	// 232 = 0xe8
    id <NWURLSessionResponseConsumer> _responseConsumer;	// 240 = 0xf0
    NSURLSessionTaskMetrics *_metrics;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000000004fe10
@property(copy, nonatomic) CDUnknownBlockType _cookieTransformCallback; // @synthesize _cookieTransformCallback=__cookieTransformCallback;
@property(nonatomic) _Bool _preconnect; // @synthesize _preconnect=__preconnect;
@property(nonatomic) _Bool _isTopLevelNavigation; // @synthesize _isTopLevelNavigation=__isTopLevelNavigation;
@property(copy, nonatomic) NSURL *_siteForCookies; // @synthesize _siteForCookies=__siteForCookies;
@property(copy, nonatomic) NSString *_storagePartitionIdentifier; // @synthesize _storagePartitionIdentifier=__storagePartitionIdentifier;
@property(copy, nonatomic) NSString *_pathToDownloadTaskFile; // @synthesize _pathToDownloadTaskFile=__pathToDownloadTaskFile;
@property(retain, nonatomic) NSObject<OS_nw_activity> *_nw_activity; // @synthesize _nw_activity=__nw_activity;
@property float priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(readonly, nonatomic) long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property(readonly, nonatomic) long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property(readonly, nonatomic) long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property(readonly, nonatomic) long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property(nonatomic) long long countOfBytesClientExpectsToReceive; // @synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive;
@property(nonatomic) long long countOfBytesClientExpectsToSend; // @synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend;
@property(copy, nonatomic) NSDate *earliestBeginDate; // @synthesize earliestBeginDate=_earliestBeginDate;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, copy, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly, nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;	// IMP=0x000000000004fbc0
@property(readonly, nonatomic) NSArray *_resolvedCNAMEChain;
- (id)_timingData;	// IMP=0x000000000004fba0
@property(readonly) NSURLSessionTaskMetrics *_incompleteTaskMetrics;
- (void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004fb70
@property(readonly, nonatomic) long long state;
- (void)cancel;	// IMP=0x000000000004fb20
- (void)suspend;	// IMP=0x000000000004fb10
- (void)resume;	// IMP=0x000000000004ede0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004edd0
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000004ed70

@end

