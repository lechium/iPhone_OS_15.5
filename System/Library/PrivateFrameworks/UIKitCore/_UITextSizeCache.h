//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextSizeCache : NSObject
{
    struct ui_size_cache _cache;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000112bcb2
- (void).cxx_destruct;	// IMP=0x000000000112bc96
- (id)description;	// IMP=0x000000000112ba5b
- (void)removeAllSizes;	// IMP=0x000000000112ba4d
- (void)addSize:(struct CGSize)arg1 baselineInfo:(CDStruct_a0add0ba *)arg2 forTargetSize:(struct CGSize)arg3;	// IMP=0x000000000112b44f
- (_Bool)getSize:(struct CGSize *)arg1 baselineInfo:(CDStruct_a0add0ba *)arg2 forTargetSize:(struct CGSize)arg3 isMultiline:(_Bool)arg4;	// IMP=0x000000000112b2be

@end

