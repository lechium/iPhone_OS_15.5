//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSDate, NSNumber;

@interface HMDCameraRecordingReachabilityEventModel : HMBModel
{
}

+ (id)hmbExternalRecordType;	// IMP=0x00000000006ad750
+ (id)hmbProperties;	// IMP=0x00000000006ad720
- (id)createEvent;	// IMP=0x00000000006ad909
@property _Bool reachable;

// Remaining properties
@property(retain) NSDate *dateOfOccurrence; // @dynamic dateOfOccurrence;
@property(retain) NSNumber *reachableField; // @dynamic reachableField;

@end
