//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, HMDUser, HMFActivity, HMFMessage, NSNumber;

@interface HMDHAPAccessoryTaskContext : NSObject
{
    NSNumber *_identifier;	// 8 = 0x8
    long long _operationType;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    HMFMessage *_requestMessage;	// 32 = 0x20
    unsigned long long _sourceType;	// 40 = 0x28
    HMFActivity *_activity;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000b4d0a1
@property(retain, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(readonly) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly) HMFMessage *requestMessage; // @synthesize requestMessage=_requestMessage;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) long long operationType; // @synthesize operationType=_operationType;
@property(readonly) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(readonly) HMDUser *user;
- (id)residentMapForAccessories:(id)arg1;	// IMP=0x0000000000b4ce95
- (void)dispatchMessage:(id)arg1 delegateDevice:(id)arg2;	// IMP=0x0000000000b4cdb8
- (_Bool)isComplete;	// IMP=0x0000000000b4cd55
- (id)requestMessageName;	// IMP=0x0000000000b4cd05
@property(readonly) _Bool supportsMultiPartResponse;
- (_Bool)isRemoteAccessDeviceReachable;	// IMP=0x0000000000b4cc63
- (_Bool)isShortActionOperation;	// IMP=0x0000000000b4cbb5
- (long long)qualityOfService;	// IMP=0x0000000000b4cb71
- (id)clientBundleIdentifier;	// IMP=0x0000000000b4cb21
- (id)requestMessageIdentifier;	// IMP=0x0000000000b4cad1
- (id)homeMessageDestination;	// IMP=0x0000000000b4ca81
- (id)homeUniqueIdentifier;	// IMP=0x0000000000b4ca31
- (id)workQueue;	// IMP=0x0000000000b4c9e1
- (id)operationName;	// IMP=0x0000000000b4c9b4
- (id)initWithIdentifier:(id)arg1 operationType:(long long)arg2 home:(id)arg3 sourceType:(unsigned long long)arg4 requestMessage:(id)arg5 name:(id)arg6;	// IMP=0x0000000000b4c88d

@end
