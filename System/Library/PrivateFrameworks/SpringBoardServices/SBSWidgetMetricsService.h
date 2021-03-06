//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SBSWidgetMetricsProviding;

@interface SBSWidgetMetricsService : NSObject
{
    id <SBSWidgetMetricsProviding> _metricsProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005c2b
@property(readonly, nonatomic) __weak id <SBSWidgetMetricsProviding> metricsProvider; // @synthesize metricsProvider=_metricsProvider;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x0000000000005b63
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;	// IMP=0x0000000000005ae0
- (id)systemMetricsForWidget:(id)arg1;	// IMP=0x0000000000005a5d
- (void)dealloc;	// IMP=0x00000000000059d5
- (id)initWithMetricsProvider:(id)arg1;	// IMP=0x0000000000005971
- (id)init;	// IMP=0x0000000000005917

@end

