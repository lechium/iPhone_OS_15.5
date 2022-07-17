//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSettingMetadata-Protocol.h>

@class NSString, _INPBAppIdentifier, _INPBDevice;

@interface _INPBSettingMetadata : PBCodable <_INPBSettingMetadata, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_settingId;	// 8 = 0x8
    _INPBAppIdentifier *_targetApp;	// 16 = 0x10
    _INPBDevice *_targetDevice;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000047251c
- (void).cxx_destruct;	// IMP=0x000000000047228b
@property(retain, nonatomic) _INPBDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain, nonatomic) _INPBAppIdentifier *targetApp; // @synthesize targetApp=_targetApp;
@property(copy, nonatomic) NSString *settingId; // @synthesize settingId=_settingId;
- (id)dictionaryRepresentation;	// IMP=0x00000000004720db
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000471c7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000471b95
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000471b03
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000471a04
- (void)writeTo:(id)arg1;	// IMP=0x00000000004718e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004718d3
@property(readonly, nonatomic) _Bool hasTargetDevice;
@property(readonly, nonatomic) _Bool hasTargetApp;
@property(readonly, nonatomic) _Bool hasSettingId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
