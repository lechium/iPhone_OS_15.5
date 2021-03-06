//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSExtension, NSSet, NSString, _MXExtensionProvider;

@interface _MXExtension : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    _MXExtensionProvider *_provider;	// 16 = 0x10
}

+ (void)setShouldDeserializeCacheItems:(_Bool)arg1;	// IMP=0x00000000002997d6
+ (_Bool)shouldDeserializeCacheItems;	// IMP=0x00000000002997ca
- (void).cxx_destruct;	// IMP=0x0000000000184272
@property(nonatomic) __weak _MXExtensionProvider *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_iconWithFormat:(int)arg1;	// IMP=0x00000000001841d3
- (id)_iconForTableUI;	// IMP=0x00000000001841bf
- (id)_containingAppIdentifer;	// IMP=0x000000000018416f
- (id)siblingExtensions;	// IMP=0x00000000001840ef
- (_Bool)_isIntentExtension;	// IMP=0x0000000000184052
- (_Bool)_isMapsExtension;	// IMP=0x0000000000183fb5
- (_Bool)_setEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000183f58
@property(readonly, nonatomic) NSExtension *extension;
@property(readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)description;	// IMP=0x0000000000183d5c
@property(readonly, copy, nonatomic) NSSet *capabilities;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, copy, nonatomic) NSDictionary *attributes;
@property(readonly, copy, nonatomic) NSDictionary *infoDictionary;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier;
- (id)initWithExtensionIdentifier:(id)arg1 extensionProvider:(id)arg2;	// IMP=0x000000000018393b
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000184298
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;	// IMP=0x00000000001843d9
- (void)startExtensionServiceWithInputItems:(id)arg1 begin:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000184567
- (_Bool)canSupportIntentClass:(Class)arg1;	// IMP=0x0000000000184514
- (_Bool)canSupportIntent:(id)arg1;	// IMP=0x000000000018449d
- (void)_loadCacheItems:(id)arg1;	// IMP=0x0000000000299e6b
- (id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;	// IMP=0x0000000000299dc8
- (id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000299bbe
- (id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000299967
- (id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002997e2

@end

