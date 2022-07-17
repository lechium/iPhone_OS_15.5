//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRKClassKitCurrentUserProvider, NSMutableArray, NSString;
@protocol CRKPersonaBlockPerforming;

@interface CRKClassKitPersonaAdopter : NSObject
{
    NSString *_currentPersonaUniqueString;	// 8 = 0x8
    id <CRKPersonaBlockPerforming> _personaBlockPerformer;	// 16 = 0x10
    CRKClassKitCurrentUserProvider *_currentUserProvider;	// 24 = 0x18
    NSMutableArray *_stashedBlocks;	// 32 = 0x20
}

+ (id)currentUserProviderObservedKeyPaths;	// IMP=0x000000000001fc64
- (void).cxx_destruct;	// IMP=0x000000000001ff13
@property(readonly, nonatomic) NSMutableArray *stashedBlocks; // @synthesize stashedBlocks=_stashedBlocks;
@property(readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider; // @synthesize currentUserProvider=_currentUserProvider;
@property(readonly, nonatomic) id <CRKPersonaBlockPerforming> personaBlockPerformer; // @synthesize personaBlockPerformer=_personaBlockPerformer;
@property(copy, nonatomic) NSString *currentPersonaUniqueString; // @synthesize currentPersonaUniqueString=_currentPersonaUniqueString;
- (void)currentUserChanged;	// IMP=0x000000000001fd23
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001fcd6
- (id)captureStashedBlocks;	// IMP=0x000000000001fbd9
- (_Bool)personaFetched;	// IMP=0x000000000001fb95
- (void)callStashedBlocks;	// IMP=0x000000000001f991
- (void)callStashedBlocksIfPersonaFetched;	// IMP=0x000000000001f95a
- (void)performBlockWithClassKitPersona:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f823
- (id)initWithClassKitFacade:(id)arg1 personaBlockPerformer:(id)arg2;	// IMP=0x000000000001f5ed
- (void)dealloc;	// IMP=0x000000000001f46b

@end
