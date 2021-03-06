//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBScanVisualCodeIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBScanVisualCodeIntent : PBCodable <_INPBScanVisualCodeIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001891d6
- (void).cxx_destruct;	// IMP=0x000000000018900f
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x0000000000188f63
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000188dc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000188d42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000188cb0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000188bb1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000188b2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000188b1d
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

