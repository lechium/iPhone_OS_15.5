//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetCarLockStatusIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSetCarLockStatusIntent : PBCodable <_INPBSetCarLockStatusIntent, NSSecureCoding, NSCopying>
{
    CDStruct_b1e20226 _has;	// 8 = 0x8
    _Bool _locked;	// 12 = 0xc
    _INPBDataString *_carName;	// 16 = 0x10
    _INPBIntentMetadata *_intentMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b325e
- (void).cxx_destruct;	// IMP=0x00000000001b2f71
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (id)dictionaryRepresentation;	// IMP=0x00000000001b2ddd
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b2a4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b2958
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b28c6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b27c7
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b26b7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b26aa
@property(nonatomic) _Bool hasLocked;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

