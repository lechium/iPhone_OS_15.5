//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOETAServiceResponseSummary : PBCodable <NSCopying>
{
    struct GEOSessionID _responseUuid;	// 8 = 0x8
    NSMutableArray *_routeInfos;	// 24 = 0x18
    int _status;	// 32 = 0x20
    _Bool _resultsApplied;	// 36 = 0x24
    struct {
        unsigned int has_responseUuid:1;
        unsigned int has_status:1;
        unsigned int has_resultsApplied:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000001564ce6
- (unsigned long long)hash;	// IMP=0x0000000001564c52
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001564b27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001564918
- (void)writeTo:(id)arg1;	// IMP=0x0000000001564745
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001564736
- (id)jsonRepresentation;	// IMP=0x0000000001563988
- (id)dictionaryRepresentation;	// IMP=0x0000000001563568
- (id)description;	// IMP=0x00000000015634b9

@end

