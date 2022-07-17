//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProtocolBuffer/NSURLSessionDataDelegate-Protocol.h>
#import <ProtocolBuffer/NSURLSessionTaskDelegatePrivate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionTask, PBDataReader;
@protocol PBSessionRequesterDelegate;

@interface PBSessionRequester : NSObject <NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate>
{
    NSURL *_URL;	// 8 = 0x8
    id <PBSessionRequesterDelegate> _delegate;	// 16 = 0x10
    NSOperationQueue *_delegateQueue;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    NSURLSessionTask *_currentTask;	// 40 = 0x28
    NSOperationQueue *_sessionDelegateQ;	// 48 = 0x30
    NSMutableData *_data;	// 56 = 0x38
    PBDataReader *_dataReader;	// 64 = 0x40
    unsigned long long _lastGoodDataOffset;	// 72 = 0x48
    unsigned long long _uploadPayloadSize;	// 80 = 0x50
    unsigned long long _downloadPayloadSize;	// 88 = 0x58
    unsigned long long _timeRequestSent;	// 96 = 0x60
    unsigned long long _timeResponseReceived;	// 104 = 0x68
    long long _responseStatusCode;	// 112 = 0x70
    NSMutableArray *_requests;	// 120 = 0x78
    NSMutableArray *_responses;	// 128 = 0x80
    NSMutableArray *_internalRequests;	// 136 = 0x88
    NSMutableArray *_internalResponses;	// 144 = 0x90
    NSDictionary *_httpResponseHeaders;	// 152 = 0x98
    NSMutableDictionary *_httpRequestHeaders;	// 160 = 0xa0
    double _timeoutSeconds;	// 168 = 0xa8
    NSString *_logRequestToFile;	// 176 = 0xb0
    NSString *_logResponseToFile;	// 184 = 0xb8
    _Bool _didNotifyRequestCompleted;	// 192 = 0xc0
    NSArray *_clientCertificates;	// 200 = 0xc8
    NSDictionary *_connectionProperties;	// 208 = 0xd0
    _Bool _shouldHandleCookies;	// 216 = 0xd8
    NSString *_apsRelayTopic;	// 224 = 0xe0
    unsigned long long _nwActivityDomain;	// 232 = 0xe8
    unsigned long long _nwActivityLabel;	// 240 = 0xf0
    struct {
        unsigned int ignoresResponse:1;
        unsigned int loading:1;
        unsigned int needsCancel:1;
        unsigned int responseStatusSet:1;
        unsigned int parsedResponseHeader:1;
        unsigned int delegateDidReceiveResponse:1;
        unsigned int delegateDidFinish:1;
        unsigned int delegateDidCancel:1;
        unsigned int delegateDidFailWithError:1;
        unsigned int paused:1;
        unsigned int resuming:1;
    } _flags;	// 248 = 0xf8
}

+ (_Bool)usesEncodedMessages;	// IMP=0x00000000000152a3
- (void).cxx_destruct;	// IMP=0x00000000000133c9
@property(nonatomic) unsigned long long nwActivityLabel; // @synthesize nwActivityLabel=_nwActivityLabel;
@property(nonatomic) unsigned long long nwActivityDomain; // @synthesize nwActivityDomain=_nwActivityDomain;
@property(copy, nonatomic) NSString *apsRelayTopic; // @synthesize apsRelayTopic=_apsRelayTopic;
@property(nonatomic) _Bool shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(readonly, nonatomic) unsigned long long downloadPayloadSize; // @synthesize downloadPayloadSize=_downloadPayloadSize;
@property(readonly, nonatomic) unsigned long long uploadPayloadSize; // @synthesize uploadPayloadSize=_uploadPayloadSize;
@property(retain, nonatomic) NSString *logResponseToFile; // @synthesize logResponseToFile=_logResponseToFile;
@property(retain, nonatomic) NSString *logRequestToFile; // @synthesize logRequestToFile=_logRequestToFile;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(retain, nonatomic) NSDictionary *httpResponseHeaders; // @synthesize httpResponseHeaders=_httpResponseHeaders;
@property(retain, nonatomic) NSURLSessionTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak id <PBSessionRequesterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)startWithConnectionProperties:(id)arg1;	// IMP=0x0000000000013220
- (id)newSessionTaskOnSession:(id)arg1 withURLRequest:(id)arg2;	// IMP=0x00000000000131ff
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3;	// IMP=0x00000000000131ef
- (id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x00000000000131df
- (id)newMutableURLRequestWithURL:(id)arg1;	// IMP=0x00000000000131b3
- (id)decodeResponseData:(id)arg1;	// IMP=0x00000000000131a6
- (void)encodeRequestData:(id)arg1 startRequestCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013193
@property(readonly, nonatomic) unsigned long long requestResponseTime;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012fd0
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012dbe
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000000126c2
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000000124c2
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012234
- (id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3;	// IMP=0x000000000001211f
- (_Bool)readResponsePreamble:(id)arg1;	// IMP=0x000000000001205b
- (void)cancelWithErrorCode:(long long)arg1;	// IMP=0x000000000001204c
- (void)resume;	// IMP=0x000000000001200b
- (_Bool)isPaused;	// IMP=0x0000000000011ffb
- (void)pause;	// IMP=0x0000000000011f1d
- (void)cancel;	// IMP=0x0000000000011d87
- (void)start;	// IMP=0x0000000000011d7d
- (void)writeRequest:(id)arg1 into:(id)arg2;	// IMP=0x0000000000011cb7
- (id)requestPreamble;	// IMP=0x0000000000011a4a
- (void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000119b4
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;
- (void)handleResponse:(id)arg1 forInternalRequest:(id)arg2;	// IMP=0x000000000001195a
- (id)responseForInternalRequest:(id)arg1;	// IMP=0x00000000000118a7
- (void)addInternalRequest:(id)arg1;	// IMP=0x000000000001183c
- (id)internalRequests;	// IMP=0x000000000001182b
- (id)responseForRequest:(id)arg1;	// IMP=0x000000000001177e
- (void)addRequest:(id)arg1;	// IMP=0x000000000001171f
- (void)clearRequests;	// IMP=0x0000000000011709
@property(readonly, nonatomic) __weak NSArray *requests;
- (void)setNeedsCancel;	// IMP=0x00000000000116e9
@property(nonatomic) _Bool ignoresResponse;
- (void)dealloc;	// IMP=0x000000000001166b
- (id)initWithURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x000000000001148e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
