//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface DESMMappedFile : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x000000000002317b
- (void).cxx_destruct;	// IMP=0x0000000000023501
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;	// IMP=0x000000000002342d
- (int)_munmap:(void *)arg1 len:(unsigned long long)arg2;	// IMP=0x000000000002341d
- (void *)_mmap:(void *)arg1 len:(unsigned long long)arg2 protectionFlags:(int)arg3 sharenFlags:(int)arg4 filedHandle:(int)arg5 offset:(long long)arg6;	// IMP=0x00000000000233fa
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000231c9

@end
