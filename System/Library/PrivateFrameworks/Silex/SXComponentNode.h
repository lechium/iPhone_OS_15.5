//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface SXComponentNode : NSObject
{
    NSString *_componentIdentifier;	// 8 = 0x8
    long long _attribute;	// 16 = 0x10
    NSMutableSet *_mutableDependencies;	// 24 = 0x18
    NSMutableSet *_toPositionDependencies;	// 32 = 0x20
    NSMutableSet *_toSizeDependencies;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000481e0
- (id)description;	// IMP=0x0000000000048115
- (unsigned long long)hash;	// IMP=0x00000000000480f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004808f

@end

