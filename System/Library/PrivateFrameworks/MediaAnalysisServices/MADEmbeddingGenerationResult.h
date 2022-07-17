//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate;

@interface MADEmbeddingGenerationResult
{
    unsigned long long _embeddingType;	// 8 = 0x8
    NSDate *_assetCreationDate;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSData *_checksum;	// 32 = 0x20
    NSData *_thumbnail;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000034fe
- (void).cxx_destruct;	// IMP=0x0000000000003b3c
@property(readonly, retain, nonatomic) NSData *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, retain, nonatomic) NSData *checksum; // @synthesize checksum=_checksum;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, retain, nonatomic) NSDate *assetCreationDate; // @synthesize assetCreationDate=_assetCreationDate;
@property(readonly, nonatomic) unsigned long long embeddingType; // @synthesize embeddingType=_embeddingType;
- (id)description;	// IMP=0x00000000000038b3
- (id)initWithEmbeddingType:(unsigned long long)arg1 assetCreationDate:(id)arg2 data:(id)arg3 checksum:(id)arg4 andThumbnail:(id)arg5;	// IMP=0x000000000000377a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003686
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003506

@end
