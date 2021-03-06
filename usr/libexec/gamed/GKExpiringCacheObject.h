//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface GKExpiringCacheObject
{
}

+ (void)invalidateObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x004000000004d863
+ (void)expireObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x001000000004d4aa
+ (id)fetchSortDescriptors;	// IMP=0x001000000004c92d
- (void)awakeFromInsert;	// IMP=0x002000000004d435
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x001000000004d0ca
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x001000000004d046
@property(readonly, nonatomic) _Bool expired;
- (void)expire;	// IMP=0x001000000004cb93
- (void)invalidate;	// IMP=0x001000000004c9fb
- (_Bool)isValid;	// IMP=0x001000000004c9c8

// Remaining properties
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end

