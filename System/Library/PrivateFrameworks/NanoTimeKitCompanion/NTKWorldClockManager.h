//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, WorldClockManager;

@interface NTKWorldClockManager : NSObject
{
    WorldClockManager *_frameworkManager;	// 8 = 0x8
    struct os_unfair_lock_s _frameworkLock;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000000000a1978
- (void).cxx_destruct;	// IMP=0x00000000000a1bd7
- (unsigned long long)addCity:(id)arg1;	// IMP=0x00000000000a1b7c
- (_Bool)canAddCity;	// IMP=0x00000000000a1b44
- (void)saveCities;	// IMP=0x00000000000a1b11
- (_Bool)checkIfCitiesModified;	// IMP=0x00000000000a1ad9
- (void)loadCities;	// IMP=0x00000000000a1aa6
@property(readonly, nonatomic) NSArray *cities;
- (id)init;	// IMP=0x00000000000a19cd

@end

