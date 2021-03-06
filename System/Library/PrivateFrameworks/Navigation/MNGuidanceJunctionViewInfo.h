//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSArray, NSUUID;

@interface MNGuidanceJunctionViewInfo : NSObject <NSSecureCoding>
{
    NSUUID *_uniqueID;	// 8 = 0x8
    NSArray *_images;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000122aa
- (void).cxx_destruct;	// IMP=0x0000000000012455
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000123d3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000122b2
- (id)description;	// IMP=0x0000000000012054
- (id)initWithID:(id)arg1 images:(id)arg2;	// IMP=0x0000000000011fbb

@end

