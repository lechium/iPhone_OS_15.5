//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>

@class HDIDSMessageCenter, HDIDSParticipant, NSData, NSDictionary, NSString, PBCodable;

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription>
{
    _Bool _doNotCompress;	// 8 = 0x8
    _Bool _queueOnly1;	// 9 = 0x9
    _Bool _forceLocalDelivery;	// 10 = 0xa
    unsigned short _messageID;	// 12 = 0xc
    HDIDSParticipant *_toParticipant;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSString *_idsIdentifier;	// 32 = 0x20
    unsigned long long _priority;	// 40 = 0x28
    double _sendTimeout;	// 48 = 0x30
    double _responseTimeout;	// 56 = 0x38
    NSDictionary *_persistentUserInfo;	// 64 = 0x40
    HDIDSMessageCenter *_messageCenter;	// 72 = 0x48
    PBCodable *_pbRequest;	// 80 = 0x50
}

+ (id)requestWithMessageID:(unsigned short)arg1 participant:(id)arg2;	// IMP=0x0000000000614041
+ (id)speculativeChangeRequestWithChangeSet:(id)arg1 syncStore:(id)arg2;	// IMP=0x0000000000377998
+ (id)changeRequestWithChangeSet:(id)arg1 status:(id)arg2 syncStore:(id)arg3;	// IMP=0x0000000000048b2e
+ (id)activationRequestWithRestore:(id)arg1 syncStore:(id)arg2;	// IMP=0x0000000000377828
- (void).cxx_destruct;	// IMP=0x0000000000051442
@property(retain, nonatomic) PBCodable *pbRequest; // @synthesize pbRequest=_pbRequest;
@property(nonatomic) _Bool forceLocalDelivery; // @synthesize forceLocalDelivery=_forceLocalDelivery;
@property(nonatomic) _Bool queueOnly1; // @synthesize queueOnly1=_queueOnly1;
@property(nonatomic) _Bool doNotCompress; // @synthesize doNotCompress=_doNotCompress;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property(nonatomic) double responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSString *idsIdentifier;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) HDIDSParticipant *toParticipant; // @synthesize toParticipant=_toParticipant;
@property(readonly, nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000048f20
- (id)nanoSyncDescription;	// IMP=0x000000000004ae53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
