//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriter : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ebe8
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (id)companionAvailabilityStateKeyFromUniqueName:(id)arg1;	// IMP=0x000000000000ebb6
- (_Bool)markTemplateAvailable:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000e9b0
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000000e94c

@end

