//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _KSTextReplacementHelper : NSObject
{
}

+ (id)fetchConfigurationPlist;	// IMP=0x000000000002cc71
+ (void)fetchConfigurationPlistIfNeeded;	// IMP=0x000000000002c980
+ (id)sampleShortcut;	// IMP=0x000000000002c6fc
+ (id)appleLanguagesPreference;	// IMP=0x000000000002c698
+ (void)logAggdValueForSyncIsPull:(_Bool)arg1 success:(_Bool)arg2;	// IMP=0x000000000002c5e7
+ (id)aggdPrefix;	// IMP=0x000000000002c5da
+ (void)logPhraseWordCount:(long long)arg1;	// IMP=0x000000000002c4c9
+ (void)extractAggdMetricsForTextReplacement:(id)arg1;	// IMP=0x000000000002c3b9
+ (id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2;	// IMP=0x000000000002c2b1
+ (id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3;	// IMP=0x000000000002c1a6
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x000000000002c0b8
+ (id)errorWithCode:(long long)arg1 forEntry:(id)arg2;	// IMP=0x000000000002bfca
+ (long long)validateTextReplacement:(id)arg1;	// IMP=0x000000000002bd13
+ (id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(_Bool)arg2;	// IMP=0x000000000002bb44
+ (id)textReplaceEntryFromTIDictionaryValue:(id)arg1;	// IMP=0x000000000002ba64
+ (id)errorStringForCode:(long long)arg1;	// IMP=0x000000000002b990

@end
