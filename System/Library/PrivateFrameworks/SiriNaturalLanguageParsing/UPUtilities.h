//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UPUtilities : NSObject
{
}

+ (id)rootNodeRepresentationForIntent:(id)arg1 andEntities:(id)arg2;	// IMP=0x000000000006af53
+ (id)intermediateNodeRepresentations:(id)arg1;	// IMP=0x000000000006a662
+ (id)higherLevelEntityLabelFromParentLabel:(id)arg1 childLabel:(id)arg2;	// IMP=0x000000000006a5a7
+ (id)stdU16ToNSString:(const void *)arg1;	// IMP=0x000000000006a575
+ (basic_string_2c416e97)nSStringToU16String:(id)arg1;	// IMP=0x000000000006a483
+ (struct _NSRange)rangeFromStart:(unsigned long long)arg1 end:(unsigned long long)arg2;	// IMP=0x000000000006a474
+ (_Bool)checkFileExistence:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006a160

@end

