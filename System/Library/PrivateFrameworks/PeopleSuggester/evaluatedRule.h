//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface evaluatedRule : NSObject
{
    float _ruleScore;	// 8 = 0x8
    long long _ruleLabel;	// 16 = 0x10
    NSNumber *_recipientUniqueID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bb905
@property(retain, nonatomic) NSNumber *recipientUniqueID; // @synthesize recipientUniqueID=_recipientUniqueID;
@property(nonatomic) float ruleScore; // @synthesize ruleScore=_ruleScore;
@property(nonatomic) long long ruleLabel; // @synthesize ruleLabel=_ruleLabel;
- (long long)compare:(id)arg1;	// IMP=0x00000000000bb7fa
- (id)initWithLabel:(long long)arg1 score:(float)arg2 recipientUniqueID:(id)arg3;	// IMP=0x00000000000bb775

@end
