//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject
{
    _Bool _supportsASTC_LDR;	// 8 = 0x8
    _Bool _supportsETC2;	// 9 = 0x9
    EAGLContext *_glContext;	// 16 = 0x10
    NSLock *_nsLock;	// 24 = 0x18
}

+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a3bb
+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a319
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a297
+ (id)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a215
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a193
+ (id)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x000000000001a100
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001a07e
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000019fe0
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x0000000000019720
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x0000000000019133
+ (id)commonTextureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x0000000000019050
+ (id)commonTextureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 error:(id *)arg5 lock:(id)arg6 glContext:(id)arg7;	// IMP=0x0000000000018d0f
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x0000000000018af4
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id *)arg3 lock:(id)arg4 glContext:(id)arg5;	// IMP=0x0000000000018a11
+ (id)_textureWithTextureTXR:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018980
+ (id)_textureWithTexture:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000018894
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;	// IMP=0x0000000000018852
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;	// IMP=0x00000000000187ef
@property _Bool supportsETC2; // @synthesize supportsETC2=_supportsETC2;
@property _Bool supportsASTC_LDR; // @synthesize supportsASTC_LDR=_supportsASTC_LDR;
@property(retain) NSLock *nsLock; // @synthesize nsLock=_nsLock;
@property(retain) EAGLContext *glContext; // @synthesize glContext=_glContext;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001b009
- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001afae
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001ae16
- (void)textureWithCGImage:(struct CGImage *)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001abdb
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001aa43
- (void)textureWithName:(id)arg1 scaleFactor:(double)arg2 bundle:(id)arg3 options:(id)arg4 queue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000001a790
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a492
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a437
- (void)dealloc;	// IMP=0x0000000000018798
- (id)initWithSharegroup:(id)arg1;	// IMP=0x0000000000018633

@end

