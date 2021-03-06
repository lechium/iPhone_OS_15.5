//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
}

+ (id)defaultStack;	// IMP=0x000000000006638c
+ (char *)environmentStackKey;	// IMP=0x000000000006635a
+ (id)effectiveWritingStackForKey:(void *)arg1;	// IMP=0x00000000000662c4
+ (id)effectiveReadingStackForKey:(void *)arg1;	// IMP=0x0000000000066232
+ (id)defaultEnvironment;	// IMP=0x0000000000066200
+ (id)currentEnvironmentForKey:(void *)arg1;	// IMP=0x0000000000066161
+ (id)currentEnvironment;	// IMP=0x0000000000066130
- (void).cxx_destruct;	// IMP=0x0000000000066581
- (void)resignCurrent;	// IMP=0x0000000000066513
- (void)becomeCurrent;	// IMP=0x00000000000664a5

@end

