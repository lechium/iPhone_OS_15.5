//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface ADSecurityService : NSObject
{
    NSObject<OS_dispatch_queue> *_procedureQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_keychainQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSData *_inMemorySalt;	// 32 = 0x20
}

+ (id)sharedService;	// IMP=0x002000000013ff70
- (void).cxx_destruct;	// IMP=0x0020000000142146
- (void)_accountDidChange:(id)arg1;	// IMP=0x001000000014206c
- (void)_retrieveKeyAndSaltWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000141d07
- (void)_dispatchCallbackForProcessedDataMap:(id)arg1 errorMap:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000141c0e
- (void)_dispatchCallbackForProcessedData:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000141b12
- (oneway void)internalAuthSessionToken:(CDUnknownBlockType)arg1;	// IMP=0x0010000000141a05
- (oneway void)internalAuthAppleConnectServiceTicket:(CDUnknownBlockType)arg1;	// IMP=0x00100000001418f8
- (oneway void)setInternalAuthSessionToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001417fb
- (oneway void)setInternalAuthAppleConnectServiceTicket:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001416fe
- (oneway void)setKeychainValue:(id)arg1 forKey:(id)arg2 accountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000014146d
- (oneway void)processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001406a4
- (oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013ffc5
- (id)init;	// IMP=0x001000000013fbb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

