//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBActivateCarSignalIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBActivateCarSignalIntent : PBCodable <_INPBActivateCarSignalIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _signals;	// 8 = 0x8
    struct _has;	// 32 = 0x20
    _INPBDataString *_carName;	// 32 = 0x20
    _INPBIntentMetadata *_intentMetadata;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007c544
- (void).cxx_destruct;	// IMP=0x000000000007c190
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (id)dictionaryRepresentation;	// IMP=0x000000000007bf4b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007bc0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007bb3e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007baac
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007b9ad
- (void)dealloc;	// IMP=0x000000000007b96f
- (void)writeTo:(id)arg1;	// IMP=0x000000000007b853
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007b846
- (int)StringAsSignals:(id)arg1;	// IMP=0x000000000007b7df
- (id)signalsAsString:(int)arg1;	// IMP=0x000000000007b789
- (int)signalsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007b775
@property(readonly, nonatomic) unsigned long long signalsCount;
- (void)addSignals:(int)arg1;	// IMP=0x000000000007b747
- (void)clearSignals;	// IMP=0x000000000007b736
@property(readonly, nonatomic) int *signals;
- (void)setSignals:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007b70e
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

