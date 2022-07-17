//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBThirdPartyAppContentEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_bundleId;	// 16 = 0x10
    NSString *_comment;	// 24 = 0x18
    NSString *_content;	// 32 = 0x20
    NSString *_contentProtection;	// 40 = 0x28
    NSString *_desc;	// 48 = 0x30
    NSString *_domainId;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSString *_uniqueId;	// 72 = 0x48
    CDStruct_d3e759b0 _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000072fa1
@property(retain, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000072d20
- (unsigned long long)hash;	// IMP=0x0000000000072b19
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000728db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007272d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000725e6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000724b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000724a8
- (id)dictionaryRepresentation;	// IMP=0x000000000007200a
- (id)description;	// IMP=0x0000000000071f5b
@property(readonly, nonatomic) _Bool hasContentProtection;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) _Bool hasComment;
@property(readonly, nonatomic) _Bool hasDesc;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasAbsoluteTimestamp;
@property(readonly, nonatomic) _Bool hasBundleId;
@property(readonly, nonatomic) _Bool hasDomainId;
@property(readonly, nonatomic) _Bool hasUniqueId;

@end
