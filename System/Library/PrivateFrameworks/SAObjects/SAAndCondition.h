//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASupportCondition-Protocol.h>

@class NSArray, NSString;

@interface SAAndCondition <SASupportCondition>
{
}

+ (id)andConditionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002fe45
+ (id)andCondition;	// IMP=0x000000000002fe33
@property(copy, nonatomic) NSArray *conditions;
- (id)encodedClassName;	// IMP=0x000000000002fe26
- (id)groupIdentifier;	// IMP=0x000000000002fe12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

