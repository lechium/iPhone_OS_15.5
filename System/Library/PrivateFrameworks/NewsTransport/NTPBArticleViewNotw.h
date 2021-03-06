//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBArticleViewNotw : PBCodable <NSCopying>
{
    NSString *_articleId;	// 8 = 0x8
    int _articleViewType;	// 16 = 0x10
    float _maxScrollDepth;	// 20 = 0x14
    NSString *_referringSite;	// 24 = 0x18
    NSString *_referringUrl;	// 32 = 0x20
    NSString *_sourceChannelId;	// 40 = 0x28
    NSString *_windowId;	// 48 = 0x30
    struct {
        unsigned int articleViewType:1;
        unsigned int maxScrollDepth:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002138cb
@property(retain, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;
@property(retain, nonatomic) NSString *referringSite; // @synthesize referringSite=_referringSite;
@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(nonatomic) float maxScrollDepth; // @synthesize maxScrollDepth=_maxScrollDepth;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002136f5
- (unsigned long long)hash;	// IMP=0x0000000000213517
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000213349
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002131e3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002130e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002130d4
- (id)dictionaryRepresentation;	// IMP=0x0000000000212c07
- (id)description;	// IMP=0x0000000000212b58
@property(readonly, nonatomic) _Bool hasWindowId;
@property(readonly, nonatomic) _Bool hasReferringSite;
@property(readonly, nonatomic) _Bool hasReferringUrl;
@property(nonatomic) _Bool hasMaxScrollDepth;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasArticleViewType;
@property(nonatomic) int articleViewType; // @synthesize articleViewType=_articleViewType;

@end

