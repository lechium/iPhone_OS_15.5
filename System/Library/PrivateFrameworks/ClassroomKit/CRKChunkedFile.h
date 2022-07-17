//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRKChunkedFile : NSObject
{
    int mFileDescriptor;	// 8 = 0x8
}

+ (long long)preferredChunkSizeForFileDescriptor:(int)arg1;	// IMP=0x000000000004534c
+ (void)assertFileDescriptorIsValid:(int)arg1;	// IMP=0x00000000000452c1
- (long long)readNextChunkIntoBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004549c
- (id)initWithFileDescriptor:(int)arg1;	// IMP=0x0000000000045443
- (id)init;	// IMP=0x000000000004542f

@end
