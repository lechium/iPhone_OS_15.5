//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBConfigureHomeIntentResponse-Protocol.h>

@class NSString;

@interface _INPBConfigureHomeIntentResponse : PBCodable <_INPBConfigureHomeIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002c90f8
- (id)dictionaryRepresentation;	// IMP=0x00000000002c8fda
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c8f8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c8f5b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002c8ec9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002c8dca
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c8dc4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c8db7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
