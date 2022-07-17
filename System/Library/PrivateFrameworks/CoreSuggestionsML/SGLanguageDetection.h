//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGLanguageDetection : NSObject
{
}

+ (void)logMatchingForRange:(struct _NSRange)arg1 lowercaseRange:(struct _NSRange)arg2 text:(id)arg3 lowercaseText:(id)arg4;	// IMP=0x000000000002b195
+ (struct _NSRange)tokenRangeForText:(id)arg1 maxTruncatedLength:(unsigned long long)arg2 tagger:(id)arg3 taggerOptions:(unsigned long long)arg4 prevTextTokenMaxRange:(unsigned long long)arg5 originalLengthShortfall:(unsigned long long)arg6 lowercaseText:(id)arg7 lowercaseRange:(struct _NSRange)arg8;	// IMP=0x000000000002aeae
+ (id)languageTagsFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3;	// IMP=0x000000000002a6f8
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3;	// IMP=0x000000000002a3b1
+ (id)dominantLanguageTagFromLanguageTags:(id)arg1;	// IMP=0x000000000002a356
+ (id)dominantLanguageTagFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5;	// IMP=0x000000000002a2a2
+ (id)dominantLanguageTagFromText:(id)arg1;	// IMP=0x000000000002a23b
+ (id)detectLanguageFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3;	// IMP=0x000000000002a19b
+ (id)detectLanguageFromLanguageTags:(id)arg1;	// IMP=0x000000000002a14a
+ (id)detectLanguageFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5;	// IMP=0x000000000002a0a4
+ (id)detectLanguageFromText:(id)arg1;	// IMP=0x000000000002a053
+ (id)defaultLanguage;	// IMP=0x0000000000029f9e
+ (id)languageForLocaleIdentifier:(id)arg1;	// IMP=0x0000000000029aed

@end
