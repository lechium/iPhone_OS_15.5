//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString;

@interface GKScoreChallengeCacheObject
{
}

+ (id)entityName;	// IMP=0x004000000006ec17
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x002000000006f0d2
- (id)internalRepresentation;	// IMP=0x001000000006ec97
- (Class)classForInternalRepresentation;	// IMP=0x001000000006ec86
- (_Bool)hasDetails;	// IMP=0x001000000006ec24

// Remaining properties
@property(retain, nonatomic) NSNumber *context; // @dynamic context;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *formattedValue; // @dynamic formattedValue;
@property(retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(nonatomic) int rank; // @dynamic rank;
@property(retain, nonatomic) NSNumber *value; // @dynamic value;

@end

