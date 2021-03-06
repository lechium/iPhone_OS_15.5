//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SGSuggestionsServiceURLsProtocol;

@interface WBSFoundInRecommendationManager : NSObject
{
    NSObject<SGSuggestionsServiceURLsProtocol> *_suggestionsService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    int _changeNotificationToken;	// 24 = 0x18
}

+ (_Bool)isBundleIdentifierFromMessages:(id)arg1;	// IMP=0x00000000000dc78b
+ (_Bool)isBundleIdentifierFromCalendar:(id)arg1;	// IMP=0x00000000000dc72a
+ (unsigned long long)foundInSourceFromBundleIdentifier:(id)arg1;	// IMP=0x00000000000dc67b
+ (id)_linkRecommendationsFromSGSuggestions:(id)arg1 contactStoreProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000000daed9
- (void).cxx_destruct;	// IMP=0x00000000000dc7ec
- (void)_createInternalQueueIfNecessary;	// IMP=0x00000000000daea0
- (void)_recentURLRecommendationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000daa01
- (void)recentRecommendationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000da7d8
- (void)stopListeningForURLSuggestionChanges;	// IMP=0x00000000000da7b5
- (void)beginListeningForURLSuggestionChanges;	// IMP=0x00000000000da5d0

@end

