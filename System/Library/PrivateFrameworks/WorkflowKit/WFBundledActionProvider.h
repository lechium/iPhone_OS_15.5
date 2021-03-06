//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface WFBundledActionProvider
{
}

- (void)deleteCache;	// IMP=0x00000000003042f9
- (void)updateCache:(CDUnknownBlockType)arg1;	// IMP=0x0000000000303ef3
- (id)bundledURL;	// IMP=0x0000000000303e83
- (id)cacheURL;	// IMP=0x0000000000303cf9
- (id)cacheDirectoryURL;	// IMP=0x0000000000303c71
- (id)currentVersion;	// IMP=0x0000000000303b98
- (id)createAllAvailableActionsForLocalization;	// IMP=0x000000000030396a
- (id)createAllAvailableActionsIncludingMissingActions:(_Bool)arg1;	// IMP=0x0000000000303734
- (id)createAllAvailableActions;	// IMP=0x0000000000303720
- (void)createActionsForRequests:(id)arg1;	// IMP=0x0000000000303289
- (id)createActionWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 fallbackToMissing:(_Bool)arg4 isForLocalization:(_Bool)arg5;	// IMP=0x0000000000303024
- (id)availableActionIdentifiers;	// IMP=0x0000000000302f98
- (id)actionDefinitionsWithIdentifiers:(id)arg1;	// IMP=0x0000000000302bb1
@property(readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;

@end

