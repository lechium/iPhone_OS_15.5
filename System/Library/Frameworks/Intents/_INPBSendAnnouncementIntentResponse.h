//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendAnnouncementIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSendAnnouncementIntentResponse : PBCodable <_INPBSendAnnouncementIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_sentAnnouncements;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000046311c
+ (Class)sentAnnouncementsType;	// IMP=0x000000000046310b
- (void).cxx_destruct;	// IMP=0x0000000000462f42
@property(copy, nonatomic) NSArray *sentAnnouncements; // @synthesize sentAnnouncements=_sentAnnouncements;
- (id)dictionaryRepresentation;	// IMP=0x0000000000462d15
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000462b76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000462af4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000462a62
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000462963
- (void)writeTo:(id)arg1;	// IMP=0x0000000000462833
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000462826
- (id)sentAnnouncementsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000462809
@property(readonly, nonatomic) unsigned long long sentAnnouncementsCount;
- (void)addSentAnnouncements:(id)arg1;	// IMP=0x0000000000462772
- (void)clearSentAnnouncements;	// IMP=0x0000000000462755

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

