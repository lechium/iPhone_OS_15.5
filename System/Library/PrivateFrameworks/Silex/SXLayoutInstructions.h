//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXLayoutInstructions : NSObject
{
    NSArray *_instructions;	// 8 = 0x8
}

+ (id)defaultInstructions;	// IMP=0x0000000000096535
- (void).cxx_destruct;	// IMP=0x000000000009699a
@property(readonly, nonatomic) NSArray *instructions; // @synthesize instructions=_instructions;
- (id)description;	// IMP=0x0000000000096940
- (_Bool)areFulfilledForBlueprint:(id)arg1;	// IMP=0x00000000000967e5
- (void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2;	// IMP=0x0000000000096659
- (id)initWithInstructions:(id)arg1;	// IMP=0x00000000000965ee

@end

