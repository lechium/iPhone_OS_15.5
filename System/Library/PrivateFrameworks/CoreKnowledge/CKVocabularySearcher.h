//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKVSearchService, OS_dispatch_queue;

@interface CKVocabularySearcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<CKVSearchService> *_searchService;	// 16 = 0x10
    NSString *_userId;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000000eb25a
+ (id)makeSearcherForUserId:(id)arg1;	// IMP=0x00000000000eb1ce
+ (id)makeSearcher;	// IMP=0x00000000000eb173
- (void).cxx_destruct;	// IMP=0x00000000000eb140
- (_Bool)_validateUtteranceTokens:(id)arg1;	// IMP=0x00000000000eb0aa
- (_Bool)_validateCustomTypes:(id)arg1 andAddToCriteria:(id)arg2;	// IMP=0x00000000000eacb4
- (_Bool)_validateAppIds:(id)arg1 andAddToCriteria:(id)arg2;	// IMP=0x00000000000ea90f
- (id)matchSpansOfString:(id)arg1;	// IMP=0x00000000000ea613
- (id)matchSpansOfUtterance:(id)arg1;	// IMP=0x00000000000ea38b
- (id)searchCustomVocabularyWithWildcardPatterns:(id)arg1 appIds:(id)arg2 vocabularyTypes:(id)arg3;	// IMP=0x00000000000e9f9b
- (id)searchCustomVocabulary:(id)arg1 appIds:(id)arg2 vocabularyTypes:(id)arg3;	// IMP=0x00000000000e9be1
- (id)init;	// IMP=0x00000000000e9b99
- (id)initWithSearchService:(id)arg1 dispatchQueue:(id)arg2 userId:(id)arg3 prewarm:(_Bool)arg4;	// IMP=0x00000000000e9ab6

@end

