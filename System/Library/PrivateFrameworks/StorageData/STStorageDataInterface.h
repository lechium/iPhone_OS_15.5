//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class STStorageAppsMonitor;

@interface STStorageDataInterface : NSObject
{
    STStorageAppsMonitor *_appsMonitor;	// 8 = 0x8
}

+ (id)storageInfoDict_Remote;	// IMP=0x0000000000015ce0
- (void).cxx_destruct;	// IMP=0x0000000000015fb0
@property(retain) STStorageAppsMonitor *appsMonitor; // @synthesize appsMonitor=_appsMonitor;
- (id)categorySizesDict;	// IMP=0x0000000000015f77
- (id)appSizesDict;	// IMP=0x0000000000015f61
- (id)storageInfoDict;	// IMP=0x0000000000015cca
- (id)appsOrderedByName;	// IMP=0x0000000000015c1a
- (id)appsOrderedBySize;	// IMP=0x0000000000015a58
- (id)apps;	// IMP=0x00000000000159a8
- (id)init;	// IMP=0x000000000001592c

@end

