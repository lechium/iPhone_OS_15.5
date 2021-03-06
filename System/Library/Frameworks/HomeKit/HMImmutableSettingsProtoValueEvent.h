//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMImmutableSettingsProtoBoolValueEvent, HMImmutableSettingsProtoIntegerValueEvent, HMImmutableSettingsProtoLanguageValueEvent, HMImmutableSettingsProtoStringValueEvent;

@interface HMImmutableSettingsProtoValueEvent : PBCodable <NSCopying>
{
    HMImmutableSettingsProtoBoolValueEvent *_boolValueEvent;	// 8 = 0x8
    HMImmutableSettingsProtoIntegerValueEvent *_integerValueEvent;	// 16 = 0x10
    HMImmutableSettingsProtoLanguageValueEvent *_languageValueEvent;	// 24 = 0x18
    int _settingValueEvent;	// 32 = 0x20
    HMImmutableSettingsProtoStringValueEvent *_stringValueEvent;	// 40 = 0x28
    struct {
        unsigned int settingValueEvent:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000020951b
@property(retain, nonatomic) HMImmutableSettingsProtoLanguageValueEvent *languageValueEvent; // @synthesize languageValueEvent=_languageValueEvent;
@property(retain, nonatomic) HMImmutableSettingsProtoBoolValueEvent *boolValueEvent; // @synthesize boolValueEvent=_boolValueEvent;
@property(retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *integerValueEvent; // @synthesize integerValueEvent=_integerValueEvent;
@property(retain, nonatomic) HMImmutableSettingsProtoStringValueEvent *stringValueEvent; // @synthesize stringValueEvent=_stringValueEvent;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002093b8
- (unsigned long long)hash;	// IMP=0x0000000000209300
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020919c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020908f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000208fcc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000208f35
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000208f28
- (id)dictionaryRepresentation;	// IMP=0x0000000000208cfe
- (id)description;	// IMP=0x0000000000208c4f
- (void)clearOneofValuesForSettingValueEvent;	// IMP=0x0000000000208bcb
- (int)StringAsSettingValueEvent:(id)arg1;	// IMP=0x0000000000208b00
- (id)settingValueEventAsString:(int)arg1;	// IMP=0x0000000000208a74
@property(nonatomic) _Bool hasSettingValueEvent;
@property(nonatomic) int settingValueEvent; // @synthesize settingValueEvent=_settingValueEvent;
@property(readonly, nonatomic) _Bool hasLanguageValueEvent;
@property(readonly, nonatomic) _Bool hasBoolValueEvent;
@property(readonly, nonatomic) _Bool hasIntegerValueEvent;
@property(readonly, nonatomic) _Bool hasStringValueEvent;

@end

