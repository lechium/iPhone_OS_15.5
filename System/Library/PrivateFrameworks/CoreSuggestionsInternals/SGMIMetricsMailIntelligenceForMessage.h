//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SGMIMetricsInferenceAndGroundTruth;

@interface SGMIMetricsMailIntelligenceForMessage : PBCodable <NSCopying>
{
    SGMIMetricsInferenceAndGroundTruth *_active;	// 8 = 0x8
    SGMIMetricsInferenceAndGroundTruth *_background;	// 16 = 0x10
    unsigned int _hoursSinceReference;	// 24 = 0x18
    NSString *_lang;	// 32 = 0x20
    NSString *_locale;	// 40 = 0x28
    NSMutableArray *_mailAttachmentHistograms;	// 48 = 0x30
    unsigned int _nbCharactersInMailSubject;	// 56 = 0x38
    unsigned int _nbTokensInMailSubject;	// 60 = 0x3c
    unsigned int _previousInteractionFromUserOnConversationInMinutes;	// 64 = 0x40
    unsigned int _previousInteractionOnConversationInMinutes;	// 68 = 0x44
    float _senderConnectionScore;	// 72 = 0x48
    unsigned int _timeDifferenceFromReceptionToSaliencyInferenceInSeconds;	// 76 = 0x4c
    struct {
        unsigned int hoursSinceReference:1;
        unsigned int nbCharactersInMailSubject:1;
        unsigned int nbTokensInMailSubject:1;
        unsigned int previousInteractionFromUserOnConversationInMinutes:1;
        unsigned int previousInteractionOnConversationInMinutes:1;
        unsigned int senderConnectionScore:1;
        unsigned int timeDifferenceFromReceptionToSaliencyInferenceInSeconds:1;
    } _has;	// 80 = 0x50
}

+ (Class)mailAttachmentHistogramType;	// IMP=0x000000000008808c
- (void).cxx_destruct;	// IMP=0x000000000008797d
@property(retain, nonatomic) SGMIMetricsInferenceAndGroundTruth *background; // @synthesize background=_background;
@property(retain, nonatomic) SGMIMetricsInferenceAndGroundTruth *active; // @synthesize active=_active;
@property(nonatomic) unsigned int previousInteractionFromUserOnConversationInMinutes; // @synthesize previousInteractionFromUserOnConversationInMinutes=_previousInteractionFromUserOnConversationInMinutes;
@property(nonatomic) unsigned int previousInteractionOnConversationInMinutes; // @synthesize previousInteractionOnConversationInMinutes=_previousInteractionOnConversationInMinutes;
@property(nonatomic) unsigned int nbTokensInMailSubject; // @synthesize nbTokensInMailSubject=_nbTokensInMailSubject;
@property(nonatomic) unsigned int nbCharactersInMailSubject; // @synthesize nbCharactersInMailSubject=_nbCharactersInMailSubject;
@property(retain, nonatomic) NSMutableArray *mailAttachmentHistograms; // @synthesize mailAttachmentHistograms=_mailAttachmentHistograms;
@property(nonatomic) float senderConnectionScore; // @synthesize senderConnectionScore=_senderConnectionScore;
@property(nonatomic) unsigned int timeDifferenceFromReceptionToSaliencyInferenceInSeconds; // @synthesize timeDifferenceFromReceptionToSaliencyInferenceInSeconds=_timeDifferenceFromReceptionToSaliencyInferenceInSeconds;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned int hoursSinceReference; // @synthesize hoursSinceReference=_hoursSinceReference;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008757f
- (unsigned long long)hash;	// IMP=0x0000000000087308
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000087063
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000086d16
- (void)copyTo:(id)arg1;	// IMP=0x0000000000086aff
- (void)writeTo:(id)arg1;	// IMP=0x0000000000086861
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000086854
- (id)dictionaryRepresentation;	// IMP=0x00000000000862c5
- (id)description;	// IMP=0x0000000000086216
@property(readonly, nonatomic) _Bool hasBackground;
@property(readonly, nonatomic) _Bool hasActive;
@property(nonatomic) _Bool hasPreviousInteractionFromUserOnConversationInMinutes;
@property(nonatomic) _Bool hasPreviousInteractionOnConversationInMinutes;
@property(nonatomic) _Bool hasNbTokensInMailSubject;
@property(nonatomic) _Bool hasNbCharactersInMailSubject;
- (id)mailAttachmentHistogramAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000860a5
- (unsigned long long)mailAttachmentHistogramsCount;	// IMP=0x0000000000086088
- (void)addMailAttachmentHistogram:(id)arg1;	// IMP=0x000000000008601e
- (void)clearMailAttachmentHistograms;	// IMP=0x0000000000086001
@property(nonatomic) _Bool hasSenderConnectionScore;
@property(nonatomic) _Bool hasTimeDifferenceFromReceptionToSaliencyInferenceInSeconds;
@property(readonly, nonatomic) _Bool hasLang;
@property(readonly, nonatomic) _Bool hasLocale;
@property(nonatomic) _Bool hasHoursSinceReference;

@end

