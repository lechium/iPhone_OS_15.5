//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTImageEncoder-Protocol.h>

@class NSString;

@interface AVTJPEGImageEncoder : NSObject <AVTImageEncoder>
{
    double _compressionQuality;	// 8 = 0x8
}

@property(readonly, nonatomic) double compressionQuality; // @synthesize compressionQuality=_compressionQuality;
- (id)fileExtension;	// IMP=0x00000000000a7aeb
- (id)dataFromImage:(id)arg1;	// IMP=0x00000000000a7a91
- (id)imageFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a7a24
- (id)imageFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a798d
- (id)initWithCompressionQuality:(double)arg1;	// IMP=0x00000000000a794a
- (id)init;	// IMP=0x00000000000a7930

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

