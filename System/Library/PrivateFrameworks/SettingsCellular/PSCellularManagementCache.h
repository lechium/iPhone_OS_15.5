//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Logger, NSSet, NSString;

@interface PSCellularManagementCache : NSObject
{
    Logger *_logger;	// 8 = 0x8
    NSSet *_managedCellDataAppCache;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000000021d5
- (void).cxx_destruct;	// IMP=0x0000000000002bad
@property(retain) NSSet *managedCellDataAppCache; // @synthesize managedCellDataAppCache=_managedCellDataAppCache;
- (id)getLogger;	// IMP=0x0000000000002b30
- (_Bool)isManaged:(id)arg1;	// IMP=0x0000000000002a14
@property(readonly, nonatomic) _Bool hasManagedCellularData;
- (id)managedCellDataAppBundleIDs;	// IMP=0x000000000000272e
- (id)managedAppBundleIDs;	// IMP=0x00000000000026d7
@property(readonly, nonatomic) NSString *mdmName;
@property(readonly, nonatomic) _Bool isGlobalDataModificationRestricted;
- (void)managedConfigurationProfileListDidChange;	// IMP=0x0000000000002534
- (void)managedConfigurationSettingsDidChange;	// IMP=0x00000000000024b6
- (void)willEnterForeground;	// IMP=0x0000000000002438
- (void)clearCache;	// IMP=0x0000000000002424
- (id)init;	// IMP=0x0000000000002375
- (id)initPrivate;	// IMP=0x000000000000223a

@end

