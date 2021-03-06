//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (Conversion)
+ (id)avt_animatedImageWithDataRepresentation:(id)arg1 ofType:(struct __CFString *)arg2;	// IMP=0x000000000001265b
+ (id)animatedImageWithAPNGRepresentation:(id)arg1;	// IMP=0x000000000001263f
+ (id)animatedImageWithHEICSRepresentation:(id)arg1;	// IMP=0x0000000000012626
+ (id)animatedImageWithHEICRepresentation:(id)arg1;	// IMP=0x000000000001260a
- (id)copyByReorderingImagesWithFirstImageAtTime:(double)arg1;	// IMP=0x00000000000131cc
- (id)avt_dataRepresentationForType:(struct __CFString *)arg1;	// IMP=0x000000000001299d
- (id)APNGRepresentation;	// IMP=0x0000000000012981
- (id)HEICSRepresentation;	// IMP=0x0000000000012968
- (id)HEICRepresentation;	// IMP=0x000000000001294c
- (float)frameDelayInSeconds;	// IMP=0x00000000000128b5
@end

