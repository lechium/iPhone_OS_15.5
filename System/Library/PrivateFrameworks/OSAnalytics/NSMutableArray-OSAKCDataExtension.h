//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (OSAKCDataExtension)
- (id)parent;	// IMP=0x0000000000001ee8
- (id)top;	// IMP=0x0000000000001ed6
- (id)pop;	// IMP=0x0000000000001e8e
- (void)push:(id)arg1;	// IMP=0x0000000000001e7c
- (void)addPart:(id)arg1;	// IMP=0x0000000000016797
- (id)section_pop;	// IMP=0x00000000000213ba
- (void)section_push:(id)arg1;	// IMP=0x00000000000213a8
- (void)sortByAddressAndSetInferredSizes;	// IMP=0x0000000000024c91
- (void)addImageLegacy:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(const char *)arg4 path:(const char *)arg5 arch:(const char *)arg6;	// IMP=0x0000000000024a8f
- (void)addImage:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x0000000000024a22
@end

