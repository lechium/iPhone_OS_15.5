//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriInference/NSCopying-Protocol.h>
#import <SiriInference/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSArray, NSString;

@interface AppMatches : NSObject <NSCopying, NSSecureCoding>
{
    MISSING_TYPE *recommendation;	// 8 = 0x8
    MISSING_TYPE *bundleIds;	// 16 = 0x10
    MISSING_TYPE *signals;	// 24 = 0x18
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x00000000000e62d0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e6260
- (void).cxx_destruct;	// IMP=0x00000000000e6c20
- (id)init;	// IMP=0x00000000000e6bc0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6b40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e6530
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000000e6190
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSArray *bundleIds;
@property(nonatomic, readonly) long long recommendation; // @synthesize recommendation;

@end
