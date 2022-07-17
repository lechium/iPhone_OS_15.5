//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSString;

@interface BLTPBRemoveBulletinRequest : PBRequest <NSCopying>
{
    NSString *_publisherBulletinID;	// 8 = 0x8
    NSString *_recordID;	// 16 = 0x10
    NSString *_sectionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000dcab
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000dbb9
- (unsigned long long)hash;	// IMP=0x000000000000db4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000da54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d990
- (void)copyTo:(id)arg1;	// IMP=0x000000000000d90d
- (void)writeTo:(id)arg1;	// IMP=0x000000000000d893
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000d886
- (id)dictionaryRepresentation;	// IMP=0x000000000000d655
- (id)description;	// IMP=0x000000000000d5a6
@property(readonly, nonatomic) _Bool hasSectionID;
@property(readonly, nonatomic) _Bool hasRecordID;
@property(readonly, nonatomic) _Bool hasPublisherBulletinID;

@end
