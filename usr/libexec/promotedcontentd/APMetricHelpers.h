//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APMetricHelpers : NSObject
{
}

+ (id)journeyMetricHelperForContentData:(id)arg1;	// IMP=0x00200000000c280f
+ (id)diagnosticMetricHelperForContentData:(id)arg1;	// IMP=0x00100000000c27ac
+ (void)setJourneyDaemonMetricHelper:(Class)arg1;	// IMP=0x00100000000c2682
+ (Class)journeyDaemonMetricHelper;	// IMP=0x00100000000c262f
+ (void)setDiagnosticDaemonMetricHelper:(Class)arg1;	// IMP=0x00100000000c2505
+ (Class)diagnosticDaemonMetricHelper;	// IMP=0x00100000000c24b2

@end

