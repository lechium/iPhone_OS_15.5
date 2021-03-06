//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;
@protocol OS_dispatch_queue;

@interface HDDiffPrivReporter : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)reportableTypes;	// IMP=0x000000000016d333
+ (_Bool)isAvailable;	// IMP=0x000000000016d273
- (void).cxx_destruct;	// IMP=0x000000000016dec0
- (_Bool)reportWithCurrentDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016deb8
- (id)_typesInMonthWithDataForTypes:(id)arg1 now:(id)arg2 error:(id *)arg3;	// IMP=0x000000000016d8fc
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000016d27b

@end

