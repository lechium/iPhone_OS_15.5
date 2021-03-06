//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapsMenuBuilder : NSObject
{
}

+ (id)sendToDeviceAndShareMenuWithSendToDeviceEnabled:(_Bool)arg1;	// IMP=0x0040000000418cbc
+ (id)disabledAddMenu;	// IMP=0x0010000000418a21
+ (id)addMenu;	// IMP=0x00100000004183a2
+ (id)debugMenu;	// IMP=0x0010000000417ea7
+ (id)performanceTestsMenu;	// IMP=0x0010000000417aff
+ (id)visibleAttributesSubMenu;	// IMP=0x0010000000417789
+ (id)currentLocationSubMenu;	// IMP=0x001000000041752c
+ (id)zoomSubMenu;	// IMP=0x00100000004174b4
+ (id)zoomSubMenuCommands;	// IMP=0x0010000000416f9a
+ (id)mapModeSubMenu;	// IMP=0x0010000000416f22
+ (id)mapModeSubMenuCommands;	// IMP=0x0010000000416a62
+ (id)findSubMenu;	// IMP=0x00100000004168f7
+ (id)editMenu;	// IMP=0x001000000041678c
+ (id)dropPinKeyCommand;	// IMP=0x00100000004166d5
+ (id)fileMenuEnd;	// IMP=0x0010000000416603
+ (id)filePrintKeyCommand;	// IMP=0x001000000041654c
+ (id)fileMenuStart;	// IMP=0x0010000000416341
+ (id)applicationMenu;	// IMP=0x0010000000416065
+ (id)userProfileMenu;	// IMP=0x0010000000415f14
+ (id)preferencesMenuCommand;	// IMP=0x0010000000415e5d
+ (void)buildMenuWithBuilder:(id)arg1 sendToDeviceEnabled:(_Bool)arg2;	// IMP=0x00100000004159bf

@end

