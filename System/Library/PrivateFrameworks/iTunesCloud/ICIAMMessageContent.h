//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICIAMMetricEvent, NSMutableArray, NSString;

@interface ICIAMMessageContent : PBCodable <NSCopying>
{
    NSString *_body;	// 8 = 0x8
    ICIAMMetricEvent *_cardClickEvent;	// 16 = 0x10
    ICIAMMetricEvent *_closeClickEvent;	// 24 = 0x18
    NSMutableArray *_contentParameters;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSMutableArray *_images;	// 48 = 0x30
    NSMutableArray *_messageActions;	// 56 = 0x38
    ICIAMMetricEvent *_pageEvent;	// 64 = 0x40
    NSString *_subtitle;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
}

+ (Class)contentParametersType;	// IMP=0x000000000011a7ba
+ (Class)messageActionsType;	// IMP=0x000000000011a7a9
+ (Class)imagesType;	// IMP=0x000000000011a798
- (void).cxx_destruct;	// IMP=0x000000000011a32b
@property(retain, nonatomic) ICIAMMetricEvent *cardClickEvent; // @synthesize cardClickEvent=_cardClickEvent;
@property(retain, nonatomic) ICIAMMetricEvent *closeClickEvent; // @synthesize closeClickEvent=_closeClickEvent;
@property(retain, nonatomic) ICIAMMetricEvent *pageEvent; // @synthesize pageEvent=_pageEvent;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *contentParameters; // @synthesize contentParameters=_contentParameters;
@property(retain, nonatomic) NSMutableArray *messageActions; // @synthesize messageActions=_messageActions;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000119d58
- (unsigned long long)hash;	// IMP=0x0000000000119c2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001199cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011948a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001191b3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000118dfb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000118dee
- (id)dictionaryRepresentation;	// IMP=0x00000000001186a0
- (id)description;	// IMP=0x00000000001185f1
@property(readonly, nonatomic) _Bool hasCardClickEvent;
@property(readonly, nonatomic) _Bool hasCloseClickEvent;
@property(readonly, nonatomic) _Bool hasPageEvent;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (id)contentParametersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000118580
- (unsigned long long)contentParametersCount;	// IMP=0x0000000000118563
- (void)addContentParameters:(id)arg1;	// IMP=0x00000000001184f9
- (void)clearContentParameters;	// IMP=0x00000000001184dc
- (id)messageActionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001184bf
- (unsigned long long)messageActionsCount;	// IMP=0x00000000001184a2
- (void)addMessageActions:(id)arg1;	// IMP=0x0000000000118438
- (void)clearMessageActions;	// IMP=0x000000000011841b
- (id)imagesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001183fe
- (unsigned long long)imagesCount;	// IMP=0x00000000001183e1
- (void)addImages:(id)arg1;	// IMP=0x0000000000118377
- (void)clearImages;	// IMP=0x000000000011835a
@property(readonly, nonatomic) _Bool hasBody;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;

@end
