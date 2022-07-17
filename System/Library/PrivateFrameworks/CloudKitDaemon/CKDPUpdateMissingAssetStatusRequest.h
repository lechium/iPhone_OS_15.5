//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPUpdateMissingAssetStatusRequest : PBRequest <NSCopying>
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _packageAssetSizes;	// 8 = 0x8
    long long _assetSize;	// 32 = 0x20
    NSString *_assetPutReceipt;	// 40 = 0x28
    CKDPRecordIdentifier *_missingAssetStatusRecordID;	// 48 = 0x30
    NSMutableArray *_packagePutReceipts;	// 56 = 0x38
    _Bool _recovered;	// 64 = 0x40
    struct {
        unsigned int assetSize:1;
        unsigned int recovered:1;
    } _has;	// 68 = 0x44
}

+ (Class)packagePutReceiptsType;	// IMP=0x00000000001b2832
+ (id)options;	// IMP=0x00000000001b253c
- (void).cxx_destruct;	// IMP=0x00000000001b3b2c
@property(retain, nonatomic) NSMutableArray *packagePutReceipts; // @synthesize packagePutReceipts=_packagePutReceipts;
@property(retain, nonatomic) NSString *assetPutReceipt; // @synthesize assetPutReceipt=_assetPutReceipt;
@property(nonatomic) long long assetSize; // @synthesize assetSize=_assetSize;
@property(nonatomic) _Bool recovered; // @synthesize recovered=_recovered;
@property(retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecordID; // @synthesize missingAssetStatusRecordID=_missingAssetStatusRecordID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b383b
- (unsigned long long)hash;	// IMP=0x00000000001b376e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b35ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b337a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b31aa
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b2fc9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b2fbc
- (id)dictionaryRepresentation;	// IMP=0x00000000001b28f2
- (id)description;	// IMP=0x00000000001b2843
- (id)packagePutReceiptsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b2815
- (unsigned long long)packagePutReceiptsCount;	// IMP=0x00000000001b27f8
- (void)addPackagePutReceipts:(id)arg1;	// IMP=0x00000000001b278e
- (void)clearPackagePutReceipts;	// IMP=0x00000000001b2771
- (void)setPackageAssetSizes:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001b275a
- (long long)packageAssetSizeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b268d
- (void)addPackageAssetSize:(long long)arg1;	// IMP=0x00000000001b2679
- (void)clearPackageAssetSizes;	// IMP=0x00000000001b2668
@property(readonly, nonatomic) long long *packageAssetSizes;
@property(readonly, nonatomic) unsigned long long packageAssetSizesCount;
@property(readonly, nonatomic) _Bool hasAssetPutReceipt;
@property(nonatomic) _Bool hasAssetSize;
@property(nonatomic) _Bool hasRecovered;
@property(readonly, nonatomic) _Bool hasMissingAssetStatusRecordID;
- (void)dealloc;	// IMP=0x00000000001b24fc

@end
