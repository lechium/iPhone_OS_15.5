//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLPRVehicle, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSTimeZone, _MNLPRPlate;

@interface MNLPRRuleMatcher : NSObject
{
    GEOLPRVehicle *_vehicle;	// 8 = 0x8
    NSArray *_ruleSets;	// 16 = 0x10
    unsigned long long _signpost;	// 24 = 0x18
    _MNLPRPlate *_lastPlate;	// 32 = 0x20
    NSDate *_lastDate;	// 40 = 0x28
    NSTimeZone *_lastTimeZone;	// 48 = 0x30
    NSDictionary *_usedRegions;	// 56 = 0x38
    NSMutableDictionary *_usedRegionETAs;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000053f52
- (id)debug_jsonDescriptionOfLastPlate;	// IMP=0x00000000000534a7
- (id)generateMaskedPlateForWaypoints:(id)arg1 date:(id)arg2 timeZone:(id)arg3 error:(id *)arg4;	// IMP=0x000000000004cfcd
- (id)initForVehicle:(id)arg1 withRules:(id)arg2;	// IMP=0x000000000004cf03

@end

