//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBEmpty-Protocol.h>

@class NSString;

@interface _INPBEmpty : PBCodable <_INPBEmpty, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002ebf68
- (id)dictionaryRepresentation;	// IMP=0x00000000002ebe4a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ebdfd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ebdcb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002ebd39
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002ebc3a
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ebc34
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ebc27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
