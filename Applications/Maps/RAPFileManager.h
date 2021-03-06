//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RAPFileManager : NSObject
{
}

+ (double)standardTimeToLive;	// IMP=0x004000000049f8d9
+ (id)dataAtFileURL:(id)arg1;	// IMP=0x001000000049f833
+ (_Bool)haveContentsOfFilePathExpired:(id)arg1 withSuggestedRetryDate:(id)arg2 withTimeToLive:(double)arg3;	// IMP=0x001000000049f63b
+ (_Bool)haveContentsOfFilePathExpired:(id)arg1 withSuggestedRetryDate:(id)arg2;	// IMP=0x001000000049f5be
+ (_Bool)removeAllItemsInDirectory:(id)arg1;	// IMP=0x001000000049f3ff
+ (_Bool)removeItemAtFilePath:(id)arg1;	// IMP=0x001000000049f21f
+ (unsigned long long)numberOfItemsInDirectory:(id)arg1;	// IMP=0x001000000049f0c7
+ (_Bool)saveData:(id)arg1 toDirectory:(id)arg2 filename:(id)arg3;	// IMP=0x001000000049ec0d
+ (id)baseSubmissionFilePath;	// IMP=0x001000000049eb74
+ (id)baseLayoutFilePath;	// IMP=0x001000000049eadb
+ (id)baseFilePath:(id *)arg1;	// IMP=0x001000000049e9c4

@end

