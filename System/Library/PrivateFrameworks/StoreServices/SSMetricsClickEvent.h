//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface SSMetricsClickEvent
{
}

- (id)description;	// IMP=0x000000000017feae
@property(retain, nonatomic) NSString *targetURL;
@property(retain, nonatomic) NSString *targetType;
@property(retain, nonatomic) NSString *targetIdentifier;
@property(retain, nonatomic) NSNumber *positionY;
@property(retain, nonatomic) NSNumber *positionX;
- (void)setLocationWithEventLocations:(id)arg1;	// IMP=0x000000000017fc1c
@property(retain, nonatomic) NSString *locationDescription;
@property(retain, nonatomic) id impressions;
@property(retain, nonatomic) NSString *actionType;
@property(retain, nonatomic) id actionDetails;
- (id)init;	// IMP=0x000000000017facc

@end

