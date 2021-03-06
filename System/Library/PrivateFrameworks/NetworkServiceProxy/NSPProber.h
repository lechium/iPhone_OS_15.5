//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>
#import <NetworkServiceProxy/NSSecureCoding-Protocol.h>
#import <NetworkServiceProxy/NSURLSessionTaskDelegate-Protocol.h>

@class NSDate, NSOperationQueue, NSString, NSURLSession, NSURLSessionDataTask, NWPath;
@protocol NSPProberDelegate, OS_dispatch_source;

@interface NSPProber : NSObject <NSSecureCoding, NSCopying, NSURLSessionTaskDelegate>
{
    _Bool _probingActive;	// 8 = 0x8
    _Bool _probeOnNetworkChange;	// 9 = 0x9
    _Bool _probePending;	// 10 = 0xa
    _Bool _proxyProber;	// 11 = 0xb
    int _linkQuality;	// 12 = 0xc
    id <NSPProberDelegate> _delegate;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSURLSession *_probeSession;	// 32 = 0x20
    NSURLSessionDataTask *_dataTask;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_probeRetryTimer;	// 56 = 0x38
    unsigned long long _probeCount;	// 64 = 0x40
    unsigned long long _probeConnectionTimeout;	// 72 = 0x48
    NSDate *_nextProbeDate;	// 80 = 0x50
    NWPath *_path;	// 88 = 0x58
    unsigned long long _probeSuccessCount;	// 96 = 0x60
    unsigned long long _probeFailedCount;	// 104 = 0x68
    unsigned long long _probeRedirectedCount;	// 112 = 0x70
    unsigned long long _probeServerErrorCount;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009eaa0
- (void).cxx_destruct;	// IMP=0x00000000000a0780
@property(nonatomic) _Bool proxyProber; // @synthesize proxyProber=_proxyProber;
@property(nonatomic) unsigned long long probeServerErrorCount; // @synthesize probeServerErrorCount=_probeServerErrorCount;
@property(nonatomic) unsigned long long probeRedirectedCount; // @synthesize probeRedirectedCount=_probeRedirectedCount;
@property(nonatomic) unsigned long long probeFailedCount; // @synthesize probeFailedCount=_probeFailedCount;
@property(nonatomic) unsigned long long probeSuccessCount; // @synthesize probeSuccessCount=_probeSuccessCount;
@property(nonatomic) _Bool probePending; // @synthesize probePending=_probePending;
@property(retain, nonatomic) NWPath *path; // @synthesize path=_path;
@property(retain, nonatomic) NSDate *nextProbeDate; // @synthesize nextProbeDate=_nextProbeDate;
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(nonatomic) _Bool probeOnNetworkChange; // @synthesize probeOnNetworkChange=_probeOnNetworkChange;
@property(nonatomic) _Bool probingActive; // @synthesize probingActive=_probingActive;
@property(nonatomic) unsigned long long probeConnectionTimeout; // @synthesize probeConnectionTimeout=_probeConnectionTimeout;
@property(nonatomic) unsigned long long probeCount; // @synthesize probeCount=_probeCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *probeRetryTimer; // @synthesize probeRetryTimer=_probeRetryTimer;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSURLSession *probeSession; // @synthesize probeSession=_probeSession;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property __weak id <NSPProberDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleLinkQualityChange:(int)arg1;	// IMP=0x00000000000a056d
- (void)handlePathChange:(id)arg1;	// IMP=0x00000000000a04f9
- (void)retryNetworkFetch;	// IMP=0x00000000000a033f
- (void)resetPendingFetches;	// IMP=0x00000000000a01bb
- (void)startProbing;	// IMP=0x00000000000a0091
- (void)sendProbe:(CDUnknownBlockType)arg1;	// IMP=0x000000000009f633
- (void)probeServerError;	// IMP=0x000000000009f4c0
- (void)probeRedirected;	// IMP=0x000000000009f34d
- (void)probeSuccess;	// IMP=0x000000000009f1da
- (void)probeFailed;	// IMP=0x000000000009f067
- (void)setProbeRetryTimerWithRetryInterval:(unsigned long long)arg1;	// IMP=0x000000000009eaa8
- (void)dealloc;	// IMP=0x000000000009e929
- (void)setup;	// IMP=0x000000000009e4f1
- (id)initWithDelegate:(id)arg1 probeName:(id)arg2 linkQuality:(int)arg3 path:(id)arg4 proxyProber:(_Bool)arg5;	// IMP=0x000000000009e42d
- (void)setProbeParametersForLinkQuality;	// IMP=0x000000000009e366
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009e094
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009de92
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009dcde
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000009db0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

