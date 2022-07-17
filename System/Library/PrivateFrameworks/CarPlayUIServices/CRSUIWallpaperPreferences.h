//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRPairedVehicleManager, CRSUIWallpaper, CRVehicle;

@interface CRSUIWallpaperPreferences : NSObject
{
    CRVehicle *_vehicle;	// 8 = 0x8
    CRPairedVehicleManager *_vehicleManager;	// 16 = 0x10
}

+ (id)_wallpaperWithIdentifier:(id)arg1;	// IMP=0x0000000000005a28
+ (id)wallpaperWithIdentifier:(id)arg1;	// IMP=0x00000000000058ff
+ (id)defaultWallpaper;	// IMP=0x0000000000005376
+ (id)availableWallpapers;	// IMP=0x00000000000050c5
- (void).cxx_destruct;	// IMP=0x0000000000005b6f
@property(retain, nonatomic) CRPairedVehicleManager *vehicleManager; // @synthesize vehicleManager=_vehicleManager;
@property(retain, nonatomic) CRVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(retain, nonatomic) CRSUIWallpaper *currentWallpaper;
- (id)init;	// IMP=0x00000000000053cd

@end
