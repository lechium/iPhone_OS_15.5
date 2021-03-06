//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarPersistence/AVTStoreBackendMigrator-Protocol.h>

@class AVTCoreEnvironment, NSString;
@protocol AVTUILogger;

@interface AVTStoreBackendMigrator : NSObject <AVTStoreBackendMigrator>
{
    id <AVTUILogger> _logger;	// 8 = 0x8
    AVTCoreEnvironment *_environment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020c54
@property(readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
- (id)updatedRecordsForMigratingRecords:(id)arg1 source:(id)arg2 destinationBackend:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000209a0
- (_Bool)migrateContentFromSource:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000203bf
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000000002032e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

