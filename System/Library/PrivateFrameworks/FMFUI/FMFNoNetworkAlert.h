//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FMFNoNetworkAlert : NSObject
{
    _Bool _globalCellularEnabled;	// 8 = 0x8
}

+ (_Bool)isAirplaneModeEnabled;	// IMP=0x00000000000032bf
+ (_Bool)isGlobalCellularEnabled;	// IMP=0x00000000000031e8
+ (id)alertInfoForInternetUnavailableReason:(unsigned long long)arg1;	// IMP=0x0000000000002e39
+ (unsigned long long)reasonForNoInternet;	// IMP=0x0000000000002dd9
+ (id)newAlertController;	// IMP=0x0000000000002a3c
@property(nonatomic, getter=isGlobalCellularEnabled) _Bool globalCellularEnabled; // @synthesize globalCellularEnabled=_globalCellularEnabled;

@end
