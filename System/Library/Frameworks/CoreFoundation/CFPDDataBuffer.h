//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDDataBuffer : NSObject
{
}

+ (id)newBufferFromPropertyList:(void *)arg1;	// IMP=0x0000000000040bc8
+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(_Bool)arg2;	// IMP=0x0000000000040b25
+ (id)newBufferFromCFData:(struct __CFData *)arg1;	// IMP=0x0000000000040af7
- (_Bool)purgable;	// IMP=0x0000000000040f5b
- (void)endAccessing;	// IMP=0x0000000000040f5a
- (_Bool)beginAccessing;	// IMP=0x0000000000040f57
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040e33
- (_Bool)validatePlist;	// IMP=0x0000000000040d7e
- (void *)copyPropertyListWithMutability:(unsigned long long)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000040c9a
- (id)copyXPCData;	// IMP=0x0000000000040c57
- (struct __CFData *)copyCFData;	// IMP=0x0000000000040c08
- (unsigned long long)length;	// IMP=0x0000000000040bff
- (void *)bytes;	// IMP=0x0000000000040bf6

@end

