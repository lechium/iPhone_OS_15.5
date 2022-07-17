//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIStorageManagementProtocol-Protocol.h>

@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>
{
}

- (_Bool)_writeDeviceIdWithData:(id)arg1 schemaVersion:(unsigned int)arg2;	// IMP=0x00000000000fbb0f
- (_Bool)_readDeviceIdWithSchemaVersion:(unsigned int)arg1 intoData:(id *)arg2;	// IMP=0x00000000000fb910
- (_Bool)_clearContainerStorage;	// IMP=0x00000000000fb29a
- (_Bool)_runNamespaceDatabaseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000fb184
- (_Bool)_clearStorage;	// IMP=0x00000000000faee5
- (_Bool)_writeSchemaVersion:(unsigned int)arg1;	// IMP=0x00000000000facc7
- (_Bool)_readSchemaVersion:(unsigned int *)arg1;	// IMP=0x00000000000fa80e
- (_Bool)requestTrialStorageResetOnNextLaunch;	// IMP=0x00000000000fa7d7
- (_Bool)prepareTrialStorage;	// IMP=0x00000000000fa4d2

@end
