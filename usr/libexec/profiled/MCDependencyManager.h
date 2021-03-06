//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCDependencyReader.h>

@class NSMutableDictionary;

@interface MCDependencyManager : MCDependencyReader
{
    NSMutableDictionary *_memberQueueSystemOrphansDict;	// 8 = 0x8
    NSMutableDictionary *_memberQueueUserOrphansDict;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x004000000005b7d8
- (void).cxx_destruct;	// IMP=0x002000000005da5b
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserOrphansDict; // @synthesize memberQueueUserOrphansDict=_memberQueueUserOrphansDict;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemOrphansDict; // @synthesize memberQueueSystemOrphansDict=_memberQueueSystemOrphansDict;
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 fromSystem:(_Bool)arg5 user:(_Bool)arg6;	// IMP=0x001000000005d850
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;	// IMP=0x001000000005d835
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 toSystem:(_Bool)arg5 user:(_Bool)arg6;	// IMP=0x001000000005d63a
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4;	// IMP=0x001000000005d61f
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x001000000005d218
- (void)memberQueueRemoveDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x001000000005d1f0
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 fromSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x001000000005ce86
- (void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x001000000005ce5e
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x001000000005caae
- (void)memberQueueAddDependent:(id)arg1 toParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x001000000005ca86
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 toSystem:(_Bool)arg4 user:(_Bool)arg5;	// IMP=0x001000000005c872
- (void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3;	// IMP=0x001000000005c84a
- (id)memberQueueOrphanedParentsInUserDomain:(id)arg1;	// IMP=0x001000000005c7c7
- (id)memberQueueOrphanedParentsInSystemDomain:(id)arg1;	// IMP=0x001000000005c744
- (id)orphanedParentsForUserDomain:(id)arg1;	// IMP=0x001000000005c59e
- (id)orphanedParentsForSystemDomain:(id)arg1;	// IMP=0x001000000005c3f8
- (id)orphanedParentsForDomain:(id)arg1;	// IMP=0x001000000005c0e1
- (void)memberQueueRemoveOrphanParent:(id)arg1 inDomain:(id)arg2 fromSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000005be52
- (void)memberQueueAddOrphanParent:(id)arg1 inDomain:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x001000000005bba2
- (void)commitChangesCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005b915
- (void)commitChanges;	// IMP=0x001000000005b86d
- (id)_init;	// IMP=0x001000000005b7ea

@end

