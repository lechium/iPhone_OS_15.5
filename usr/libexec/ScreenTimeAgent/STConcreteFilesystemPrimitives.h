//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface STConcreteFilesystemPrimitives : NSObject
{
}

- (void)enumerateRegularFilesInDirectoryAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00400000000157cd
- (id)readDataFromFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000157ac
- (_Bool)removeFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001572b
- (_Bool)writeData:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001570b
- (_Bool)createDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015682

@end

