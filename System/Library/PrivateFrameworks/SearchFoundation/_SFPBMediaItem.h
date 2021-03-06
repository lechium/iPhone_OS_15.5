//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaItem-Protocol.h>

@class NSArray, NSData, NSString, _SFPBImage, _SFPBPunchout, _SFPBText;

@interface _SFPBMediaItem : PBCodable <_SFPBMediaItem, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    _SFPBText *_subtitleText;	// 16 = 0x10
    _SFPBImage *_thumbnail;	// 24 = 0x18
    _SFPBImage *_reviewGlyph;	// 32 = 0x20
    _SFPBImage *_overlayImage;	// 40 = 0x28
    NSString *_reviewText;	// 48 = 0x30
    _SFPBPunchout *_punchout;	// 56 = 0x38
    NSArray *_subtitleCustomLineBreakings;	// 64 = 0x40
    NSArray *_buyOptions;	// 72 = 0x48
    NSString *_contentAdvisory;	// 80 = 0x50
    _SFPBImage *_contentAdvisoryImage;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000140a3e
@property(retain, nonatomic) _SFPBImage *contentAdvisoryImage; // @synthesize contentAdvisoryImage=_contentAdvisoryImage;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(copy, nonatomic) NSArray *buyOptions; // @synthesize buyOptions=_buyOptions;
@property(copy, nonatomic) NSArray *subtitleCustomLineBreakings; // @synthesize subtitleCustomLineBreakings=_subtitleCustomLineBreakings;
@property(retain, nonatomic) _SFPBPunchout *punchout; // @synthesize punchout=_punchout;
@property(copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property(retain, nonatomic) _SFPBImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) _SFPBImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property(retain, nonatomic) _SFPBImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) _SFPBText *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001400a8
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000013ffea
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000013f72c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013ea4e
- (void)writeTo:(id)arg1;	// IMP=0x000000000013e633
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013e626
- (id)buyOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013e5c1
- (unsigned long long)buyOptionsCount;	// IMP=0x000000000013e5a4
- (void)addBuyOptions:(id)arg1;	// IMP=0x000000000013e52a
- (void)clearBuyOptions;	// IMP=0x000000000013e50d
- (id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013e4bc
- (unsigned long long)subtitleCustomLineBreakingCount;	// IMP=0x000000000013e49f
- (void)addSubtitleCustomLineBreaking:(id)arg1;	// IMP=0x000000000013e425
- (void)clearSubtitleCustomLineBreaking;	// IMP=0x000000000013e408
- (void)setSubtitleCustomLineBreaking:(id)arg1;	// IMP=0x000000000013e3d4
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000185041

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

