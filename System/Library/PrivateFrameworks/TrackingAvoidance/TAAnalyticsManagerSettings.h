//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TAAnalyticsManagerSettings : NSObject
{
    _Bool _enableSubmission;	// 8 = 0x8
    unsigned long long _settingsVersion;	// 16 = 0x10
}

@property(nonatomic) unsigned long long settingsVersion; // @synthesize settingsVersion=_settingsVersion;
@property _Bool enableSubmission; // @synthesize enableSubmission=_enableSubmission;
- (id)initWithEnableSubmissionOrDefault:(id)arg1 andSettingsVersion:(unsigned long long)arg2;	// IMP=0x000000000001f885
- (id)init;	// IMP=0x000000000001f86c

@end

