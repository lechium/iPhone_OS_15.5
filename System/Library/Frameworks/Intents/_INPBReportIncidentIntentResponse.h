//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBReportIncidentIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBLocation;

@interface _INPBReportIncidentIntentResponse : PBCodable <_INPBReportIncidentIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _transportTypes;	// 8 = 0x8
    struct _has;	// 32 = 0x20
    _INPBLocation *_location;	// 32 = 0x20
    NSArray *_supportedTypes;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004c99c3
+ (Class)supportedTypeType;	// IMP=0x00000000004c99b2
- (void).cxx_destruct;	// IMP=0x00000000004c95ce
@property(copy, nonatomic) NSArray *supportedTypes; // @synthesize supportedTypes=_supportedTypes;
@property(retain, nonatomic) _INPBLocation *location; // @synthesize location=_location;
- (id)dictionaryRepresentation;	// IMP=0x00000000004c91af
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c8e72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c8da2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004c8d10
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004c8c11
- (void)dealloc;	// IMP=0x00000000004c8bd3
- (void)writeTo:(id)arg1;	// IMP=0x00000000004c8a00
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004c89f3
- (int)StringAsTransportTypes:(id)arg1;	// IMP=0x00000000004c8904
- (id)transportTypesAsString:(int)arg1;	// IMP=0x00000000004c886d
- (int)transportTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004c8859
@property(readonly, nonatomic) unsigned long long transportTypesCount;
- (void)addTransportType:(int)arg1;	// IMP=0x00000000004c882b
- (void)clearTransportTypes;	// IMP=0x00000000004c881a
@property(readonly, nonatomic) int *transportTypes;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004c87f2
- (id)supportedTypeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004c87d5
@property(readonly, nonatomic) unsigned long long supportedTypesCount;
- (void)addSupportedType:(id)arg1;	// IMP=0x00000000004c873e
- (void)clearSupportedTypes;	// IMP=0x00000000004c8721
@property(readonly, nonatomic) _Bool hasLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

