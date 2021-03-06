//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying>
{
    NSString *_actionURLString;	// 8 = 0x8
    NSString *_articleID;	// 16 = 0x10
    NSString *_displayDateString;	// 24 = 0x18
    NTPBTodaySectionConfigArticle *_paidArticle;	// 32 = 0x20
    NSString *_storyType;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *actionURLString; // @synthesize actionURLString=_actionURLString;
@property(retain, nonatomic) NTPBTodaySectionConfigArticle *paidArticle; // @synthesize paidArticle=_paidArticle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property(retain, nonatomic) NSString *displayDateString; // @synthesize displayDateString=_displayDateString;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002320c
- (unsigned long long)hash;	// IMP=0x000000000002314e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022fee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022ea6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000022de5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000022dd8
- (id)dictionaryRepresentation;	// IMP=0x0000000000022990
- (id)description;	// IMP=0x0000000000022919
@property(readonly, nonatomic) _Bool hasActionURLString;
@property(readonly, nonatomic) _Bool hasPaidArticle;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasStoryType;
@property(readonly, nonatomic) _Bool hasDisplayDateString;
@property(readonly, nonatomic) _Bool hasArticleID;
- (void)dealloc;	// IMP=0x0000000000022808

@end

