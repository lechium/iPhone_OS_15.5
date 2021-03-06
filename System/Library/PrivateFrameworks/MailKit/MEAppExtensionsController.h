//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable;
@protocol EFCancelable, OS_dispatch_queue;

@interface MEAppExtensionsController : NSObject
{
    NSMapTable *_observers;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    id _extensionMatchingContext;	// 24 = 0x18
    NSArray *_allRemoteExtensions;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSDictionary *_extensionsByIdentifier;	// 48 = 0x30
    NSArray *_previouslyEnabledExtensionIdentifiers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_stateCaptureQueue;	// 64 = 0x40
    id <EFCancelable> _stateCaptureCancelable;	// 72 = 0x48
}

+ (id)_emailExtensionAttributeDictionary;	// IMP=0x0000000000001ee3
+ (id)sharedInstance;	// IMP=0x0000000000001e75
+ (id)log;	// IMP=0x0000000000001d8c
- (void).cxx_destruct;	// IMP=0x0000000000004aa7
@property(readonly, nonatomic) id <EFCancelable> stateCaptureCancelable; // @synthesize stateCaptureCancelable=_stateCaptureCancelable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue; // @synthesize stateCaptureQueue=_stateCaptureQueue;
@property(retain, nonatomic) NSArray *previouslyEnabledExtensionIdentifiers; // @synthesize previouslyEnabledExtensionIdentifiers=_previouslyEnabledExtensionIdentifiers;
@property(retain, nonatomic) NSDictionary *extensionsByIdentifier; // @synthesize extensionsByIdentifier=_extensionsByIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_logExtensionsStateWithReason:(id)arg1;	// IMP=0x00000000000046e7
- (id)_remoteEmailExtensionsForExtensions:(id)arg1 enabledOnly:(_Bool)arg2;	// IMP=0x0000000000004183
- (void)_stopMatchingExtensions;	// IMP=0x0000000000004163
- (_Bool)_extension:(id)arg1 matchesCapabilities:(id)arg2;	// IMP=0x0000000000004066
- (_Bool)_extension:(id)arg1 matchesCriteria:(id)arg2;	// IMP=0x0000000000003f8b
- (_Bool)_extension:(id)arg1 matchesOldCriteria:(id)arg2;	// IMP=0x0000000000003e76
- (id)_extensionsNoLongerMatchingFromNewExtensions:(id)arg1 currentExtensions:(id)arg2 forCriteria:(id)arg3;	// IMP=0x0000000000003a98
- (id)_extensionsNewlyMatchingFromNewExtensions:(id)arg1 currentExtensions:(id)arg2 forCriteria:(id)arg3;	// IMP=0x00000000000036ec
- (void)_startMatchingExtensions;	// IMP=0x0000000000002c28
- (id)extensionForIdentifier:(id)arg1;	// IMP=0x0000000000002ab0
- (void)registerMailAppExtensionsObserver:(id)arg1 capabilities:(id)arg2 includeDisabled:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000002572
- (void)dealloc;	// IMP=0x00000000000024f1
- (id)init;	// IMP=0x0000000000001f99

@end

