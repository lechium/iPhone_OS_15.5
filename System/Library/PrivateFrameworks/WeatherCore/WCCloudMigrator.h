//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WCDeviceLookup;

@interface WCCloudMigrator : NSObject
{
    WCDeviceLookup *_deviceLookup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004ec6
@property(readonly, nonatomic) WCDeviceLookup *deviceLookup; // @synthesize deviceLookup=_deviceLookup;
- (void)eraseStoreIfNeeded:(id)arg1;	// IMP=0x0000000000004bbb
- (void)migrateStore:(id)arg1 toStore:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000469f
- (_Bool)storeRequiresMigration:(id)arg1;	// IMP=0x000000000000464e
- (id)init;	// IMP=0x00000000000045f8

@end

