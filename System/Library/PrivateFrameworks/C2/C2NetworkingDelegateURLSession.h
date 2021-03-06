//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, NSURLSessionConfiguration;
@protocol C2NetworkingDelegate, NSURLSessionDelegate><C2RequestDelegate;

@interface C2NetworkingDelegateURLSession : NSObject
{
    NSObject<C2NetworkingDelegate> *_networkingDelegate;	// 8 = 0x8
    NSString *_sessionDescription;	// 16 = 0x10
    NSOperationQueue *_delegateQueue;	// 24 = 0x18
    NSURLSessionConfiguration *_configuration;	// 32 = 0x20
    id <NSURLSessionDelegate><C2RequestDelegate> _sessionDelegate;	// 40 = 0x28
}

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x0000000000015a14
- (void).cxx_destruct;	// IMP=0x0000000000015d26
@property(nonatomic) __weak id <NSURLSessionDelegate><C2RequestDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(copy) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(copy) NSString *sessionDescription; // @synthesize sessionDescription=_sessionDescription;
@property(nonatomic) __weak NSObject<C2NetworkingDelegate> *networkingDelegate; // @synthesize networkingDelegate=_networkingDelegate;
- (void)_useTLSSessionCacheFromSession:(id)arg1;	// IMP=0x0000000000015c69
- (void)invalidateAndCancel;	// IMP=0x0000000000015b44
- (id)dataTaskWithRequest:(id)arg1;	// IMP=0x0000000000015ac8

@end

