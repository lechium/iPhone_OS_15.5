//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MDLMesh, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelMeshRendition
{
    MDLMesh *_mesh;	// 216 = 0xd8
    NSMutableArray *_submeshKeys;	// 224 = 0xe0
}

- (unsigned long long)writeToData:(id)arg1;	// IMP=0x000000000004fad1
- (id)modelMesh;	// IMP=0x000000000004fac0
@property(readonly) NSArray *submeshKeys;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000004f4a1
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x000000000004f48f
- (void)dealloc;	// IMP=0x000000000004f437
- (id)initForArchiving:(id)arg1 withSubmeshRenditionKeys:(id)arg2;	// IMP=0x000000000004f3af

@end
