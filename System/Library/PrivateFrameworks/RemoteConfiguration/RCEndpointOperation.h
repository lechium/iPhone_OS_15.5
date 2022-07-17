//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject, NSURL, RCConfigurationSettings;
@protocol OS_dispatch_queue;

@interface RCEndpointOperation
{
    RCConfigurationSettings *_configurationSettings;	// 8 = 0x8
    NSDictionary *_changeTagsByRequestKey;	// 16 = 0x10
    NSURL *_endpointURL;	// 24 = 0x18
    CDUnknownBlockType _configurationCompletionHandler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_completionQueue;	// 40 = 0x28
    NSDictionary *_configurationResourcesByRequestKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000cfd8
@property(retain, nonatomic) NSDictionary *configurationResourcesByRequestKey; // @synthesize configurationResourcesByRequestKey=_configurationResourcesByRequestKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType configurationCompletionHandler; // @synthesize configurationCompletionHandler=_configurationCompletionHandler;
@property(retain, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
@property(retain, nonatomic) NSDictionary *changeTagsByRequestKey; // @synthesize changeTagsByRequestKey=_changeTagsByRequestKey;
@property(retain, nonatomic) RCConfigurationSettings *configurationSettings; // @synthesize configurationSettings=_configurationSettings;
- (void)resetForRetry;	// IMP=0x000000000000cee9
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;	// IMP=0x000000000000cda7
- (unsigned long long)maxRetries;	// IMP=0x000000000000cd9c
- (id)_configurationErrorForErrorDicts:(id)arg1;	// IMP=0x000000000000cd1f
- (void)_parseEndpointResponse:(id)arg1 configurationSettings:(id)arg2 maxAge:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c065
- (id)requestDataForSettings:(id)arg1;	// IMP=0x000000000000b918
- (void)_fetchConfigurationWithSettings:(id)arg1;	// IMP=0x000000000000b3a7
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x000000000000b23a
- (void)performOperation;	// IMP=0x000000000000b103
- (_Bool)validateOperation;	// IMP=0x000000000000b069

@end
