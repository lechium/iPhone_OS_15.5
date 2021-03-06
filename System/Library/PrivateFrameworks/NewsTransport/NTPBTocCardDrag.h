//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBTocCardDrag : PBCodable <NSCopying>
{
    NSData *_tocExposureId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000582c5
@property(retain, nonatomic) NSData *tocExposureId; // @synthesize tocExposureId=_tocExposureId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005827c
- (unsigned long long)hash;	// IMP=0x000000000005825f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000581c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005814d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000058129
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005811c
- (id)dictionaryRepresentation;	// IMP=0x0000000000057f4e
- (id)description;	// IMP=0x0000000000057e9f
@property(readonly, nonatomic) _Bool hasTocExposureId;

@end

