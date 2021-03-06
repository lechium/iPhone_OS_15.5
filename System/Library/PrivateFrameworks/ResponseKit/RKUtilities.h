//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RKUtilities : NSObject
{
}

+ (_Bool)RKRepairStringNeeded:(id)arg1;	// IMP=0x00000000000398ce
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;	// IMP=0x0000000000039704
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;	// IMP=0x0000000000039650
+ (_Bool)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)arg1;	// IMP=0x0000000000039494
+ (id)getDeviceModel;	// IMP=0x000000000003940e
+ (_Bool)suffixInArray:(id)arg1 withArray:(id)arg2;	// IMP=0x00000000000392ac
+ (_Bool)prefixInArray:(id)arg1 withArray:(id)arg2;	// IMP=0x000000000003914a
+ (_Bool)tokenInArray:(id)arg1 withArray:(id)arg2;	// IMP=0x0000000000038fe8
+ (id)removeEmoji:(id)arg1;	// IMP=0x0000000000038ced
+ (_Bool)isLanguageSupportedBySmartPunctuation:(id)arg1;	// IMP=0x0000000000038c35
+ (_Bool)isLanguageSupportedForPartOfSpeech:(id)arg1;	// IMP=0x0000000000038b3d
+ (_Bool)isLanguageSupportedForLemmatization:(id)arg1;	// IMP=0x0000000000038a35
+ (_Bool)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg1;	// IMP=0x0000000000038965
+ (id)stripDiacritics:(id)arg1;	// IMP=0x000000000003892a
+ (id)normalizeForPersonalization:(id)arg1;	// IMP=0x000000000003866c
+ (id)stripEmojiSkinTones:(id)arg1;	// IMP=0x00000000000385e3
+ (id)removeMultipleWhitespaces:(id)arg1;	// IMP=0x0000000000038411
+ (id)stripPunctuations:(id)arg1;	// IMP=0x0000000000038273

@end

