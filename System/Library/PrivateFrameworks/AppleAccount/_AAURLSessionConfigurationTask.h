//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAURLSessionTaskProtocol-Protocol.h>

@class AAURLSession, NSString, NSURLRequest;
@protocol AAURLSessionTaskProtocol;

@interface _AAURLSessionConfigurationTask : NSObject <AAURLSessionTaskProtocol>
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    struct os_unfair_lock_s _unfairLock;	// 16 = 0x10
    struct {
        unsigned int isCanceled:1;
        unsigned int isFetchingConfiguration:1;
    } _flags;	// 20 = 0x14
    id <AAURLSessionTaskProtocol> _configurationTask;	// 24 = 0x18
    id <AAURLSessionTaskProtocol> _sessionTask;	// 32 = 0x20
    AAURLSession *_session;	// 40 = 0x28
    NSURLRequest *_originalRequest;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000748c5
@property(readonly, nonatomic) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly, nonatomic) AAURLSession *session; // @synthesize session=_session;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000074860
@property(readonly, copy) NSString *description;
- (void)cancel;	// IMP=0x0000000000074734
- (void)resume;	// IMP=0x0000000000074690
- (void)suspend;	// IMP=0x000000000007458a
- (void)_invokeCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;	// IMP=0x0000000000074461
- (void)_initiateSessionTaskWithConfiguration:(id)arg1;	// IMP=0x00000000000740e2
- (void)_unfairLock_initiateConfigurationTask;	// IMP=0x0000000000073f63
- (id)initWithSession:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000073d27
- (id)init;	// IMP=0x0000000000073cfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

