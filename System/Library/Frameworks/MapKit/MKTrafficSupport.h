//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MKTrafficSupport : NSObject
{
}

+ (id)sharedTrafficSupport;	// IMP=0x00000000001e4214
- (id)localizedReportedByYouForGEOIncidentType:(int)arg1;	// IMP=0x00000000001e4808
- (id)localizedReportConfirmationForIncidentType:(int)arg1;	// IMP=0x00000000001e4764
- (id)localizedRAPDescriptionForGEOIncidentType:(int)arg1;	// IMP=0x00000000001e46be
- (id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2;	// IMP=0x00000000001e45e4
- (id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3;	// IMP=0x00000000001e4464
- (id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3;	// IMP=0x00000000001e4414
- (long long)_convertType:(int)arg1;	// IMP=0x00000000001e4380
- (void)setupTrafficIncidents;	// IMP=0x00000000001e4269

@end
