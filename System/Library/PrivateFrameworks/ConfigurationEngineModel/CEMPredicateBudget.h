//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMPredicateBudget <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalendarIdentifier;	// 24 = 0x18
    NSString *_payloadMonitor;	// 32 = 0x20
    NSArray *_payloadIdentifiers;	// 40 = 0x28
    NSArray *_payloadIdentifiersVersion2;	// 48 = 0x30
    NSArray *_payloadNotificationTimes;	// 56 = 0x38
    NSArray *_payloadTimeBudget;	// 64 = 0x40
}

+ (id)buildRequiredOnlyWithMonitor:(id)arg1 withTimeBudget:(id)arg2;	// IMP=0x0000000000094781
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withNotificationTimes:(id)arg4 withTimeBudget:(id)arg5;	// IMP=0x0000000000094658
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withIdentifiersVersion2:(id)arg4 withNotificationTimes:(id)arg5 withTimeBudget:(id)arg6;	// IMP=0x0000000000094506
+ (id)allowedPayloadKeys;	// IMP=0x0000000000094421
+ (id)registeredIdentifier;	// IMP=0x0000000000094414
+ (id)registeredClassName;	// IMP=0x0000000000094407
- (void).cxx_destruct;	// IMP=0x00000000000951d2
@property(copy, nonatomic) NSArray *payloadTimeBudget; // @synthesize payloadTimeBudget=_payloadTimeBudget;
@property(copy, nonatomic) NSArray *payloadNotificationTimes; // @synthesize payloadNotificationTimes=_payloadNotificationTimes;
@property(copy, nonatomic) NSArray *payloadIdentifiersVersion2; // @synthesize payloadIdentifiersVersion2=_payloadIdentifiersVersion2;
@property(copy, nonatomic) NSArray *payloadIdentifiers; // @synthesize payloadIdentifiers=_payloadIdentifiers;
@property(copy, nonatomic) NSString *payloadMonitor; // @synthesize payloadMonitor=_payloadMonitor;
@property(copy, nonatomic) NSString *payloadCalendarIdentifier; // @synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000094fbb
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000094d3d
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000094821

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

