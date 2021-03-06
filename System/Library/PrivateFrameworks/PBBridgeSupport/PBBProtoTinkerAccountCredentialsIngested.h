//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PBBProtoTinkerAccountCredentialsIngested : PBCodable <NSCopying>
{
    unsigned int _cdpStatus;	// 8 = 0x8
    NSData *_detailedError;	// 16 = 0x10
    NSString *_errorDescription;	// 24 = 0x18
    _Bool _success;	// 32 = 0x20
    struct {
        unsigned int cdpStatus:1;
        unsigned int success:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000001b5e2
@property(retain, nonatomic) NSData *detailedError; // @synthesize detailedError=_detailedError;
@property(nonatomic) unsigned int cdpStatus; // @synthesize cdpStatus=_cdpStatus;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001b4d1
- (unsigned long long)hash;	// IMP=0x000000000001b426
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b2ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b212
- (void)copyTo:(id)arg1;	// IMP=0x000000000001b16b
- (void)writeTo:(id)arg1;	// IMP=0x000000000001b0c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001b0b4
- (id)dictionaryRepresentation;	// IMP=0x000000000001ac8f
- (id)description;	// IMP=0x000000000001abe0
@property(readonly, nonatomic) _Bool hasDetailedError;
@property(nonatomic) _Bool hasCdpStatus;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasSuccess;

@end

