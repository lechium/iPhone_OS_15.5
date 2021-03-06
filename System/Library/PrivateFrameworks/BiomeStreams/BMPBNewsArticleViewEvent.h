//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBNewsArticleViewEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_content;	// 16 = 0x10
    NSString *_contentProtection;	// 24 = 0x18
    NSString *_domainId;	// 32 = 0x20
    NSString *_publication;	// 40 = 0x28
    NSString *_summary;	// 48 = 0x30
    NSString *_title;	// 56 = 0x38
    NSString *_uniqueId;	// 64 = 0x40
    CDStruct_d3e759b0 _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001d766
@property(retain, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(retain, nonatomic) NSString *publication; // @synthesize publication=_publication;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(retain, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001d52a
- (unsigned long long)hash;	// IMP=0x000000000001d332
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d128
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001cfa0
- (void)copyTo:(id)arg1;	// IMP=0x000000000001ce79
- (void)writeTo:(id)arg1;	// IMP=0x000000000001cd65
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001cd58
- (id)dictionaryRepresentation;	// IMP=0x000000000001c901
- (id)description;	// IMP=0x000000000001c852
@property(readonly, nonatomic) _Bool hasContentProtection;
@property(readonly, nonatomic) _Bool hasPublication;
@property(readonly, nonatomic) _Bool hasSummary;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasAbsoluteTimestamp;
@property(readonly, nonatomic) _Bool hasDomainId;
@property(readonly, nonatomic) _Bool hasUniqueId;

@end

