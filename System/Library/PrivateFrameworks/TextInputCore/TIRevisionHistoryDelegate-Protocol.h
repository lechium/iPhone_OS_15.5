//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TIRevisionHistoryDelegate <NSObject>
- (struct TITokenID)addWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id *)arg4 contextStringTokens:(NSArray *)arg5;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4 contextStringTokens:(NSArray *)arg5;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id *)arg5 hasCaseInsensitiveStaticVariant:(_Bool *)arg6 contextStringTokens:(NSArray *)arg7;
- (void)registerNegativeEvidence:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 intendedTokenID:(struct TITokenID *)arg5 hint:(int)arg6 contextStringTokens:(NSArray *)arg7;
- (void)decrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 contextStringTokens:(NSArray *)arg5;
- (void)incrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 contextStringTokens:(NSArray *)arg5 saveToDifferentialPrivacy:(int)arg6;
- (_Bool)isStringBasedModel;
- (void)incrementUsageTrackingKeyForAppWithIsSentence:(_Bool)arg1;
- (void)incrementUsageTrackingKey:(NSString *)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(NSString *)arg1 autocorrectionTypes:(unsigned int)arg2;
@end

