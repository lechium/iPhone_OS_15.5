//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKInternalIconManager, VKSharedResources;
@protocol OS_dispatch_source;

@interface VKIconManager : NSObject
{
    VKSharedResources *_sharedResources;	// 8 = 0x8
    VKInternalIconManager *_iconManager;	// 16 = 0x10
    _Bool _usingSingletonIconManager;	// 24 = 0x18
    struct mutex _lock;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_iconManagerReleaseSource;	// 96 = 0x60
    unsigned int _iconManagerTimerID;	// 104 = 0x68
}

+ (id)sharedManager;	// IMP=0x00000000003306ca
- (id).cxx_construct;	// IMP=0x0000000000330f74
- (void).cxx_destruct;	// IMP=0x0000000000330f66
- (void)purge;	// IMP=0x0000000000330f1b
- (void)setIsCachingAtlases:(_Bool)arg1;	// IMP=0x0000000000330eec
- (_Bool)isCachingAtlases;	// IMP=0x0000000000330ec1
- (unsigned int)darkVariant;	// IMP=0x0000000000330e96
- (unsigned int)trafficIncidentTypeKey;	// IMP=0x0000000000330e6b
- (unsigned int)styleAttributeTransitSystemTypeKey;	// IMP=0x0000000000330e40
- (unsigned int)styleAttributeTransitTypeKey;	// IMP=0x0000000000330e15
- (id)imageForIconID:(unsigned int)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;	// IMP=0x0000000000330dc0
- (id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;	// IMP=0x0000000000330d69
- (id)imageForKey:(unsigned int)arg1 value:(unsigned int)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;	// IMP=0x0000000000330d0d
- (id)imageForDataID:(unsigned int)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;	// IMP=0x0000000000330cb1
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;	// IMP=0x0000000000330c53
- (id)imageForStyleAttributes:(id)arg1 styleManager:(shared_ptr_3e3c7f86)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;	// IMP=0x0000000000330b75
- (id)imageForImageSourceKey:(id)arg1;	// IMP=0x0000000000330b44
- (id)_internalIconManager;	// IMP=0x0000000000330833
- (void)dealloc;	// IMP=0x0000000000330790
- (id)init;	// IMP=0x0000000000330719

@end

