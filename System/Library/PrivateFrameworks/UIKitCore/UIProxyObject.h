//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding>
{
    NSString *proxiedObjectIdentifier;	// 8 = 0x8
}

+ (void)removeMappingsForCoder:(id)arg1;	// IMP=0x00000000008922c3
+ (id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000892236
+ (void)addMappings:(id)arg1 forCoder:(id)arg2;	// IMP=0x0000000000892041
+ (void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3;	// IMP=0x0000000000891f6a
+ (struct __CFDictionary *)proxyDecodingMap;	// IMP=0x0000000000891f19
- (void).cxx_destruct;	// IMP=0x00000000008924b0
- (id)proxiedObjectIdentifier;	// IMP=0x00000000008924a2
- (void)setProxiedObjectIdentifier:(id)arg1;	// IMP=0x0000000000892468
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000892445
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000089230d

@end
