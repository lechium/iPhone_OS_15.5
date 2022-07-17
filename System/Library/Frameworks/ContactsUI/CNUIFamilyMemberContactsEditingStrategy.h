//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberContactsEditingStrategy : NSObject
{
    NSArray *_prohibitedPropertyKeys;	// 8 = 0x8
    CDUnknownBlockType _sensitiveDataContactFilter;	// 16 = 0x10
}

+ (id)whitelistedContactsStrategy;	// IMP=0x0000000000008b83
+ (id)managedContactsStrategy;	// IMP=0x0000000000008b19
- (void).cxx_destruct;	// IMP=0x0000000000008af1
@property(readonly, nonatomic) CDUnknownBlockType sensitiveDataContactFilter; // @synthesize sensitiveDataContactFilter=_sensitiveDataContactFilter;
@property(readonly, nonatomic) NSArray *prohibitedPropertyKeys; // @synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys;
- (id)initWithProhibitedPropertyKeys:(id)arg1 sensitiveDataContactFilter:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008a2b

@end
