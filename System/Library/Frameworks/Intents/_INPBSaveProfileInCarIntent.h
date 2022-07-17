//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSaveProfileInCarIntent-Protocol.h>

@class NSString, _INPBInteger, _INPBIntentMetadata, _INPBString;

@interface _INPBSaveProfileInCarIntent : PBCodable <_INPBSaveProfileInCarIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    _INPBString *_profileName;	// 16 = 0x10
    _INPBInteger *_profileNumber;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001f573c
- (void).cxx_destruct;	// IMP=0x00000000001f5474
@property(retain, nonatomic) _INPBInteger *profileNumber; // @synthesize profileNumber=_profileNumber;
@property(retain, nonatomic) _INPBString *profileName; // @synthesize profileName=_profileName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x00000000001f52e9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f4e8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f4da3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f4d11
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f4c12
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f4ad3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f4ac6
@property(readonly, nonatomic) _Bool hasProfileNumber;
@property(readonly, nonatomic) _Bool hasProfileName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
