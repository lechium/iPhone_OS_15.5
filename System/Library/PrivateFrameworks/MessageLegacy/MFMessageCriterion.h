//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageLegacy/NSCopying-Protocol.h>

@class NSArray, NSIndexSet, NSString;

@interface MFMessageCriterion : NSObject <NSCopying>
{
    NSString *_criterionIdentifier;	// 8 = 0x8
    int _qualifier;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_uniqueId;	// 40 = 0x28
    NSString *_expression;	// 48 = 0x30
    NSArray *_criteria;	// 56 = 0x38
    int _dateUnitType;	// 64 = 0x40
    unsigned int _allCriteriaMustBeSatisfied:1;	// 68 = 0x44
    unsigned int _dateIsRelative:1;	// 68 = 0x44
    unsigned int _includeRelatedMessages:1;	// 68 = 0x44
    NSArray *_requiredHeaders;	// 72 = 0x48
    _Bool _preferFullTextSearch;	// 80 = 0x50
    _Bool _useFlaggedForUnreadCount;	// 81 = 0x51
    _Bool _expressionIsSanitized;	// 82 = 0x52
    _Bool _includeRemoteBodyContent;	// 83 = 0x53
    NSIndexSet *_libraryIdentifiers;	// 88 = 0x58
}

+ (id)orCompoundCriterionWithCriteria:(id)arg1;	// IMP=0x000000000003cc68
+ (id)andCompoundCriterionWithCriteria:(id)arg1;	// IMP=0x000000000003cbaa
+ (id)notCriterionWithCriterion:(id)arg1;	// IMP=0x000000000003cb0d
+ (id)criterionForDateReceivedOlderThanDate:(id)arg1;	// IMP=0x000000000003caac
+ (id)todayMessageCriterion;	// IMP=0x000000000003ca0f
+ (id)hasAttachmentsCriterion;	// IMP=0x000000000003c9b1
+ (id)ccMeCriterion;	// IMP=0x000000000003c953
+ (id)toMeCriterion;	// IMP=0x000000000003c8f5
+ (id)includesMeCriterion;	// IMP=0x000000000003c897
+ (id)readMessageCriterion;	// IMP=0x000000000003c839
+ (id)unreadMessageCriterion;	// IMP=0x000000000003c7db
+ (id)flaggedMessageCriterion;	// IMP=0x000000000003c76b
+ (id)threadMuteMessageCriterion;	// IMP=0x000000000003c70d
+ (id)threadNotifyMessageCriterion;	// IMP=0x000000000003c6af
+ (id)VIPSenderMessageCriterion;	// IMP=0x000000000003c5fc
+ (id)messageIsServerSearchResultCriterion:(_Bool)arg1;	// IMP=0x000000000003c5ae
+ (id)criterionForLibraryID:(id)arg1;	// IMP=0x000000000003c56e
+ (id)criterionForConversationID:(long long)arg1;	// IMP=0x000000000003c50e
+ (id)criterionForNotDeletedConversationID:(long long)arg1;	// IMP=0x000000000003c467
+ (id)messageIsJournaledCriterion:(_Bool)arg1;	// IMP=0x000000000003c419
+ (id)messageIsDeletedCriterion:(_Bool)arg1;	// IMP=0x000000000003c3cb
+ (id)criterionExcludingMailboxes:(id)arg1;	// IMP=0x000000000003c341
+ (id)criterionForAccount:(id)arg1;	// IMP=0x000000000003c2e5
+ (id)criterionForMailboxURL:(id)arg1;	// IMP=0x000000000003c2a5
+ (id)criterionForMailbox:(id)arg1;	// IMP=0x000000000003c271
+ (id)expressionForDate:(id)arg1;	// IMP=0x000000000003bec5
+ (id)stringForCriterionType:(long long)arg1;	// IMP=0x000000000003bbe5
+ (long long)criterionTypeForString:(id)arg1;	// IMP=0x000000000003b738
+ (void)_updateAddressComments:(id)arg1;	// IMP=0x0000000000039b79
+ (id)defaultsArrayFromCriteria:(id)arg1;	// IMP=0x0000000000038382
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(_Bool)arg2;	// IMP=0x00000000000381a7
+ (id)criteriaFromDefaultsArray:(id)arg1;	// IMP=0x0000000000038190
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool includeRemoteBodyContent; // @synthesize includeRemoteBodyContent=_includeRemoteBodyContent;
@property(nonatomic) _Bool expressionIsSanitized; // @synthesize expressionIsSanitized=_expressionIsSanitized;
@property(nonatomic) _Bool includeRelatedMessages; // @synthesize includeRelatedMessages=_includeRelatedMessages;
@property(nonatomic) _Bool useFlaggedForUnreadCount; // @synthesize useFlaggedForUnreadCount=_useFlaggedForUnreadCount;
@property(nonatomic) _Bool preferFullTextSearch; // @synthesize preferFullTextSearch=_preferFullTextSearch;
@property(retain, nonatomic) NSIndexSet *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property(nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
- (_Bool)isVIPCriterion;	// IMP=0x000000000003c65a
- (id)simplifiedCriterion;	// IMP=0x000000000003c21f
- (id)simplifyOnce;	// IMP=0x000000000003bf03
- (id)dateFromExpression;	// IMP=0x000000000003be88
- (void)setDateIsRelative:(_Bool)arg1;	// IMP=0x000000000003be76
- (_Bool)dateIsRelative;	// IMP=0x000000000003be69
- (void)setDateUnits:(int)arg1;	// IMP=0x000000000003be60
- (int)dateUnits;	// IMP=0x000000000003be57
- (void)setAllCriteriaMustBeSatisfied:(_Bool)arg1;	// IMP=0x000000000003be47
- (_Bool)allCriteriaMustBeSatisfied;	// IMP=0x000000000003be3c
@property(copy, nonatomic) NSArray *criteria;
- (id)stringForMessageRuleQualifier:(int)arg1;	// IMP=0x000000000003b6ad
- (int)messageRuleQualifierForString:(id)arg1;	// IMP=0x000000000003b5a0
- (_Bool)doesMessageSatisfyCriterion:(id)arg1;	// IMP=0x000000000003b221
- (_Bool)_evaluateMailboxCriterion:(id)arg1;	// IMP=0x000000000003b1b2
- (_Bool)_evaluateConversationIDCriterion:(id)arg1;	// IMP=0x000000000003b07d
- (_Bool)_evaluateDateCriterion:(id)arg1;	// IMP=0x000000000003afa5
- (_Bool)_evaluateAddressHistoryCriterion:(id)arg1;	// IMP=0x000000000003af9d
- (_Bool)_evaluateAccountCriterion:(id)arg1;	// IMP=0x000000000003af4a
- (_Bool)_evaluateAttachmentCriterion:(id)arg1;	// IMP=0x000000000003ac1b
- (_Bool)_evaluatePriorityIsLowCriterion:(id)arg1;	// IMP=0x000000000003abff
- (_Bool)_evaluatePriorityIsHighCriterion:(id)arg1;	// IMP=0x000000000003abe3
- (_Bool)_evaluatePriorityIsNormalCriterion:(id)arg1;	// IMP=0x000000000003abc7
- (_Bool)_evaluateIsEncryptedCriterion:(id)arg1;	// IMP=0x000000000003ab7f
- (_Bool)_evaluateIsDigitallySignedCriterion:(id)arg1;	// IMP=0x000000000003ab37
- (_Bool)_evaluateFullNameCriterion:(id)arg1;	// IMP=0x000000000003a690
- (_Bool)_evaluateAddressBookCriterion:(id)arg1;	// IMP=0x000000000003a688
- (_Bool)_evaluatePartOfStructure:(id)arg1;	// IMP=0x000000000003a52e
- (_Bool)_evaluateSenderHeaderCriterion:(id)arg1;	// IMP=0x000000000003a4a4
- (_Bool)_evaluateHeaderCriterion:(id)arg1;	// IMP=0x0000000000039f65
- (_Bool)_evaluateFlagCriterion:(id)arg1;	// IMP=0x0000000000039ea0
- (_Bool)_evaluateCompoundCriterion:(id)arg1;	// IMP=0x0000000000039d46
- (id)_headersRequiredForEvaluation;	// IMP=0x000000000003988b
@property(copy, nonatomic) NSString *expression;
- (id)_qualifierString;	// IMP=0x0000000000039810
@property(retain, nonatomic) NSString *criterionIdentifier;
@property(nonatomic) long long criterionType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000395dc
- (id)dictionaryRepresentation;	// IMP=0x0000000000039186
- (id)description;	// IMP=0x0000000000039129
- (id)descriptionWithDepth:(unsigned int)arg1;	// IMP=0x0000000000038d7a
- (unsigned long long)hash;	// IMP=0x0000000000038d2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000038bdd
- (void)dealloc;	// IMP=0x0000000000038b70
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(_Bool)arg2;	// IMP=0x000000000003868b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000038674
- (id)initWithType:(long long)arg1 qualifier:(int)arg2 expression:(id)arg3;	// IMP=0x00000000000385ff
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;	// IMP=0x00000000000385a6
- (id)init;	// IMP=0x000000000003852a

@end
