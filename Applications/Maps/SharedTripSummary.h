//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SharedTripSummary : NSObject
{
    NSArray *_sharedTrips;	// 8 = 0x8
}

+ (id)summaryWithSharedTrips:(id)arg1;	// IMP=0x00400000004f2e03
- (void).cxx_destruct;	// IMP=0x00100000004f31ba
@property(retain, nonatomic) NSArray *sharedTrips; // @synthesize sharedTrips=_sharedTrips;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (void)updateModel:(id)arg1;	// IMP=0x00100000003603b5
- (id)_transportTypeStringForAnalytics;	// IMP=0x00100000004f31ca
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

