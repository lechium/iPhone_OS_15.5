//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNTraceRecordingData, NSArray, NSError, NSUUID;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningMutableResponse
{
}

- (void)copyFrom:(id)arg1;	// IMP=0x0000000000004b78
- (void)setObject:(id)arg1 forUserInfoKey:(id)arg2 forRouteID:(id)arg3;	// IMP=0x0010000000004b49

// Remaining properties
@property(nonatomic) unsigned long long expectedNumberOfRoutes; // @dynamic expectedNumberOfRoutes;
@property(retain, nonatomic) NSError *lastError; // @dynamic lastError;
@property(nonatomic) unsigned long long routeOrigin; // @dynamic routeOrigin;
@property(retain, nonatomic) NSArray *routes; // @dynamic routes;
@property(retain, nonatomic) NSUUID *selectedRouteID; // @dynamic selectedRouteID;
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @dynamic traceRecordingData;

@end
