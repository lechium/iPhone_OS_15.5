//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRSUIClusterWindow, MISSING_TYPE;

@protocol CRSUIClusterSettingsObserving <NSObject>

@optional
- (MISSING_TYPE *)clusterWindow:didChangeLayoutJustification: /* Error: Ran out of types for this method. */;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeItemType:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeSpeedLimitSetting:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeETASetting:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeCompassSetting:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didZoomInDirection:(long long)arg2;
@end
