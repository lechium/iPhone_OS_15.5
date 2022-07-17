//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTClippableImageEncoder-Protocol.h>

@class NSString;

@interface AVTStickerImageEncoder : NSObject <AVTClippableImageEncoder>
{
}

- (id)fileExtension;	// IMP=0x0000000000050a3f
- (id)dataFromImage:(id)arg1 clippingRect:(struct CGRect)arg2;	// IMP=0x00000000000507c6
- (id)dataFromImage:(id)arg1;	// IMP=0x00000000000507b9
- (id)imageFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005074c
- (id)imageFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000506b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
