//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdPlatformsCommon/APMetric.h>

@interface APMetric (Daemon)
- (id)description;	// IMP=0x00200000000becc6
- (id)_descriptionWithFormat:(id)arg1;	// IMP=0x00100000000bea00
- (id)_metric;	// IMP=0x00100000000be95d
- (id)_route;	// IMP=0x00100000000be8c0
- (void)updateClientBundleID:(id)arg1;	// IMP=0x00100000000be8ae
- (void)convertNetworkDatesToDates;	// IMP=0x00100000000be6a3
- (void)convertDatesToNetworkDates;	// IMP=0x00100000000be2db
- (_Bool)validateMetricAndSetupIdentifiers:(id)arg1;	// IMP=0x00100000000be192
- (id)metricRoute;	// IMP=0x00100000000be160
- (void)initDeviceInfoDaemon;	// IMP=0x00100000000bdf6c
@end

