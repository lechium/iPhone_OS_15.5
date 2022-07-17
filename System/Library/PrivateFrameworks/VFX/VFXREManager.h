//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface VFXREManager : NSObject
{
    MISSING_TYPE *entityManager;	// 8 = 0x8
    MISSING_TYPE *rootEntity;	// 16 = 0x10
    MISSING_TYPE *cameraEntity;	// 28 = 0x1c
    MISSING_TYPE *device;	// 40 = 0x28
    MISSING_TYPE *lock;	// 48 = 0x30
    MISSING_TYPE *remappingTable;	// 56 = 0x38
    MISSING_TYPE *registeredBindings;	// 64 = 0x40
    MISSING_TYPE *transientDrawCall;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000487870
- (id)init;	// IMP=0x0000000000487810
- (void)setCameraEntityTransformProjection::::::: /* Error: Ran out of types for this method. */;	// IMP=0x00000000004876e0
- (void)setRootEntityTransform::: /* Error: Ran out of types for this method. */;	// IMP=0x00000000004875c0
- (void)forEachDrawCall:(CDUnknownBlockType)arg1;	// IMP=0x0000000000487290
- (void)withPointerToValueAtPath:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000486b70
- (CDUnknownBlockType)recycleBuffersGetCompletion;	// IMP=0x0000000000486870
- (void)tick:(void *)arg1;	// IMP=0x0000000000486710
- (void)unregisterBindingWithPath:(id)arg1;	// IMP=0x0000000000486420
- (_Bool)registerBindingWithPath:(id)arg1 type:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000486260
- (void)clear;	// IMP=0x0000000000485d50
- (id)generateMaterialsAndReturnError:(id *)arg1;	// IMP=0x0000000000485c20
- (_Bool)loadWithUrl:(id)arg1 loadScriptSymbols:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000485290
- (id)initWithDevice:(id)arg1 modelManager:(id)arg2;	// IMP=0x0000000000484560
@property(nonatomic, readonly) float deltaTime;

@end
