//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBOpenSettingIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata, _INPBSettingMetadata;

@interface _INPBOpenSettingIntent : PBCodable <_INPBOpenSettingIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    _INPBDataString *_searchQuery;	// 16 = 0x10
    _INPBSettingMetadata *_settingMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000048a0a3
- (void).cxx_destruct;	// IMP=0x0000000000489ddb
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata; // @synthesize settingMetadata=_settingMetadata;
@property(retain, nonatomic) _INPBDataString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x0000000000489c50
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004897f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048970a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000489678
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000489579
- (void)writeTo:(id)arg1;	// IMP=0x000000000048943a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000048942d
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(readonly, nonatomic) _Bool hasSearchQuery;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

