//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol APMetricRoutable <NSObject>
@property(readonly, nonatomic) NSString *userIdentifier;
@property(readonly, nonatomic) NSString *deviceIdentifier;
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) long long route;
@property(readonly, nonatomic) NSString *name;
- (NSString *)stringForMetric:(long long)arg1;
- (_Bool)metricIsDisabled:(long long)arg1;
- (_Bool)metricIsDiagnosticsAndUsage:(long long)arg1;
- (_Bool)metricIsDefined:(long long)arg1;
- (id)initWithRouteDefinition:(NSDictionary *)arg1;
- (id)initWithRouteJSON:(NSData *)arg1;
@end
