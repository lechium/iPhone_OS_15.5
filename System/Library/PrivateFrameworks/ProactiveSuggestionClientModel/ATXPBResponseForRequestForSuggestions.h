//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>

@class ATXPBRequestForContextualActionSuggestions, ATXPBRequestForInteractionSuggestions, NSData, NSMutableArray, NSString;

@interface ATXPBResponseForRequestForSuggestions : PBCodable <NSCopying>
{
    ATXPBRequestForContextualActionSuggestions *_contextualActionSuggestionRequest;	// 8 = 0x8
    NSData *_errorData;	// 16 = 0x10
    NSData *_feedbackMetadata;	// 24 = 0x18
    ATXPBRequestForInteractionSuggestions *_interactionSuggestionRequest;	// 32 = 0x20
    int _responseCode;	// 40 = 0x28
    NSMutableArray *_suggestions;	// 48 = 0x30
    NSString *_uuidString;	// 56 = 0x38
    struct {
        unsigned int responseCode:1;
    } _has;	// 64 = 0x40
}

+ (Class)suggestionsType;	// IMP=0x000000000005985a
- (void).cxx_destruct;	// IMP=0x000000000005af4f
@property(retain, nonatomic) ATXPBRequestForContextualActionSuggestions *contextualActionSuggestionRequest; // @synthesize contextualActionSuggestionRequest=_contextualActionSuggestionRequest;
@property(retain, nonatomic) ATXPBRequestForInteractionSuggestions *interactionSuggestionRequest; // @synthesize interactionSuggestionRequest=_interactionSuggestionRequest;
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *feedbackMetadata; // @synthesize feedbackMetadata=_feedbackMetadata;
@property(retain, nonatomic) NSMutableArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005ac28
- (unsigned long long)hash;	// IMP=0x000000000005ab36
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a96a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a6a9
- (void)copyTo:(id)arg1;	// IMP=0x000000000005a51c
- (void)writeTo:(id)arg1;	// IMP=0x000000000005a325
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005a318
- (id)dictionaryRepresentation;	// IMP=0x0000000000059b59
- (id)description;	// IMP=0x0000000000059aaa
@property(readonly, nonatomic) _Bool hasContextualActionSuggestionRequest;
@property(readonly, nonatomic) _Bool hasInteractionSuggestionRequest;
@property(readonly, nonatomic) _Bool hasErrorData;
- (int)StringAsResponseCode:(id)arg1;	// IMP=0x000000000005997c
- (id)responseCodeAsString:(int)arg1;	// IMP=0x00000000000598e4
@property(nonatomic) _Bool hasResponseCode;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) _Bool hasFeedbackMetadata;
- (id)suggestionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005983d
- (unsigned long long)suggestionsCount;	// IMP=0x0000000000059820
- (void)addSuggestions:(id)arg1;	// IMP=0x00000000000597b6
- (void)clearSuggestions;	// IMP=0x0000000000059799
@property(readonly, nonatomic) _Bool hasUuidString;

@end

