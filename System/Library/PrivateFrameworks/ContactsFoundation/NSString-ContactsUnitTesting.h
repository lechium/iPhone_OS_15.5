//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (ContactsUnitTesting)
+ (id)_cn_stringByRepeatingCharacter:(BOOL)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000002267
+ (_Bool)_cn_isBlank:(id)arg1;	// IMP=0x0000000000074514
+ (id)_cn_whitespaceExceptAscii32CharacterSet;	// IMP=0x0000000000075690
+ (id)_cn_LTRControlCharacters;	// IMP=0x00000000000755fe
+ (id)_cn_phoneNumberInvalidCharacters;	// IMP=0x00000000000754da
- (id)_cn_stringByReplacingStrings:(id)arg1;	// IMP=0x000000000003947a
- (id)_cn_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000007520e
- (id)_cn_resultWithAllCharacters:(CDUnknownBlockType)arg1;	// IMP=0x0000000000075083
- (id)_cn_truncateAtLength:(unsigned long long)arg1 addEllipsisIfTrunctated:(_Bool)arg2;	// IMP=0x0000000000074fbd
- (struct _NSRange)_cn_rangeOfAnchoredCharacters:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000074e4d
- (id)_cn_takeLast:(unsigned long long)arg1;	// IMP=0x0000000000074e14
- (id)_cn_take:(unsigned long long)arg1;	// IMP=0x0000000000074dde
- (id)_cn_skipLast:(unsigned long long)arg1;	// IMP=0x0000000000074da8
- (id)_cn_skip:(unsigned long long)arg1;	// IMP=0x0000000000074d78
- (void)_cn_eachCharacter:(CDUnknownBlockType)arg1;	// IMP=0x0000000000074cf4
- (struct _NSRange)_cn_rangeFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000074ca1
- (id)_cn_SHA256HashStringWithSalt:(id)arg1;	// IMP=0x0000000000074bef
- (id)_cn_nameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long *)arg2;	// IMP=0x0000000000074b8e
- (id)_cn_nameComponentTokens;	// IMP=0x0000000000074b26
- (id)_cn_tokens;	// IMP=0x0000000000074b0a
- (id)_cn_trimmedString;	// IMP=0x0000000000074aa4
- (id)_cn_stringByNormalizingCase;	// IMP=0x0000000000074a7b
- (id)_cn_stringByDeletingNumberOfPathComponents:(unsigned long long)arg1;	// IMP=0x0000000000074a13
- (id)_cn_stringByAddingPercentEscapesToEntireURL;	// IMP=0x0000000000074988
- (id)_cn_stringByAddingPercentEscapesIfNecessary;	// IMP=0x00000000000748de
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000746f7
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1;	// IMP=0x00000000000746e3
- (_Bool)_cn_containsSubstring:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000746c0
- (_Bool)_cn_containsSubstring:(id)arg1;	// IMP=0x000000000007469d
- (id)_cn_stringByDeletingCharactersInSet:(id)arg1;	// IMP=0x0000000000074605
- (_Bool)_cn_containsCharacterInSet:(id)arg1;	// IMP=0x00000000000745e2
- (_Bool)_cn_hasSuffix:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000745c3
- (_Bool)_cn_hasSuffix:(id)arg1;	// IMP=0x00000000000745ac
- (_Bool)_cn_hasPrefix:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000007458d
- (_Bool)_cn_hasPrefix:(id)arg1;	// IMP=0x0000000000074576
- (_Bool)_cn_hasCaseAndDiacriticInsensitivePrefix:(id)arg1;	// IMP=0x0000000000074564
- (_Bool)_cn_caseInsensitiveIsEqual:(id)arg1;	// IMP=0x000000000007454b
- (_Bool)_cn_isBlank;	// IMP=0x0000000000074532
@property(readonly) _Bool _cn_requiresPhoneNumberSanitizing;
- (id)_cn_stringByNormalizingWhitespace;	// IMP=0x00000000000753cf
- (id)_cn_stringBySanitizingPhoneNumber;	// IMP=0x0000000000075347
@end

