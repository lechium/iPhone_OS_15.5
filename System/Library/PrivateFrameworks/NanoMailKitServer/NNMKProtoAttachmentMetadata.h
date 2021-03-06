//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying>
{
    NSString *_contentId;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    unsigned int _fileSize;	// 24 = 0x18
    float _imageHeight;	// 28 = 0x1c
    float _imageWidth;	// 32 = 0x20
    NSString *_mimePartNumber;	// 40 = 0x28
    unsigned int _type;	// 48 = 0x30
    _Bool _renderOnClient;	// 52 = 0x34
    struct {
        unsigned int fileSize:1;
        unsigned int imageHeight:1;
        unsigned int imageWidth:1;
        unsigned int type:1;
        unsigned int renderOnClient:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000805bc
@property(retain, nonatomic) NSString *mimePartNumber; // @synthesize mimePartNumber=_mimePartNumber;
@property(nonatomic) float imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) float imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) _Bool renderOnClient; // @synthesize renderOnClient=_renderOnClient;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000803e0
- (unsigned long long)hash;	// IMP=0x000000000008010b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007ff2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007fdc4
- (void)copyTo:(id)arg1;	// IMP=0x000000000007fcab
- (void)writeTo:(id)arg1;	// IMP=0x000000000007fb81
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007fb74
- (id)dictionaryRepresentation;	// IMP=0x000000000007f4b1
- (id)description;	// IMP=0x000000000007f402
@property(readonly, nonatomic) _Bool hasMimePartNumber;
@property(nonatomic) _Bool hasImageHeight;
@property(nonatomic) _Bool hasImageWidth;
@property(nonatomic) _Bool hasRenderOnClient;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasFileSize;
@property(readonly, nonatomic) _Bool hasFileName;
@property(readonly, nonatomic) _Bool hasContentId;

@end

