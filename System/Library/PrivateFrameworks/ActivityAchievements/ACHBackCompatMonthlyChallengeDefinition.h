//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/NSSecureCoding-Protocol.h>

@class NSExpression, NSString;

@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_typeString;	// 16 = 0x10
    NSExpression *_goalExpression;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002123f
+ (id)definitionFromData:(id)arg1;	// IMP=0x0000000000020c5b
- (void).cxx_destruct;	// IMP=0x00000000000213d8
@property(readonly, nonatomic) NSExpression *goalExpression; // @synthesize goalExpression=_goalExpression;
@property(readonly, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021365
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021247
- (id)_goalExpressionValue;	// IMP=0x00000000000211af
- (id)_dateComponentsFromIdentifier;	// IMP=0x000000000002109f
- (unsigned long long)_monthlyChallengeTypeFromTypeString;	// IMP=0x0000000000021064
- (id)template;	// IMP=0x0000000000020d9c

@end

