//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPHistoryEntryTransitLineItem-Protocol.h>

@class NSDate, NSString;
@protocol GEOTransitLineItem;

@interface MSPMutableHistoryEntryTransitLineItem <MSPHistoryEntryTransitLineItem>
{
}

+ (id)mutableObjectProtocol;	// IMP=0x000000000006b147
+ (Class)mutableObjectClass;	// IMP=0x000000000006b136
+ (id)immutableObjectProtocol;	// IMP=0x000000000006b125
+ (Class)immutableObjectClass;	// IMP=0x000000000006b11d
- (_Bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;	// IMP=0x000000000006b5fa
@property(retain, nonatomic) id <GEOTransitLineItem> lineItem;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;	// IMP=0x000000000006b2bc
- (id)initWithStorage:(id)arg1;	// IMP=0x000000000006b14f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool tracksRAPReportingOnly;
@property(readonly, copy, nonatomic) NSDate *usageDate;

@end

