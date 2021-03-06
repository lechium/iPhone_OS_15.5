//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SSEnvironmentDescription;

@interface SSSScreenshotModificationInfo : NSObject
{
    SSEnvironmentDescription *_environmentDescription;	// 8 = 0x8
    struct SSSCropInfo _cropInfo;	// 16 = 0x10
    NSArray *_annotationNSDatas;	// 64 = 0x40
    double _vellumOpacity;	// 72 = 0x48
    NSArray *_originalAnnotations;	// 80 = 0x50
    NSString *_imageDescription;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000003e95
- (void).cxx_destruct;	// IMP=0x002000000000447c
@property(readonly, nonatomic) NSArray *originalAnnotations; // @synthesize originalAnnotations=_originalAnnotations;
- (id)description;	// IMP=0x00100000000043b5
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000004251
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000411c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000003e9d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003e8f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003e7d
@property(readonly, copy, nonatomic) NSString *imageDescription;
@property(readonly, nonatomic) double vellumOpacity;
- (id)annotationNSDatas;	// IMP=0x0010000000003e56
@property(readonly, nonatomic) NSArray *annotations;
@property(readonly, nonatomic) struct SSSCropInfo cropInfo;
- (id)initForScreenshotWithEnvironmentDescription:(id)arg1;	// IMP=0x0010000000003ce0

@end

