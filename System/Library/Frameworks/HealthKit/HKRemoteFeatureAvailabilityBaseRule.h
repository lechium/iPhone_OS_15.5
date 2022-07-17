//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HKRemoteFeatureAvailabilityDataSource;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityBaseRule : NSObject
{
    id <HKRemoteFeatureAvailabilityDataSource> _dataSource;	// 8 = 0x8
}

+ (Class)ruleClassForRawValue:(id)arg1;	// IMP=0x00000000000e5c7d
- (void).cxx_destruct;	// IMP=0x00000000000e647f
@property(nonatomic) __weak id <HKRemoteFeatureAvailabilityDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)evaluate;	// IMP=0x0000000000223aeb
- (void)processUserInfo:(id)arg1;	// IMP=0x0000000000223ac7
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000000e6385

@end
