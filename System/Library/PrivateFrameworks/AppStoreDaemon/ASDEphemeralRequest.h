//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDRequestOptions;

@interface ASDEphemeralRequest
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    ASDRequestOptions *_options;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002f1e4
+ (long long)requestType;	// IMP=0x000000000002f1c5
- (void).cxx_destruct;	// IMP=0x000000000002f7c9
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) ASDRequestOptions *options; // @synthesize options=_options;
- (void)_startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f6b7
- (void)_failCompletionHandlerWithError:(id)arg1;	// IMP=0x000000000002f51f
- (void)_callCompletionHandlerWithResponse:(id)arg1;	// IMP=0x000000000002f322
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002f287
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f1ec
- (void)receiveResponse:(id)arg1;	// IMP=0x000000000002f1d2
- (id)_initWithOptions:(id)arg1;	// IMP=0x000000000002f14b
- (id)init;	// IMP=0x000000000002f137

@end
