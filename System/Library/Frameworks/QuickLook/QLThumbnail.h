//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface QLThumbnail : NSObject
{
    NSURL *_url;	// 8 = 0x8
}

+ (id)defaultDescriptors;	// IMP=0x0000000000052bd3
+ (id)sharedQueue;	// IMP=0x0000000000052b41
- (void).cxx_destruct;	// IMP=0x0000000000053147
@property(retain) NSURL *url; // @synthesize url=_url;
- (_Bool)provideImages:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000052d9b
- (id)imageForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(_Bool)arg3 contentRect:(struct CGRect *)arg4 error:(id *)arg5;	// IMP=0x0000000000052c78
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2;	// IMP=0x0000000000052b2c
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(_Bool)arg3;	// IMP=0x0000000000052a23
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000529bb

@end
