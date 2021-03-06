//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject
{
    unsigned int _assetTokenRequestSizeLimit;	// 8 = 0x8
    NSArray *_assetRegisterAndPutBatches;	// 16 = 0x10
    NSArray *_assetGetChunkKeysBatches;	// 24 = 0x18
    NSArray *_assetTokenRequests;	// 32 = 0x20
    NSMutableDictionary *_rerefAssetBatchesByZoneID;	// 40 = 0x28
    NSMutableDictionary *_assetBatchesByZoneID;	// 48 = 0x30
    unsigned long long _mmcsEncryptionSupport;	// 56 = 0x38
    NSMutableOrderedSet *_items;	// 64 = 0x40
    NSMutableDictionary *_assetZoneByKey;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000006361b
@property(retain, nonatomic) NSMutableDictionary *assetZoneByKey; // @synthesize assetZoneByKey=_assetZoneByKey;
@property(retain, nonatomic) NSMutableOrderedSet *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long mmcsEncryptionSupport; // @synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport;
@property(retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID; // @synthesize assetBatchesByZoneID=_assetBatchesByZoneID;
@property(retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID; // @synthesize rerefAssetBatchesByZoneID=_rerefAssetBatchesByZoneID;
@property(retain, nonatomic) NSArray *assetTokenRequests; // @synthesize assetTokenRequests=_assetTokenRequests;
@property(readonly, nonatomic) unsigned int assetTokenRequestSizeLimit; // @synthesize assetTokenRequestSizeLimit=_assetTokenRequestSizeLimit;
@property(retain, nonatomic) NSArray *assetGetChunkKeysBatches; // @synthesize assetGetChunkKeysBatches=_assetGetChunkKeysBatches;
@property(retain, nonatomic) NSArray *assetRegisterAndPutBatches; // @synthesize assetRegisterAndPutBatches=_assetRegisterAndPutBatches;
- (id)description;	// IMP=0x000000000006352f
- (id)CKPropertiesDescription;	// IMP=0x00000000000632f1
- (_Bool)hasSuccessfulAssetTokenRequests;	// IMP=0x00000000000631bc
- (_Bool)hasSuccessfulBatches;	// IMP=0x0000000000062f9c
- (void)failBatch:(id)arg1;	// IMP=0x0000000000062f20
- (void)planAssetRequests;	// IMP=0x0000000000062bf8
- (void)planGetChunkKeysBatches;	// IMP=0x000000000006238a
- (void)planRegisterBatches;	// IMP=0x000000000006138a
- (void)resetAssetTokenRequests;	// IMP=0x0000000000061370
- (void)addMMCSSectionItem:(id)arg1;	// IMP=0x0000000000061244
- (void)addRereferencedMMCSItem:(id)arg1;	// IMP=0x00000000000610d3
- (void)addMMCSItem:(id)arg1;	// IMP=0x0000000000060f62
- (id)initWithMMCSEncryptionSupport:(unsigned long long)arg1;	// IMP=0x0000000000060eb1

@end

