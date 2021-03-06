//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VenueAreaIdentifier : NSObject
{
    unsigned long long _venueID;	// 8 = 0x8
    NSNumber *_buildingID;	// 16 = 0x10
    NSNumber *_levelID;	// 24 = 0x18
    NSNumber *_floorOrdinal;	// 32 = 0x20
}

+ (id)keyForVenue:(id)arg1 building:(id)arg2 floorOrdinal:(id)arg3;	// IMP=0x00200000004bb95b
- (void).cxx_destruct;	// IMP=0x00200000004bbdcd
@property(readonly, copy, nonatomic) NSNumber *floorOrdinal; // @synthesize floorOrdinal=_floorOrdinal;
@property(readonly, copy, nonatomic) NSNumber *levelID; // @synthesize levelID=_levelID;
@property(readonly, copy, nonatomic) NSNumber *buildingID; // @synthesize buildingID=_buildingID;
@property(readonly, nonatomic) unsigned long long venueID; // @synthesize venueID=_venueID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004bbb92
- (unsigned long long)hash;	// IMP=0x00100000004bba88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004bba7d
- (id)initWithVenueID:(unsigned long long)arg1 buildingID:(id)arg2 levelID:(id)arg3 floorOrdinal:(id)arg4;	// IMP=0x00100000004bb869

@end

