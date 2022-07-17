//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBChangeAlarmStatusIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBChangeAlarmStatusIntentResponse : PBCodable <_INPBChangeAlarmStatusIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_modifiedAlarms;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004adb8a
+ (Class)modifiedAlarmsType;	// IMP=0x00000000004adb79
- (void).cxx_destruct;	// IMP=0x00000000004ad9b0
@property(copy, nonatomic) NSArray *modifiedAlarms; // @synthesize modifiedAlarms=_modifiedAlarms;
- (id)dictionaryRepresentation;	// IMP=0x00000000004ad783
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ad5e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ad562
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004ad4d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004ad3d1
- (void)writeTo:(id)arg1;	// IMP=0x00000000004ad2a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004ad294
- (id)modifiedAlarmsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004ad277
@property(readonly, nonatomic) unsigned long long modifiedAlarmsCount;
- (void)addModifiedAlarms:(id)arg1;	// IMP=0x00000000004ad1e0
- (void)clearModifiedAlarms;	// IMP=0x00000000004ad1c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
