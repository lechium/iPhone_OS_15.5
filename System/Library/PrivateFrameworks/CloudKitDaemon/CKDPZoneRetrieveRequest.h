//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordZoneIdentifier, NSData;

@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying>
{
    NSData *_continuationMarker;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
    _Bool _onlyFetchPCSInfo;	// 24 = 0x18
    struct {
        unsigned int onlyFetchPCSInfo:1;
    } _has;	// 28 = 0x1c
}

+ (id)options;	// IMP=0x00000000000697d2
- (void).cxx_destruct;	// IMP=0x000000000006a145
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(nonatomic) _Bool onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006a051
- (unsigned long long)hash;	// IMP=0x0000000000069fdd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000069edd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069e1c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000069d99
- (Class)responseClass;	// IMP=0x0000000000069d88
- (unsigned int)requestTypeCode;	// IMP=0x0000000000069d7d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000069cfb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000069cee
- (id)dictionaryRepresentation;	// IMP=0x0000000000069940
- (id)description;	// IMP=0x0000000000069891
@property(readonly, nonatomic) _Bool hasContinuationMarker;
@property(nonatomic) _Bool hasOnlyFetchPCSInfo;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end
