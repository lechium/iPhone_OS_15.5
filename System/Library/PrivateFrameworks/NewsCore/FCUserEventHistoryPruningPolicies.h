//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCUserEventHistoryPruningPolicies : NSObject
{
    NSArray *_policies;	// 8 = 0x8
}

+ (id)defaultPolicy;	// IMP=0x00000000000b8f25
- (void).cxx_destruct;	// IMP=0x00000000000b92e4
@property(retain, nonatomic) NSArray *policies; // @synthesize policies=_policies;
- (id)description;	// IMP=0x00000000000b925d
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000b8ff2

@end

