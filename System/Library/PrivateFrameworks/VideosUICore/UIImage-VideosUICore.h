//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (VideosUICore)
+ (id)vuiImageWithCGImage:(struct CGImage *)arg1;	// IMP=0x00000000000200ed
+ (id)vuiSystemImageNamed:(id)arg1 withConfiguration:(id)arg2 accessibilityDescription:(id)arg3;	// IMP=0x00000000000200d4
+ (id)vuiImageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x00000000000200b8
- (id)vui_imageWithColor:(id)arg1;	// IMP=0x0000000000020153
- (id)vuiPNGRepresentation;	// IMP=0x0000000000020149
- (id)vuiJPEGRepresentation;	// IMP=0x0000000000020137
- (id)vuiTemplateImage;	// IMP=0x0000000000020120
@property(readonly, nonatomic) struct CGImage *vuiCGImage;
@end
