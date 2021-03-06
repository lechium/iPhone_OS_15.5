//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class NSPredicate;

@interface GKTournamentPredicate : NSObject <NSSecureCoding>
{
    NSPredicate *_predicate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000405a9
+ (id)predicateForPastCustomTournaments;	// IMP=0x0000000000040542
+ (id)predicateForPastAutoTournaments;	// IMP=0x00000000000404db
+ (id)predicateForPastTournaments;	// IMP=0x0000000000040474
+ (id)predicateForAvailableTournamentsPlayerRegisteredIn;	// IMP=0x00000000000403fc
+ (id)predicateForAvailableAutoTournaments;	// IMP=0x0000000000040395
+ (id)predicateForAvailableCustomTournaments;	// IMP=0x000000000004032e
+ (id)predicateForAvailableTournaments;	// IMP=0x00000000000402c7
- (void).cxx_destruct;	// IMP=0x00000000000406f0
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004062a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000405b1
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000004025f

@end

