//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PKProtobufAutomaticReloadPaymentRequest, PKProtobufRecurringPaymentRequest, PKProtobufShippingMethods;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying>
{
    PKProtobufAutomaticReloadPaymentRequest *_automaticReloadPaymentRequest;	// 8 = 0x8
    PKProtobufShippingMethods *_availableShippingMethods;	// 16 = 0x10
    NSMutableArray *_multiTokenContexts;	// 24 = 0x18
    NSMutableArray *_paymentSummaryItems;	// 32 = 0x20
    PKProtobufRecurringPaymentRequest *_recurringPaymentRequest;	// 40 = 0x28
    NSString *_remotePaymentRequestIdentifier;	// 48 = 0x30
    NSString *_selectedAID;	// 56 = 0x38
    unsigned int _selectedPaymentType;	// 64 = 0x40
    NSMutableArray *_shippingMethods;	// 72 = 0x48
    unsigned int _status;	// 80 = 0x50
    struct {
        unsigned int selectedPaymentType:1;
        unsigned int status:1;
    } _has;	// 84 = 0x54
}

+ (Class)multiTokenContextsType;	// IMP=0x0000000000322492
+ (Class)shippingMethodsType;	// IMP=0x0000000000322351
+ (Class)paymentSummaryItemsType;	// IMP=0x000000000032227f
- (void).cxx_destruct;	// IMP=0x000000000032478e
@property(retain, nonatomic) PKProtobufAutomaticReloadPaymentRequest *automaticReloadPaymentRequest; // @synthesize automaticReloadPaymentRequest=_automaticReloadPaymentRequest;
@property(retain, nonatomic) PKProtobufRecurringPaymentRequest *recurringPaymentRequest; // @synthesize recurringPaymentRequest=_recurringPaymentRequest;
@property(retain, nonatomic) NSMutableArray *multiTokenContexts; // @synthesize multiTokenContexts=_multiTokenContexts;
@property(nonatomic) unsigned int selectedPaymentType; // @synthesize selectedPaymentType=_selectedPaymentType;
@property(retain, nonatomic) PKProtobufShippingMethods *availableShippingMethods; // @synthesize availableShippingMethods=_availableShippingMethods;
@property(retain, nonatomic) NSString *selectedAID; // @synthesize selectedAID=_selectedAID;
@property(retain, nonatomic) NSMutableArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) NSMutableArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003241e3
- (unsigned long long)hash;	// IMP=0x000000000032408e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000323e29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003238e2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000323607
- (void)writeTo:(id)arg1;	// IMP=0x000000000032323d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000323230
- (id)dictionaryRepresentation;	// IMP=0x000000000032257c
- (id)description;	// IMP=0x00000000003224cd
@property(readonly, nonatomic) _Bool hasAutomaticReloadPaymentRequest;
@property(readonly, nonatomic) _Bool hasRecurringPaymentRequest;
- (id)multiTokenContextsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000322475
- (unsigned long long)multiTokenContextsCount;	// IMP=0x0000000000322458
- (void)addMultiTokenContexts:(id)arg1;	// IMP=0x00000000003223ee
- (void)clearMultiTokenContexts;	// IMP=0x00000000003223d1
@property(nonatomic) _Bool hasSelectedPaymentType;
@property(readonly, nonatomic) _Bool hasAvailableShippingMethods;
@property(readonly, nonatomic) _Bool hasSelectedAID;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000322334
- (unsigned long long)shippingMethodsCount;	// IMP=0x0000000000322317
- (void)addShippingMethods:(id)arg1;	// IMP=0x00000000003222ad
- (void)clearShippingMethods;	// IMP=0x0000000000322290
- (id)paymentSummaryItemsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000322262
- (unsigned long long)paymentSummaryItemsCount;	// IMP=0x0000000000322245
- (void)addPaymentSummaryItems:(id)arg1;	// IMP=0x00000000003221db
- (void)clearPaymentSummaryItems;	// IMP=0x00000000003221be
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasRemotePaymentRequestIdentifier;

@end

