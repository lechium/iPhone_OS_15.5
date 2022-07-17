//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSString;

@interface BLTPBSetNotificationsSoundRequest : PBRequest <NSCopying>
{
    NSString *_sectionID;	// 8 = 0x8
    int _sound;	// 16 = 0x10
    struct {
        unsigned int sound:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000002d9f
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000002d17
- (unsigned long long)hash;	// IMP=0x0000000000002cca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002c05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002b75
- (void)copyTo:(id)arg1;	// IMP=0x0000000000002b12
- (void)writeTo:(id)arg1;	// IMP=0x0000000000002aae
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000002aa1
- (id)dictionaryRepresentation;	// IMP=0x00000000000027a7
- (id)description;	// IMP=0x00000000000026f8
@property(readonly, nonatomic) _Bool hasSectionID;
- (int)StringAsSound:(id)arg1;	// IMP=0x0000000000002681
- (id)soundAsString:(int)arg1;	// IMP=0x000000000000262c
@property(nonatomic) _Bool hasSound;
@property(nonatomic) int sound; // @synthesize sound=_sound;

@end
