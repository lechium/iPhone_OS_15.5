//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualIntelligence/NSCopying-Protocol.h>

@class NSArray, VITextBlockAnnotation;

@interface VIAnnotation : NSObject <NSCopying>
{
    NSArray *_nsfwAnnotations;	// 8 = 0x8
    NSArray *_faceAnnotations;	// 16 = 0x10
    NSArray *_humanAnnotations;	// 24 = 0x18
    VITextBlockAnnotation *_textBlockAnnotation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000099d9
@property(readonly, nonatomic) VITextBlockAnnotation *textBlockAnnotation; // @synthesize textBlockAnnotation=_textBlockAnnotation;
@property(readonly, nonatomic) NSArray *humanAnnotations; // @synthesize humanAnnotations=_humanAnnotations;
@property(readonly, nonatomic) NSArray *faceAnnotations; // @synthesize faceAnnotations=_faceAnnotations;
@property(readonly, nonatomic) NSArray *nsfwAnnotations; // @synthesize nsfwAnnotations=_nsfwAnnotations;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009832
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009827
- (id)initWithAnnotations:(id)arg1 humanAnnotations:(id)arg2 nsfwAnnotations:(id)arg3 textBlockAnnotation:(id)arg4;	// IMP=0x000000000000971a
- (id)initWithTextAnnotations:(id)arg1;	// IMP=0x00000000000096fe

@end
