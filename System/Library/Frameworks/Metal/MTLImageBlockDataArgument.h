//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLStructTypeInternal;

__attribute__((visibility("hidden")))
@interface MTLImageBlockDataArgument
{
    unsigned int _dataSize;	// 64 = 0x40
    MTLStructTypeInternal *_masterStructMembers;	// 72 = 0x48
    _Bool _aliasImplicitImageBlock;	// 80 = 0x50
    unsigned int _aliasImplicitImageBlockRenderTarget;	// 84 = 0x54
}

- (void)setStructType:(id)arg1;	// IMP=0x000000000003ac0d
- (unsigned long long)aliasImplicitImageBlockRenderTarget;	// IMP=0x000000000003abfd
- (_Bool)aliasImplicitImageBlock;	// IMP=0x000000000003abed
- (id)imageBlockMasterStructMembers;	// IMP=0x000000000003abdc
- (unsigned long long)imageBlockDataSize;	// IMP=0x000000000003abcc
- (void)dealloc;	// IMP=0x000000000003ab7e
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 index:(unsigned long long)arg5 dataSize:(unsigned int)arg6 masterStructMembers:(id)arg7 aliasImplicitImageBlock:(_Bool)arg8 aliasImplicitImageBlockRenderTarget:(unsigned int)arg9;	// IMP=0x000000000003aae4

@end
