//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying>
{
    unsigned int _defaultPaymentInstrumentIndex;	// 8 = 0x8
    int _nearby;	// 12 = 0xc
    NSMutableArray *_paymentInstruments;	// 16 = 0x10
    unsigned int _protocolVersion;	// 24 = 0x18
    NSMutableArray *_supportedSetupFeatures;	// 32 = 0x20
    _Bool _deviceDisabled;	// 40 = 0x28
    _Bool _locked;	// 41 = 0x29
    _Bool _supportsFaceID;	// 42 = 0x2a
    _Bool _userDisabled;	// 43 = 0x2b
    struct {
        unsigned int defaultPaymentInstrumentIndex:1;
        unsigned int nearby:1;
        unsigned int protocolVersion:1;
        unsigned int deviceDisabled:1;
        unsigned int locked:1;
        unsigned int supportsFaceID:1;
        unsigned int userDisabled:1;
    } _has;	// 44 = 0x2c
}

+ (Class)supportedSetupFeaturesType;	// IMP=0x0000000000165c0f
+ (Class)paymentInstrumentsType;	// IMP=0x000000000016586c
- (void).cxx_destruct;	// IMP=0x00000000001679d0
@property(retain, nonatomic) NSMutableArray *supportedSetupFeatures; // @synthesize supportedSetupFeatures=_supportedSetupFeatures;
@property(nonatomic) _Bool supportsFaceID; // @synthesize supportsFaceID=_supportsFaceID;
@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) _Bool deviceDisabled; // @synthesize deviceDisabled=_deviceDisabled;
@property(nonatomic) _Bool userDisabled; // @synthesize userDisabled=_userDisabled;
@property(nonatomic) unsigned int defaultPaymentInstrumentIndex; // @synthesize defaultPaymentInstrumentIndex=_defaultPaymentInstrumentIndex;
@property(retain, nonatomic) NSMutableArray *paymentInstruments; // @synthesize paymentInstruments=_paymentInstruments;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000167622
- (unsigned long long)hash;	// IMP=0x00000000001674f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001672e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000166efa
- (void)copyTo:(id)arg1;	// IMP=0x0000000000166cd3
- (void)writeTo:(id)arg1;	// IMP=0x00000000001669d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001669c8
- (id)dictionaryRepresentation;	// IMP=0x0000000000165ccf
- (id)description;	// IMP=0x0000000000165c20
- (id)supportedSetupFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000165bf2
- (unsigned long long)supportedSetupFeaturesCount;	// IMP=0x0000000000165bd5
- (void)addSupportedSetupFeatures:(id)arg1;	// IMP=0x0000000000165b6b
- (void)clearSupportedSetupFeatures;	// IMP=0x0000000000165b4e
@property(nonatomic) _Bool hasSupportsFaceID;
@property(nonatomic) _Bool hasProtocolVersion;
- (int)StringAsNearby:(id)arg1;	// IMP=0x0000000000165a26
- (id)nearbyAsString:(int)arg1;	// IMP=0x00000000001659c0
@property(nonatomic) _Bool hasNearby;
@property(nonatomic) int nearby; // @synthesize nearby=_nearby;
@property(nonatomic) _Bool hasDeviceDisabled;
@property(nonatomic) _Bool hasUserDisabled;
@property(nonatomic) _Bool hasDefaultPaymentInstrumentIndex;
- (id)paymentInstrumentsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016584f
- (unsigned long long)paymentInstrumentsCount;	// IMP=0x0000000000165832
- (void)addPaymentInstruments:(id)arg1;	// IMP=0x00000000001657c8
- (void)clearPaymentInstruments;	// IMP=0x00000000001657ab
@property(nonatomic) _Bool hasLocked;

@end

