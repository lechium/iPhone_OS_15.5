//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMediaSubItem-Protocol.h>

@class NSString;

@interface _INPBMediaSubItem : PBCodable <_INPBMediaSubItem, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_assetInfo;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004561a8
- (void).cxx_destruct;	// IMP=0x0000000000455fd0
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *assetInfo; // @synthesize assetInfo=_assetInfo;
- (id)dictionaryRepresentation;	// IMP=0x0000000000455e9a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000455b90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000455ad1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000455a3f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000455940
- (void)writeTo:(id)arg1;	// IMP=0x0000000000455892
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000455885
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasAssetInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
