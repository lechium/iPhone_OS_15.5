//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NUBufferImage;

@interface _NUImageCIProvider : NSObject
{
    id <NUBufferImage> _image;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e7e7b
- (void)provideImageData:(void *)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3:(unsigned long long)arg4 size:(unsigned long long)arg5:(unsigned long long)arg6 userInfo:(id)arg7;	// IMP=0x00000000001e7e28
- (void)dealloc;	// IMP=0x00000000001e7de5
- (id)initWithImage:(id)arg1;	// IMP=0x00000000001e7d66

@end

