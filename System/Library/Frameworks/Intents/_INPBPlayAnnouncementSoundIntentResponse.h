//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlayAnnouncementSoundIntentResponse-Protocol.h>

@class NSString;

@interface _INPBPlayAnnouncementSoundIntentResponse : PBCodable <_INPBPlayAnnouncementSoundIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000049b1e1
- (id)dictionaryRepresentation;	// IMP=0x000000000049b0c3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000049b076
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049b044
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000049afb2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049aeb3
- (void)writeTo:(id)arg1;	// IMP=0x000000000049aead
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000049aea0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
