//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>
{
    NSMutableArray *_versionedAttributionDetails;	// 8 = 0x8
}

+ (Class)versionedAttributionDetailsType;	// IMP=0x000000000002c9e5
+ (id)options;	// IMP=0x000000000002c8d4
- (void).cxx_destruct;	// IMP=0x000000000002d47a
@property(retain, nonatomic) NSMutableArray *versionedAttributionDetails; // @synthesize versionedAttributionDetails=_versionedAttributionDetails;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002d320
- (unsigned long long)hash;	// IMP=0x000000000002d303
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002d269
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d0a6
- (void)copyTo:(id)arg1;	// IMP=0x000000000002cfdf
- (void)writeTo:(id)arg1;	// IMP=0x000000000002ceaf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002cea2
- (id)dictionaryRepresentation;	// IMP=0x000000000002caa5
- (id)description;	// IMP=0x000000000002c9f6
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c9c8
- (unsigned long long)versionedAttributionDetailsCount;	// IMP=0x000000000002c9ab
- (void)addVersionedAttributionDetails:(id)arg1;	// IMP=0x000000000002c941
- (void)clearVersionedAttributionDetails;	// IMP=0x000000000002c924

@end
