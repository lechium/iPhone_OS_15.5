//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PCStatusConditionStorage : NSObject
{
}

+ (id)_makeApplicationSupportSubdirectory:(id)arg1;	// IMP=0x00200000000eda4f
+ (id)fileURLForCondition:(id)arg1;	// IMP=0x00100000000ed88d
+ (id)baseURL;	// IMP=0x00100000000ed849
+ (void)clearExpiredStatusConditions;	// IMP=0x00100000000ecebd
+ (_Bool)isStatusConditionRegistered:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ecc0f
+ (id)clearStatusCondition:(id)arg1;	// IMP=0x00100000000ec789
+ (id)setStatusCondition:(id)arg1;	// IMP=0x00100000000ec37a

@end

