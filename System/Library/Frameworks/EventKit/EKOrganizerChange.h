//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKOwnerIDProviding-Protocol.h>

@class EKObjectID;

@interface EKOrganizerChange <EKOwnerIDProviding>
{
    EKObjectID *_ownerID;	// 8 = 0x8
}

+ (void)fetchOrganizerChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007942d
+ (void)fetchOrganizerChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007932b
+ (void)fetchOrganizerChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079229
+ (int)entityType;	// IMP=0x000000000007921e
- (void).cxx_destruct;	// IMP=0x0000000000079606
@property(readonly, nonatomic) EKObjectID *ownerID; // @synthesize ownerID=_ownerID;
- (id)initWithChangeProperties:(id)arg1;	// IMP=0x000000000007952f

@end

