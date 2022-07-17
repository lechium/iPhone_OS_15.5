//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewService.h>

@class NSUUID, _EXExtensionProcess, _EXHostViewControllerConfiguration;

__attribute__((visibility("hidden")))
@interface _EXRemoteViewService : _UIRemoteViewService
{
    NSUUID *_contextToken;	// 8 = 0x8
    _EXHostViewControllerConfiguration *_configuration;	// 16 = 0x10
    _EXExtensionProcess *_extensionProcess;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001ad8
@property(readonly) _EXExtensionProcess *extensionProcess; // @synthesize extensionProcess=_extensionProcess;
@property(readonly) _EXHostViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)contextToken;	// IMP=0x0000000000001a9b
- (void)endUsing:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001a8b
- (void)beginUsing:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001a7b
- (id)viewControllerClassName;	// IMP=0x00000000000019ab
- (int)processIdentifier;	// IMP=0x0000000000001967
- (id)multipleInstancesUUID;	// IMP=0x000000000000195f
- (_Bool)multipleInstances;	// IMP=0x0000000000001957
- (id)xpcServiceNameRoot;	// IMP=0x00000000000018dd
- (id)identifier;	// IMP=0x0000000000001863
- (_Bool)overridesHostAppearance;	// IMP=0x000000000000185b
- (id)initWithExtensionConfiguration:(id)arg1 extensionProcess:(id)arg2 contextToken:(id)arg3;	// IMP=0x0000000000001795

@end
