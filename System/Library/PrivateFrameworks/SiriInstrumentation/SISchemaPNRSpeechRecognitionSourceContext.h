//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaPNRSpeechRecognitionSourceContext
{
    int _speechRecognitionSource;	// 8 = 0x8
    struct {
        unsigned int speechRecognitionSource:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int speechRecognitionSource; // @synthesize speechRecognitionSource=_speechRecognitionSource;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002ae846
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ae788
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ae66c
- (unsigned long long)hash;	// IMP=0x00000000002ae641
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ae59c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ae571
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ae564
- (void)deleteSpeechRecognitionSource;	// IMP=0x00000000002ae53a
@property(nonatomic) _Bool hasSpeechRecognitionSource;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000358656

@end
