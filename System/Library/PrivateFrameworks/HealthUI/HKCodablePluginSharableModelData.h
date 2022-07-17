//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HKCodablePluginSharableModelData : PBCodable <NSCopying>
{
    NSString *_sourceLocaleIdentifier;	// 8 = 0x8
    NSString *_sourceTimeZoneIdentifier;	// 16 = 0x10
    NSData *_userData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c3865
@property(retain, nonatomic) NSString *sourceLocaleIdentifier; // @synthesize sourceLocaleIdentifier=_sourceLocaleIdentifier;
@property(retain, nonatomic) NSString *sourceTimeZoneIdentifier; // @synthesize sourceTimeZoneIdentifier=_sourceTimeZoneIdentifier;
@property(retain, nonatomic) NSData *userData; // @synthesize userData=_userData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c3773
- (unsigned long long)hash;	// IMP=0x00000000001c3706
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c360e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c354a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c34c7
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c344d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c3440
- (id)dictionaryRepresentation;	// IMP=0x00000000001c31e6
- (id)description;	// IMP=0x00000000001c3137
@property(readonly, nonatomic) _Bool hasSourceLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasSourceTimeZoneIdentifier;
@property(readonly, nonatomic) _Bool hasUserData;

@end
