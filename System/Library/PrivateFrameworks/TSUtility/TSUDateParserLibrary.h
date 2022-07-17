//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCondition, NSMutableArray;

@interface TSUDateParserLibrary : NSObject
{
    unsigned long long mMaxPermittedParsers;	// 8 = 0x8
    unsigned long long mNumberOfUses;	// 16 = 0x10
    unsigned long long mParsersCreated;	// 24 = 0x18
    NSMutableArray *mAvailableDateParsers;	// 32 = 0x20
    NSCondition *mParserLibraryConditionVariable;	// 40 = 0x28
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d0ac
+ (id)sharedDateParserLibrary;	// IMP=0x000000000003cfa1
+ (id)_singletonAlloc;	// IMP=0x000000000003cf70
- (void)returnDateParser:(id)arg1;	// IMP=0x000000000003d427
- (id)checkoutDateParser;	// IMP=0x000000000003d1c8
- (id)init;	// IMP=0x000000000003d15d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d154
- (id)autorelease;	// IMP=0x000000000003d14b
- (oneway void)release;	// IMP=0x000000000003d145
- (unsigned long long)retainCount;	// IMP=0x000000000003d13a
- (id)retain;	// IMP=0x000000000003d131

@end
