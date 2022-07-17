//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueUnnestedProperty
{
    NSArray *_affectingProperties;	// 24 = 0x18
    _Bool _cachedIsaForAutonotifyingIsValid;	// 32 = 0x20
    Class _cachedIsaForAutonotifying;	// 40 = 0x28
}

- (_Bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;	// IMP=0x00000000000b7636
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672)arg5;	// IMP=0x00000000000b74b6
- (_Bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(_Bool)arg4 forwardingValues:(CDStruct_a70f6672 *)arg5;	// IMP=0x00000000000b7212
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000000b70db
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(_Bool)arg3;	// IMP=0x00000000000b6fa4
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000000b6e5e
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;	// IMP=0x00000000000b6e2b
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000000b6cb7
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(_Bool *)arg2;	// IMP=0x00000000000b6c7f
- (Class)isaForAutonotifying;	// IMP=0x00000000000b6b2f
- (Class)_isaForAutonotifying;	// IMP=0x00000000000b6ade
- (void)_addDependentValueKey:(id)arg1;	// IMP=0x00000000000b6ad8
- (void)_givenPropertiesBeingInitialized:(struct __CFSet *)arg1 getAffectingProperties:(id)arg2;	// IMP=0x00000000000b6625
- (id)description;	// IMP=0x00000000000b652a
- (void)dealloc;	// IMP=0x00000000000b64c5
- (id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(struct __CFSet *)arg3;	// IMP=0x00000000000b62b8

@end
