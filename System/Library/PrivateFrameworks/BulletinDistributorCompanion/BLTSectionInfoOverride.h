//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BLTSectionInfoOverride : NSObject
{
    NSNumber *_grouping;	// 8 = 0x8
    NSNumber *_level;	// 16 = 0x10
    NSNumber *_sound;	// 24 = 0x18
    NSNumber *_criticalAlert;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002a161
@property(retain, nonatomic) NSNumber *criticalAlert; // @synthesize criticalAlert=_criticalAlert;
@property(retain, nonatomic) NSNumber *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *grouping; // @synthesize grouping=_grouping;
- (id)initWithOverrides:(id)arg1;	// IMP=0x0000000000029e68

@end

