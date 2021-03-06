//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPWtwCollectionRequest : PBRequest <NSCopying>
{
    CLPMeta *_meta;	// 8 = 0x8
    NSMutableArray *_wtwLocations;	// 16 = 0x10
}

+ (Class)wtwLocationType;	// IMP=0x0000000000055da3
- (void).cxx_destruct;	// IMP=0x0000000000056a22
@property(retain, nonatomic) NSMutableArray *wtwLocations; // @synthesize wtwLocations=_wtwLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000056847
- (unsigned long long)hash;	// IMP=0x00000000000567fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056732
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056559
- (void)copyTo:(id)arg1;	// IMP=0x000000000005647d
- (Class)responseClass;	// IMP=0x000000000005646c
- (unsigned int)requestTypeCode;	// IMP=0x0000000000056461
- (void)writeTo:(id)arg1;	// IMP=0x000000000005630c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000562ff
- (id)dictionaryRepresentation;	// IMP=0x0000000000055e63
- (id)description;	// IMP=0x0000000000055db4
- (id)wtwLocationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000055d86
- (unsigned long long)wtwLocationsCount;	// IMP=0x0000000000055d69
- (void)addWtwLocation:(id)arg1;	// IMP=0x0000000000055cff
- (void)clearWtwLocations;	// IMP=0x0000000000055ce2

@end

