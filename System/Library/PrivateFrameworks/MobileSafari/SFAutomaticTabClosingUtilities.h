//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SFAutomaticTabClosingUtilities : NSObject
{
}

+ (void)clearMostDistantLastViewedTime;	// IMP=0x000000000004dda9
+ (void)setMostDistantLastViewedTime:(double)arg1;	// IMP=0x000000000004dd1c
+ (void)resetAutomaticTabClosingIntervalPreference;	// IMP=0x000000000004dcce
+ (void)setAutomaticTabClosingInterval:(unsigned long long)arg1;	// IMP=0x000000000004dc71
+ (unsigned long long)automaticTabClosingInterval;	// IMP=0x000000000004dc1c
+ (_Bool)userHasPreferenceForAutomaticTabClosingInterval;	// IMP=0x000000000004dba8
+ (_Bool)shouldCloseTabsAutomaticallyWhenEnteringForeground;	// IMP=0x000000000004dad9

@end
