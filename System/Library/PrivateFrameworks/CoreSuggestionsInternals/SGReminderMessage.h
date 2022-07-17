//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SGDuplicateKey, SGMessage, SGPipelineEntity;

@interface SGReminderMessage
{
    SGMessage *_message;	// 8 = 0x8
    SGPipelineEntity *_entity;	// 16 = 0x10
    NSArray *_plainTextDetectedData;	// 24 = 0x18
    SGDuplicateKey *_extractedReminderDuplicateKey;	// 32 = 0x20
}

+ (id)searchTokensForReminderTitle:(id)arg1;	// IMP=0x000000000019b63d
+ (_Bool)excludedContent:(id)arg1;	// IMP=0x000000000019b55a
+ (id)regexFromJoinedArray:(id)arg1 wordBoundary:(id)arg2;	// IMP=0x000000000019b376
+ (id)titlePrefixTokens;	// IMP=0x000000000019b2dd
+ (id)excludeList;	// IMP=0x000000000019b244
+ (id)confirmationOptionalTokens;	// IMP=0x000000000019b1ab
+ (id)triggerOptionalTokens;	// IMP=0x000000000019b112
+ (_Bool)enrichedTaggedCharacterRangesContainsProfanity:(id)arg1;	// IMP=0x000000000019b067
+ (_Bool)validModelOutput:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019a83a
+ (id)posTaggerNouns;	// IMP=0x000000000019a7cc
+ (_Bool)validObjectCoreIndexRange:(struct _NSRange)arg1 enrichedTaggedCharacterRanges:(id)arg2;	// IMP=0x000000000019a58d
+ (_Bool)validActionVerbIndexRange:(struct _NSRange)arg1 enrichedTaggedCharacterRanges:(id)arg2;	// IMP=0x000000000019a16d
+ (id)frenchPrependForEnrichedTaggedCharacterRanges:(id)arg1 actionVerbIndexRange:(struct _NSRange)arg2;	// IMP=0x0000000000199e76
+ (id)titlePrependForActionVerbIndexRange:(struct _NSRange)arg1 enrichedTaggedCharacterRanges:(id)arg2 language:(id)arg3 content:(id)arg4;	// IMP=0x0000000000199d95
+ (id)detectedTitleInModelOutput:(id)arg1 enrichedTaggedCharacterRanges:(id)arg2 textContent:(id)arg3 language:(id)arg4;	// IMP=0x00000000001992fc
+ (_Bool)tokensMatchedInContent:(id)arg1 content:(id)arg2;	// IMP=0x0000000000199255
+ (_Bool)shouldAddTitlePrefixForContent:(id)arg1;	// IMP=0x00000000001991e6
+ (_Bool)isConfirmationOptionalForContent:(id)arg1;	// IMP=0x0000000000199177
- (void).cxx_destruct;	// IMP=0x0000000000199124
@property(retain, nonatomic) SGDuplicateKey *extractedReminderDuplicateKey; // @synthesize extractedReminderDuplicateKey=_extractedReminderDuplicateKey;
@property(retain, nonatomic) NSArray *plainTextDetectedData; // @synthesize plainTextDetectedData=_plainTextDetectedData;
@property(retain, nonatomic) SGPipelineEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) SGMessage *message; // @synthesize message=_message;
- (id)_labelTokenIndexesForOutputName:(id)arg1 label:(id)arg2;	// IMP=0x0000000000198fe9
- (_Bool)hasTrigger;	// IMP=0x0000000000198e70
- (id)dueLocation;	// IMP=0x0000000000198b23
- (id)detectedDueDateComponents;	// IMP=0x00000000001988bd
- (id)dueDateDataDetectorMatches;	// IMP=0x00000000001987e8
- (id)detectedTitleForLanguage:(id)arg1;	// IMP=0x00000000001986c0
- (_Bool)isTriggerOptional;	// IMP=0x00000000001985d5
- (_Bool)isProposal;	// IMP=0x000000000019830c
- (_Bool)isRejection;	// IMP=0x0000000000198022
- (_Bool)isConfirmation;	// IMP=0x0000000000197c37
- (id)initWithMessage:(id)arg1 plainTextDetectedData:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4;	// IMP=0x0000000000197b80
- (id)initWithMessage:(id)arg1 entity:(id)arg2 enrichedTaggedCharacterRanges:(id)arg3 modelOutput:(id)arg4;	// IMP=0x0000000000197a9c

@end
