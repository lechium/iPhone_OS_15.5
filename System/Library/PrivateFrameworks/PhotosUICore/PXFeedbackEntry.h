//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface PXFeedbackEntry : NSObject <NSSecureCoding>
{
    NSDictionary *_feedbackItemDetails;	// 8 = 0x8
    _Bool _alreadyCollected;	// 16 = 0x10
    NSMutableDictionary *_feedbackItemsDict;	// 24 = 0x18
    long long _generalFeedback;	// 32 = 0x20
    NSString *_systemID;	// 40 = 0x28
    NSDate *_timestamp;	// 48 = 0x30
    NSString *_appVersion;	// 56 = 0x38
}

+ (id)createFakeTestFeedbackDictionary;	// IMP=0x0000000000245d66
+ (id)createFakeTestEntry;	// IMP=0x0000000000245c32
+ (id)negativeFeedbackForImageQualityKeys;	// IMP=0x0000000000245c02
+ (id)positiveFeedbackForImageQualityKeys;	// IMP=0x0000000000245bd2
+ (id)negativeFeedbackForAutoLoopKeys;	// IMP=0x0000000000245ba2
+ (id)positiveFeedbackForAutoLoopKeys;	// IMP=0x0000000000245b72
+ (id)negativeFeedbackForMemoriesKeys;	// IMP=0x0000000000245b42
+ (id)positiveFeedbackForMemoriesKeys;	// IMP=0x0000000000245b12
+ (id)negativeFeedbackForMemoryDetailsKeys;	// IMP=0x0000000000245ae2
+ (id)positiveFeedbackForMemoryDetailsKeys;	// IMP=0x0000000000245ab2
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000245aaa
- (void).cxx_destruct;	// IMP=0x0000000000245898
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool alreadyCollected; // @synthesize alreadyCollected=_alreadyCollected;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *systemID; // @synthesize systemID=_systemID;
@property(nonatomic) long long generalFeedback; // @synthesize generalFeedback=_generalFeedback;
@property(retain, nonatomic) NSMutableDictionary *feedbackItemsDict; // @synthesize feedbackItemsDict=_feedbackItemsDict;
- (id)longDescription;	// IMP=0x00000000002454be
- (id)asTextForItemKey:(id)arg1;	// IMP=0x000000000024541d
- (id)osKeyForItemKey:(id)arg1;	// IMP=0x000000000024537c
- (_Bool)userLikedResults;	// IMP=0x000000000024525c
- (id)uniqueID;	// IMP=0x000000000024514c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000244fed
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000244ddc
- (id)initWithSystemID:(id)arg1 timestamp:(id)arg2;	// IMP=0x0000000000244c02
- (id)init;	// IMP=0x00000000002445b5

@end
