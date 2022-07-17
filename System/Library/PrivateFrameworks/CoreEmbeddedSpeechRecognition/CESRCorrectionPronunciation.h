//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreEmbeddedSpeechRecognition/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface CESRCorrectionPronunciation : PBCodable <NSCopying>
{
    NSString *_apgId;	// 8 = 0x8
    NSData *_asrPronunciationData;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
    NSString *_orthography;	// 32 = 0x20
    int _tokenOffset;	// 40 = 0x28
    NSMutableArray *_ttsPronunciations;	// 48 = 0x30
    NSString *_ttsVersion;	// 56 = 0x38
    struct {
        unsigned int tokenOffset:1;
    } _has;	// 64 = 0x40
}

+ (Class)ttsPronunciationsType;	// IMP=0x000000000002d9f0
- (void).cxx_destruct;	// IMP=0x000000000002fbd0
@property(retain, nonatomic) NSData *asrPronunciationData; // @synthesize asrPronunciationData=_asrPronunciationData;
@property(retain, nonatomic) NSMutableArray *ttsPronunciations; // @synthesize ttsPronunciations=_ttsPronunciations;
@property(nonatomic) int tokenOffset; // @synthesize tokenOffset=_tokenOffset;
@property(retain, nonatomic) NSString *ttsVersion; // @synthesize ttsVersion=_ttsVersion;
@property(retain, nonatomic) NSString *apgId; // @synthesize apgId=_apgId;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *orthography; // @synthesize orthography=_orthography;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002f5c0
- (unsigned long long)hash;	// IMP=0x000000000002f420
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002f050
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ec10
- (void)copyTo:(id)arg1;	// IMP=0x000000000002e9a0
- (void)writeTo:(id)arg1;	// IMP=0x000000000002e610
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002e5b0
- (id)dictionaryRepresentation;	// IMP=0x000000000002db20
- (id)description;	// IMP=0x000000000002da50
@property(readonly, nonatomic) _Bool hasAsrPronunciationData;
- (id)ttsPronunciationsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002d9b0
- (unsigned long long)ttsPronunciationsCount;	// IMP=0x000000000002d970
- (void)addTtsPronunciations:(id)arg1;	// IMP=0x000000000002d8d0
- (void)clearTtsPronunciations;	// IMP=0x000000000002d890
@property(nonatomic) _Bool hasTokenOffset;
@property(readonly, nonatomic) _Bool hasTtsVersion;
@property(readonly, nonatomic) _Bool hasApgId;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(readonly, nonatomic) _Bool hasOrthography;

@end
