//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CPLMomentSharePreviewData : PBCodable <NSCopying>
{
    NSString *_cropRectString;	// 8 = 0x8
    NSMutableArray *_curatedAssetIdentifiers;	// 16 = 0x10
    NSString *_keyAssetIdentifier;	// 24 = 0x18
    NSMutableArray *_previewImageDatas;	// 32 = 0x20
}

+ (Class)curatedAssetIdentifiersType;	// IMP=0x000000000004bd45
+ (Class)previewImageDataType;	// IMP=0x000000000004bd34
- (void).cxx_destruct;	// IMP=0x000000000004bacc
@property(retain, nonatomic) NSMutableArray *curatedAssetIdentifiers; // @synthesize curatedAssetIdentifiers=_curatedAssetIdentifiers;
@property(retain, nonatomic) NSString *cropRectString; // @synthesize cropRectString=_cropRectString;
@property(retain, nonatomic) NSString *keyAssetIdentifier; // @synthesize keyAssetIdentifier=_keyAssetIdentifier;
@property(retain, nonatomic) NSMutableArray *previewImageDatas; // @synthesize previewImageDatas=_previewImageDatas;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004b7b2
- (unsigned long long)hash;	// IMP=0x000000000004b72e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004b602
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b29e
- (void)copyTo:(id)arg1;	// IMP=0x000000000004b0fa
- (void)writeTo:(id)arg1;	// IMP=0x000000000004aea7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004ae9a
- (id)dictionaryRepresentation;	// IMP=0x000000000004adc9
- (id)description;	// IMP=0x000000000004ad1a
- (id)curatedAssetIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004acfd
- (unsigned long long)curatedAssetIdentifiersCount;	// IMP=0x000000000004ace0
- (void)addCuratedAssetIdentifiers:(id)arg1;	// IMP=0x000000000004ac76
- (void)clearCuratedAssetIdentifiers;	// IMP=0x000000000004ac59
@property(readonly, nonatomic) _Bool hasCropRectString;
@property(readonly, nonatomic) _Bool hasKeyAssetIdentifier;
- (id)previewImageDataAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004ac12
- (unsigned long long)previewImageDatasCount;	// IMP=0x000000000004abf5
- (void)addPreviewImageData:(id)arg1;	// IMP=0x000000000004ab8b
- (void)clearPreviewImageDatas;	// IMP=0x000000000004ab6e

@end

