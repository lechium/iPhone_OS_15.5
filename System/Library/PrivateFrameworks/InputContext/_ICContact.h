//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _ICContact : NSObject
{
    NSString *_firstName;	// 8 = 0x8
    NSString *_phoneticFirstName;	// 16 = 0x10
    NSString *_middleName;	// 24 = 0x18
    NSString *_phoneticMiddleName;	// 32 = 0x20
    NSString *_lastName;	// 40 = 0x28
    NSString *_phoneticLastName;	// 48 = 0x30
    NSString *_organizationName;	// 56 = 0x38
    NSString *_jobTitle;	// 64 = 0x40
    NSString *_nickname;	// 72 = 0x48
    NSArray *_relations;	// 80 = 0x50
    NSArray *_streets;	// 88 = 0x58
    NSArray *_cities;	// 96 = 0x60
    double _score;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000007930
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(readonly, nonatomic) NSArray *streets; // @synthesize streets=_streets;
@property(readonly, nonatomic) NSArray *relations; // @synthesize relations=_relations;
@property(readonly, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(readonly, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, nonatomic) NSString *phoneticLastName; // @synthesize phoneticLastName=_phoneticLastName;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(readonly, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, nonatomic) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007845
- (_Bool)isEqualToContact:(id)arg1;	// IMP=0x00000000000076d9
- (unsigned long long)hash;	// IMP=0x0000000000007559
- (id)description;	// IMP=0x0000000000007515
- (id)flatten;	// IMP=0x0000000000006f84
- (id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relations:(id)arg10 streets:(id)arg11 cities:(id)arg12 score:(double)arg13;	// IMP=0x0000000000006d3b

@end
