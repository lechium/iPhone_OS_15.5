//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextKit/CKContextServiceUpdateNotifications-Protocol.h>

@class CKContextSemaphore, NSMutableArray, NSSet, NSString;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications>
{
    NSSet *_capabilities;	// 8 = 0x8
    NSString *_indexVersionId;	// 16 = 0x10
    NSMutableArray *_updateHandlers;	// 24 = 0x18
    CKContextSemaphore *_serviceSemaphore;	// 32 = 0x20
    unsigned long long _defaultRequestType;	// 40 = 0x28
}

+ (_Bool)isLikelyUnsolicitedUserInteraction;	// IMP=0x000000000000372a
+ (double)timeIntervalBetweenMachTime:(unsigned long long)arg1 andMachTime:(unsigned long long)arg2;	// IMP=0x00000000000036d2
+ (id)clientWithPreferredRequestType:(unsigned long long)arg1;	// IMP=0x0000000000002312
+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;	// IMP=0x00000000000022d2
+ (id)new;	// IMP=0x0000000000001b39
+ (void)_observeApplicationStateNotifications;	// IMP=0x0000000000001a03
+ (void)initialize;	// IMP=0x0000000000001946
- (void).cxx_destruct;	// IMP=0x000000000000381d
@property(readonly, nonatomic) unsigned long long defaultRequestType; // @synthesize defaultRequestType=_defaultRequestType;
- (void)groupResponses:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000326b
- (void)ancestorsForTopics:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002d87
- (void)workWithServiceSemaphore:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002d75
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(_Bool)arg1;	// IMP=0x0000000000002cfc
@property(readonly, nonatomic) NSSet *capabilities;
- (id)indexVersionId;	// IMP=0x0000000000002c76
- (void)retrieveCapabilitiesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000029c5
- (id)retrieveCapabilites;	// IMP=0x000000000000252d
- (void)registerConfigurationUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000249e
- (void)capabilitiesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000023b6
- (id)createRequest;	// IMP=0x0000000000002380
- (id)newRequest;	// IMP=0x0000000000002352
- (void)updateCachedCapabilitiesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002067
- (void)didReceiveCKContextServiceUpdateNotification;	// IMP=0x0000000000001bfe
- (void)ensureFullyInitialized;	// IMP=0x0000000000001bd0
- (id)initWithDefaultRequestType:(unsigned long long)arg1;	// IMP=0x0000000000001b45
- (id)init;	// IMP=0x0000000000001b3f

@end

