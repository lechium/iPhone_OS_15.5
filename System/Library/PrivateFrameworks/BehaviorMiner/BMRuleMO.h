//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface BMRuleMO : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x000000000001b8c6

// Remaining properties
@property(nonatomic) long long absoluteAntecedentSupport; // @dynamic absoluteAntecedentSupport;
@property(nonatomic) long long absoluteConsequentSupport; // @dynamic absoluteConsequentSupport;
@property(nonatomic) long long absoluteSupport; // @dynamic absoluteSupport;
@property(retain, nonatomic) NSSet *antecedent; // @dynamic antecedent;
@property(nonatomic) double confidence; // @dynamic confidence;
@property(retain, nonatomic) NSSet *consequent; // @dynamic consequent;
@property(nonatomic) double support; // @dynamic support;
@property(nonatomic) long long uniqueDaysLastWeek; // @dynamic uniqueDaysLastWeek;
@property(nonatomic) long long uniqueDaysTotal; // @dynamic uniqueDaysTotal;

@end

