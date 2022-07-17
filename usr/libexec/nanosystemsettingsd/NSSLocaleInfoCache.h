//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NSSLocaleInfoCache : NSObject
{
    NSDictionary *_reply;	// 8 = 0x8
    NSString *_gizmoBuildVersion;	// 16 = 0x10
}

+ (void)handleMemoryPressureEvent;	// IMP=0x002000000001e485
+ (id)cachedReply;	// IMP=0x001000000001e1ac
+ (void)cacheReply:(id)arg1 forGizmoBuildVersion:(id)arg2;	// IMP=0x001000000001dcab
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001dafa
- (void).cxx_destruct;	// IMP=0x002000000001e4ee
- (void)setGizmoBuildVersion:(id)arg1;	// IMP=0x001000000001e4dd
- (id)gizmoBuildVersion;	// IMP=0x001000000001e4d3
@property(retain, nonatomic) NSDictionary *reply; // @synthesize reply=_reply;
- (_Bool)isValidForGizmoBuildVersion:(id)arg1;	// IMP=0x001000000001e4a2
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001db70
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001db02

@end
