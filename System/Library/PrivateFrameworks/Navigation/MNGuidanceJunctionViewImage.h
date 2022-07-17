//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSData;

@interface MNGuidanceJunctionViewImage : NSObject <NSSecureCoding>
{
    unsigned long long _imageID;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011e51
- (void).cxx_destruct;	// IMP=0x0000000000011fab
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) unsigned long long imageID; // @synthesize imageID=_imageID;
- (void)setImageData:(id)arg1;	// IMP=0x0000000000011f86
- (void)setImageID:(unsigned long long)arg1;	// IMP=0x0000000000011f7c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011f0a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011e59

@end
