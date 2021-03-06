//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CKDPDistributedTimestamps : PBCodable <NSCopying>
{
    NSMutableArray *_siteIdentifiers;	// 8 = 0x8
    NSMutableArray *_siteVersionVectors;	// 16 = 0x10
}

+ (Class)siteVersionVectorsType;	// IMP=0x000000000004681f
+ (Class)siteIdentifiersType;	// IMP=0x000000000004674d
- (void).cxx_destruct;	// IMP=0x0000000000047919
@property(retain, nonatomic) NSMutableArray *siteVersionVectors; // @synthesize siteVersionVectors=_siteVersionVectors;
@property(retain, nonatomic) NSMutableArray *siteIdentifiers; // @synthesize siteIdentifiers=_siteIdentifiers;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004768d
- (unsigned long long)hash;	// IMP=0x0000000000047640
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000047578
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004727c
- (void)copyTo:(id)arg1;	// IMP=0x000000000004711c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000046f0b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000046efe
- (id)dictionaryRepresentation;	// IMP=0x00000000000468df
- (id)description;	// IMP=0x0000000000046830
- (id)siteVersionVectorsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000046802
- (unsigned long long)siteVersionVectorsCount;	// IMP=0x00000000000467e5
- (void)addSiteVersionVectors:(id)arg1;	// IMP=0x000000000004677b
- (void)clearSiteVersionVectors;	// IMP=0x000000000004675e
- (id)siteIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000046730
- (unsigned long long)siteIdentifiersCount;	// IMP=0x0000000000046713
- (void)addSiteIdentifiers:(id)arg1;	// IMP=0x00000000000466a9
- (void)clearSiteIdentifiers;	// IMP=0x000000000004668c

@end

