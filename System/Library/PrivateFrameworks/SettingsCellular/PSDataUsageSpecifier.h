//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

#import <SettingsCellular/PSSpecifierDataUsageReporter-Protocol.h>

@class NSString, PSDataUsageStatisticsCache;
@protocol PSBillingPeriodSource;

@interface PSDataUsageSpecifier : PSSpecifier <PSSpecifierDataUsageReporter>
{
    id <PSBillingPeriodSource> _billingPeriodSource;	// 184 = 0xb8
    PSDataUsageStatisticsCache *_statisticsCache;	// 192 = 0xc0
    NSString *_bundleID;	// 200 = 0xc8
    unsigned long long _type;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000009a35
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // @synthesize statisticsCache=_statisticsCache;
@property(nonatomic) __weak id <PSBillingPeriodSource> billingPeriodSource; // @synthesize billingPeriodSource=_billingPeriodSource;
- (id)dataUsageString;	// IMP=0x0000000000009775
- (unsigned long long)dataUsage;	// IMP=0x00000000000095a8
- (id)initWithType:(unsigned long long)arg1 bundleID:(id)arg2 statisticsCache:(id)arg3;	// IMP=0x00000000000092d7

@end
