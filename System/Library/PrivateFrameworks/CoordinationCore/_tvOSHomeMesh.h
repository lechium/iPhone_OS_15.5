//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COHomeKitAdapter, COMeshController, COStateService;
@protocol COServiceListenerProvider;

__attribute__((visibility("hidden")))
@interface _tvOSHomeMesh : NSObject
{
    COMeshController *_mesh;	// 8 = 0x8
    id <COServiceListenerProvider> _provider;	// 16 = 0x10
    COStateService *_stateService;	// 24 = 0x18
    COHomeKitAdapter *_homeKitAdapter;	// 32 = 0x20
}

+ (id)homeMeshWithHomeIdentifier:(id)arg1;	// IMP=0x000000000006ef0b
- (void).cxx_destruct;	// IMP=0x000000000006f062
@property(readonly, nonatomic) COHomeKitAdapter *homeKitAdapter; // @synthesize homeKitAdapter=_homeKitAdapter;
@property(readonly, nonatomic) COStateService *stateService; // @synthesize stateService=_stateService;
@property(readonly, nonatomic) id <COServiceListenerProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) COMeshController *mesh; // @synthesize mesh=_mesh;
- (void)dealloc;	// IMP=0x000000000006edc0
- (id)initWithHomeIdentifier:(id)arg1;	// IMP=0x000000000006ea18

@end

