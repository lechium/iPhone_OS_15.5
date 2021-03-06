//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFLogEventSessionVoucher, NSString, NSUUID;
@protocol HMFLogBackendSession;

@interface HMFLogEventSession : NSObject <HMFLogging>
{
    unsigned long long _signpostId;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSUUID *_rootUUID;	// 24 = 0x18
    id <HMFLogBackendSession> _backend;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000000158a1
+ (void)submitEventWithName:(id)arg1 serviceName:(id)arg2 payload:(id)arg3;	// IMP=0x0000000000015889
+ (void)submitEventWithName:(id)arg1 serviceName:(id)arg2 uploadImmediately:(_Bool)arg3 payload:(id)arg4;	// IMP=0x00000000000157b1
+ (id)backendWithServiceName:(id)arg1 samplingUUID:(id)arg2 uploadImmediately:(_Bool)arg3;	// IMP=0x000000000001519e
- (void).cxx_destruct;	// IMP=0x0000000000015930
@property(readonly, nonatomic) id <HMFLogBackendSession> backend; // @synthesize backend=_backend;
@property(readonly, nonatomic) NSUUID *rootUUID; // @synthesize rootUUID=_rootUUID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
- (void)submitEventWithName:(id)arg1 payload:(id)arg2;	// IMP=0x000000000001553d
@property(readonly, nonatomic) NSString *serviceName;
- (void)dealloc;	// IMP=0x00000000000154f8
@property(readonly, nonatomic) HMFLogEventSessionVoucher *voucher;
- (id)initWithUUID:(id)arg1 backend:(id)arg2;	// IMP=0x00000000000152d0
- (id)initWithUUID:(id)arg1 serviceName:(id)arg2 uploadImmediately:(_Bool)arg3;	// IMP=0x0000000000015241

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

