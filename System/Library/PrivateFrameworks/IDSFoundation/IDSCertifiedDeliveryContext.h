//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class IDSCertifiedDeliveryReplayKey, NSData, NSDictionary, NSNumber, NSString;

@interface IDSCertifiedDeliveryContext : NSObject <NSSecureCoding>
{
    _Bool _generateDeliveryReceipt;	// 8 = 0x8
    NSString *_originalGUID;	// 16 = 0x10
    NSString *_service;	// 24 = 0x18
    long long _certifiedDeliveryVersion;	// 32 = 0x20
    NSData *_certifiedDeliveryRTS;	// 40 = 0x28
    NSData *_senderToken;	// 48 = 0x30
    NSNumber *_failureReason;	// 56 = 0x38
    NSString *_failureReasonMessage;	// 64 = 0x40
    IDSCertifiedDeliveryReplayKey *_replayKey;	// 72 = 0x48
    NSDictionary *_deliveryStatusContext;	// 80 = 0x50
    NSString *_localURI;	// 88 = 0x58
    NSString *_remoteURI;	// 96 = 0x60
    NSData *_queryHash;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c2455
- (void).cxx_destruct;	// IMP=0x00000000000c25c2
@property(readonly, nonatomic) NSData *queryHash; // @synthesize queryHash=_queryHash;
@property(readonly, nonatomic) NSString *remoteURI; // @synthesize remoteURI=_remoteURI;
@property(readonly, nonatomic) NSString *localURI; // @synthesize localURI=_localURI;
@property(retain, nonatomic) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property(nonatomic) _Bool generateDeliveryReceipt; // @synthesize generateDeliveryReceipt=_generateDeliveryReceipt;
@property(readonly, nonatomic) IDSCertifiedDeliveryReplayKey *replayKey; // @synthesize replayKey=_replayKey;
@property(retain, nonatomic) NSString *failureReasonMessage; // @synthesize failureReasonMessage=_failureReasonMessage;
@property(retain, nonatomic) NSNumber *failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, nonatomic) NSData *senderToken; // @synthesize senderToken=_senderToken;
@property(readonly, nonatomic) NSData *certifiedDeliveryRTS; // @synthesize certifiedDeliveryRTS=_certifiedDeliveryRTS;
@property(readonly, nonatomic) long long certifiedDeliveryVersion; // @synthesize certifiedDeliveryVersion=_certifiedDeliveryVersion;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *originalGUID; // @synthesize originalGUID=_originalGUID;
- (id)description;	// IMP=0x00000000000c245d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c2303
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c1ffd
- (id)dataRepresentation;	// IMP=0x00000000000c1f45
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x00000000000c1e5c
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7 replayKey:(id)arg8 generateDeliveryReceipt:(_Bool)arg9 deliveryStatusContext:(id)arg10 localURI:(id)arg11 remoteURI:(id)arg12 queryHash:(id)arg13;	// IMP=0x00000000000c197c
- (id)initWithCertifiedDeliveryContext:(id)arg1 queryHash:(id)arg2;	// IMP=0x00000000000c176e
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7 replayKey:(id)arg8;	// IMP=0x00000000000c171d
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7;	// IMP=0x00000000000c16d3
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7;	// IMP=0x00000000000c1686
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5;	// IMP=0x00000000000c1640
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000c13c5

@end
