//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ParsecModel/NSFetchRequestResult-Protocol.h>

@interface PARUsageEvent <NSFetchRequestResult>
{
}

- (void).cxx_destruct;	// IMP=0x0000000000001ecc
- (void).cxx_construct;	// IMP=0x0000000000001ec3
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000001e71

// Remaining properties
@property(nonatomic) _Bool activeDays; // @dynamic activeDays;
@property(nonatomic) int clientIntVal; // @dynamic clientIntVal;
@property(nonatomic) _Bool invokedDays; // @dynamic invokedDays;
@property(nonatomic) int numSearchEngagements; // @dynamic numSearchEngagements;
@property(nonatomic) _Bool searchedDays; // @dynamic searchedDays;
@property(nonatomic) _Bool suggestionOrAppleResultEngagedDays; // @dynamic suggestionOrAppleResultEngagedDays;
@property(nonatomic) _Bool voiceSearchDays; // @dynamic voiceSearchDays;
@property(nonatomic) _Bool webEngagedDays; // @dynamic webEngagedDays;
@property(nonatomic) _Bool zkwEngagedDays; // @dynamic zkwEngagedDays;

@end

