//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PTCinematographyExistingTrack
{
}

- (id)detectionsInTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000000c8d5
- (id)detectionAtOrBeforeTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000000c855
- (id)detectionNearestTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000000c5bc
- (id)detectionInFrame:(id)arg1;	// IMP=0x000000000000c557
- (id)initWithDetectionType:(unsigned long long)arg1 trackIdentifier:(long long)arg2 groupIdentifier:(long long)arg3;	// IMP=0x000000000000c4d3
- (unsigned long long)trackType;	// IMP=0x000000000000c4c8
- (_Bool)isDiscrete;	// IMP=0x000000000000c4c0

@end
