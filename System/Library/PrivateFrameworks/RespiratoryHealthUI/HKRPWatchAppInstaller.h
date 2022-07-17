//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKWatchAppAvailability, NRDevice;
@protocol HKRPWatchInstallAppsProviding;

@interface HKRPWatchAppInstaller : NSObject
{
    NRDevice *_device;	// 8 = 0x8
    HKWatchAppAvailability *_watchAppAvailability;	// 16 = 0x10
    id <HKRPWatchInstallAppsProviding> _installAppsProviding;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000033b6
- (void)installAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000318b
- (void)checkIfAppCanBeInstalledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002d87
- (id)initWithDevice:(id)arg1 watchAppAvailability:(id)arg2 installAppsProviding:(id)arg3;	// IMP=0x0000000000002cd0
- (id)init;	// IMP=0x0000000000002c06

@end
