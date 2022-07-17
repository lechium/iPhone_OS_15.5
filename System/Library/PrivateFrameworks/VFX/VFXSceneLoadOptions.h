//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol MTLCommandQueue, MTLDevice;

@interface VFXSceneLoadOptions : NSObject
{
    MISSING_TYPE *enableRuntimeScriptCompilation;	// 8 = 0x8
    MISSING_TYPE *allowLoadingFromFuture;	// 9 = 0x9
    MISSING_TYPE *setupAsTemplate;	// 10 = 0xa
    MISSING_TYPE *automaticallyPrepareScene;	// 11 = 0xb
    MISSING_TYPE *setupAsyncRuntime;	// 12 = 0xc
    MISSING_TYPE *setupRenderer;	// 13 = 0xd
    MISSING_TYPE *device;	// 16 = 0x10
    MISSING_TYPE *commandQueue;	// 24 = 0x18
    MISSING_TYPE *clientID;	// 32 = 0x20
    MISSING_TYPE *systemRegistrationOptions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000d8f0
- (id)init;	// IMP=0x000000000000d8a0
@property(nonatomic, copy) NSString *clientID;
@property(nonatomic, retain) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue;
@property(nonatomic, retain) id <MTLDevice> device; // @synthesize device;
@property(nonatomic) _Bool setupRenderer; // @synthesize setupRenderer;
@property(nonatomic) _Bool setupAsyncRuntime; // @synthesize setupAsyncRuntime;
@property(nonatomic) _Bool automaticallyPrepareScene; // @synthesize automaticallyPrepareScene;
@property(nonatomic) _Bool setupAsTemplate; // @synthesize setupAsTemplate;
@property(nonatomic) _Bool allowLoadingFromFuture; // @synthesize allowLoadingFromFuture;
@property(nonatomic) _Bool enableRuntimeScriptCompilation; // @synthesize enableRuntimeScriptCompilation;

@end
