//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchCallHistoryIntent-Protocol.h>

@class NSString, _INPBContact, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBSearchCallHistoryIntent : PBCodable <_INPBSearchCallHistoryIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _callCapabilities;	// 8 = 0x8
    CDStruct_95bda58d _callTypes;	// 32 = 0x20
    CDStruct_95bda58d _capabilities;	// 56 = 0x38
    struct {
        unsigned int callType:1;
        unsigned int preferredCallProvider:1;
        unsigned int unseen:1;
    } _has;	// 80 = 0x50
    _Bool _unseen;	// 84 = 0x54
    int _callType;	// 88 = 0x58
    int _preferredCallProvider;	// 92 = 0x5c
    _INPBDateTimeRange *_dateCreated;	// 96 = 0x60
    _INPBIntentMetadata *_intentMetadata;	// 104 = 0x68
    _INPBContact *_recipient;	// 112 = 0x70
    _INPBContact *_targetContact;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000023ed08
- (void).cxx_destruct;	// IMP=0x000000000023e448
@property(nonatomic) _Bool unseen; // @synthesize unseen=_unseen;
@property(retain, nonatomic) _INPBContact *targetContact; // @synthesize targetContact=_targetContact;
@property(retain, nonatomic) _INPBContact *recipient; // @synthesize recipient=_recipient;
@property(nonatomic) int preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) int callType; // @synthesize callType=_callType;
- (id)dictionaryRepresentation;	// IMP=0x000000000023dc0b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023d480
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023d27c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023d1ea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023d0eb
- (void)dealloc;	// IMP=0x000000000023d08b
- (void)writeTo:(id)arg1;	// IMP=0x000000000023cdcf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023cdc2
@property(nonatomic) _Bool hasUnseen;
@property(readonly, nonatomic) _Bool hasTargetContact;
@property(readonly, nonatomic) _Bool hasRecipient;
- (int)StringAsPreferredCallProvider:(id)arg1;	// IMP=0x000000000023cc87
- (id)preferredCallProviderAsString:(int)arg1;	// IMP=0x000000000023cc20
@property(nonatomic) _Bool hasPreferredCallProvider;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasDateCreated;
- (int)StringAsCapabilities:(id)arg1;	// IMP=0x000000000023cb09
- (id)capabilitiesAsString:(int)arg1;	// IMP=0x000000000023cab3
- (int)capabilitiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023ca9f
@property(readonly, nonatomic) unsigned long long capabilitiesCount;
- (void)addCapabilities:(int)arg1;	// IMP=0x000000000023ca71
- (void)clearCapabilities;	// IMP=0x000000000023ca60
@property(readonly, nonatomic) int *capabilities;
- (void)setCapabilities:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000023ca38
- (int)StringAsCallTypes:(id)arg1;	// IMP=0x000000000023c900
- (id)callTypesAsString:(int)arg1;	// IMP=0x000000000023c847
- (int)callTypesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023c833
@property(readonly, nonatomic) unsigned long long callTypesCount;
- (void)addCallTypes:(int)arg1;	// IMP=0x000000000023c805
- (void)clearCallTypes;	// IMP=0x000000000023c7f4
@property(readonly, nonatomic) int *callTypes;
- (void)setCallTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000023c7cc
- (int)StringAsCallType:(id)arg1;	// IMP=0x000000000023c694
- (id)callTypeAsString:(int)arg1;	// IMP=0x000000000023c5de
@property(nonatomic) _Bool hasCallType;
- (int)StringAsCallCapabilities:(id)arg1;	// IMP=0x000000000023c51d
- (id)callCapabilitiesAsString:(int)arg1;	// IMP=0x000000000023c4c7
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023c4b3
@property(readonly, nonatomic) unsigned long long callCapabilitiesCount;
- (void)addCallCapabilities:(int)arg1;	// IMP=0x000000000023c485
- (void)clearCallCapabilities;	// IMP=0x000000000023c474
@property(readonly, nonatomic) int *callCapabilities;
- (void)setCallCapabilities:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000023c44c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
