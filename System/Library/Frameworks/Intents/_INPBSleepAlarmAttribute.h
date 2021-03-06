//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSleepAlarmAttribute-Protocol.h>

@class NSString, _INPBDateTime;

@interface _INPBSleepAlarmAttribute : PBCodable <_INPBSleepAlarmAttribute, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int override:1;
    } _has;	// 8 = 0x8
    _Bool _override;	// 12 = 0xc
    _INPBDateTime *_bedtime;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b346c
- (void).cxx_destruct;	// IMP=0x00000000004b3205
@property(nonatomic) _Bool override; // @synthesize override=_override;
@property(retain, nonatomic) _INPBDateTime *bedtime; // @synthesize bedtime=_bedtime;
- (id)dictionaryRepresentation;	// IMP=0x00000000004b30d8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b2e7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b2dd7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b2d45
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b2c46
- (void)writeTo:(id)arg1;	// IMP=0x00000000004b2b92
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004b2b85
@property(nonatomic) _Bool hasOverride;
@property(readonly, nonatomic) _Bool hasBedtime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

