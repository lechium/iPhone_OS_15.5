//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable <NSCopying>
{
    long long _downloadURLExpirationTimeSeconds;	// 8 = 0x8
    long long _size;	// 16 = 0x10
    NSString *_downloadURL;	// 24 = 0x18
    struct {
        unsigned int downloadURLExpirationTimeSeconds:1;
        unsigned int size:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000145fe5
@property(nonatomic) long long downloadURLExpirationTimeSeconds; // @synthesize downloadURLExpirationTimeSeconds=_downloadURLExpirationTimeSeconds;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(nonatomic) long long size; // @synthesize size=_size;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000145f15
- (unsigned long long)hash;	// IMP=0x0000000000145ea0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145db1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000145cfb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000145c72
- (void)writeTo:(id)arg1;	// IMP=0x0000000000145be4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000145bd7
- (id)dictionaryRepresentation;	// IMP=0x0000000000145803
- (id)description;	// IMP=0x0000000000145754
@property(nonatomic) _Bool hasDownloadURLExpirationTimeSeconds;
@property(readonly, nonatomic) _Bool hasDownloadURL;
@property(nonatomic) _Bool hasSize;

@end
