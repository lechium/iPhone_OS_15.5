//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PBCodable;

@protocol ATXPETEventTracker2Protocol
- (void)trackDistributionForMessage:(PBCodable *)arg1 value:(double)arg2;
- (void)trackScalarForMessage:(PBCodable *)arg1 count:(int)arg2;
- (void)trackScalarForMessage:(PBCodable *)arg1;
- (void)logMessage:(PBCodable *)arg1;
@end

