//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityMigrationManager : NSObject
{
    NSManagedObjectModel *_destinationModel;	// 8 = 0x8
    NSManagedObjectModel *_sourceModel;	// 16 = 0x10
    PFUbiquityLocation *_rootLocation;	// 24 = 0x18
    NSString *_localPeerID;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x00000000002e48e0
- (id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;	// IMP=0x00000000002e4844
- (id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5;	// IMP=0x00000000002e47d4

@end
