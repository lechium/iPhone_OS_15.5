//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEMagicKit : NSObject
{
}

+ (id)magicForData:(id)arg1 decompress:(_Bool)arg2;	// IMP=0x00000000000e597d
+ (id)magicForFileAtURL:(id)arg1 decompress:(_Bool)arg2;	// IMP=0x00000000000e5914
+ (id)magicForFileAtPath:(id)arg1 decompress:(_Bool)arg2;	// IMP=0x00000000000e58fb
+ (id)magicForData:(id)arg1;	// IMP=0x00000000000e58e0
+ (id)magicForFileAtURL:(id)arg1;	// IMP=0x00000000000e58c5
+ (id)magicForFileAtPath:(id)arg1;	// IMP=0x00000000000e58aa
+ (id)typeHierarchyForType:(id)arg1;	// IMP=0x00000000000e569a
+ (id)rawMagicOutputForObject:(id)arg1 cookie:(struct magic_set *)arg2 flags:(int)arg3;	// IMP=0x00000000000e556b
+ (id)magicForObject:(id)arg1 decompress:(_Bool)arg2;	// IMP=0x00000000000e5414
+ (struct magic_set *)sharedMagicCookie;	// IMP=0x00000000000e4122

@end
