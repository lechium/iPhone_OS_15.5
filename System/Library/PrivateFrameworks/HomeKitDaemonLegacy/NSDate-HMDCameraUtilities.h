//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (HMDCameraUtilities)
+ (id)hmd_dateFromSnapshotFileName:(id)arg1;	// IMP=0x00000000002b1ef2
+ (id)hmd_snapshotFileNameDateFormatter;	// IMP=0x00000000002b1ec2
+ (id)hm_iso8601dateFromString:(id)arg1;	// IMP=0x000000000060a13e
+ (unsigned char)hm_dayOfTheWeek;	// IMP=0x000000000060a08c
@property(readonly, copy) NSString *hmd_snapshotFileName;
@end
