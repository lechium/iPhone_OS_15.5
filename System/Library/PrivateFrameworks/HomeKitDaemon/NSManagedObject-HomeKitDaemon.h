//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface NSManagedObject (HomeKitDaemon)
+ (_Bool)hmd_validateCharacteristicValue:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000300685
+ (_Bool)hmd_validateNumber:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003005e2
+ (_Bool)hmd_validateUUID:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x000000000030053f
+ (id)hmd_errorForInvalidValue:(id)arg1 key:(id)arg2;	// IMP=0x0000000000300465
- (id)mkf_findRelationOnProperty:(id)arg1 modelProtocol:(id)arg2 keyValue:(id)arg3;	// IMP=0x00000000002ff541
- (void)mkf_removeFromRelationship:(id)arg1 object:(id)arg2;	// IMP=0x00000000002ff485
- (void)mkf_addToRelationship:(id)arg1 object:(id)arg2;	// IMP=0x00000000002ff24f
- (_Bool)mkf_synchronizeRelation:(id)arg1 items:(id)arg2 allowCreation:(_Bool)arg3;	// IMP=0x00000000002feeb7
- (id)mkf_materializeOrCreateRelationOnProperty:(id)arg1 modelProtocol:(id)arg2 keyValue:(id)arg3 createdNew:(_Bool *)arg4;	// IMP=0x00000000002fe9ae
@property(readonly, copy) NSString *hmd_debugIdentifier;
- (_Bool)hmd_validateCharacteristicValue:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002fe8e7
- (_Bool)hmd_validateNumber:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002fe870
- (_Bool)hmd_validateUUID:(id)arg1 key:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002fe7f9
- (id)hmd_modelsWithChangeType:(unsigned long long)arg1 detached:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000004ee6d9
- (id)hmd_parentModelID;	// IMP=0x00000000004ee5fa
- (id)hmd_modelID;	// IMP=0x00000000004ee551
- (id)hmd_lastKnownValueForKey:(id)arg1;	// IMP=0x00000000004ee41e
@end
