//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

#import <OfficeImport/NSFastEnumeration-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUCFSetEnumerator : NSEnumerator <NSFastEnumeration>
{
    void *mInlineObjects[16];	// 8 = 0x8
    const void **mObjects;	// 136 = 0x88
    long long mCount;	// 144 = 0x90
    long long mIndex;	// 152 = 0x98
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000027192a
- (id)allObjects;	// IMP=0x00000000002718e0
- (id)nextObject;	// IMP=0x00000000002718a8
- (id)initWithCFSet:(struct __CFSet *)arg1;	// IMP=0x0000000000271824
- (void)dealloc;	// IMP=0x00000000002717cf

@end

