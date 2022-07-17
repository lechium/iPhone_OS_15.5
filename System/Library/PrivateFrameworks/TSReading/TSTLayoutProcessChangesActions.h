//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTLayoutProcessChangesActions : NSObject
{
    _Bool mLayoutInvalidate;	// 8 = 0x8
    _Bool mLayoutInvalidateProvider;	// 9 = 0x9
    _Bool mLayoutInvalidateSize;	// 10 = 0xa
    _Bool mLayoutInvalidateTableNameVisibility;	// 11 = 0xb
    _Bool mLayoutSpacesInvalidateCoordinates;	// 12 = 0xc
    _Bool mLayoutSpacesInvalidateTableOffsets;	// 13 = 0xd
}

@property(nonatomic) _Bool layoutSpacesInvalidateTableOffsets; // @synthesize layoutSpacesInvalidateTableOffsets=mLayoutSpacesInvalidateTableOffsets;
@property(nonatomic) _Bool layoutSpacesInvalidateCoordinates; // @synthesize layoutSpacesInvalidateCoordinates=mLayoutSpacesInvalidateCoordinates;
@property(nonatomic) _Bool layoutInvalidateTableNameVisibility; // @synthesize layoutInvalidateTableNameVisibility=mLayoutInvalidateTableNameVisibility;
@property(nonatomic) _Bool layoutInvalidateSize; // @synthesize layoutInvalidateSize=mLayoutInvalidateSize;
@property(nonatomic) _Bool layoutInvalidateProvider; // @synthesize layoutInvalidateProvider=mLayoutInvalidateProvider;
@property(nonatomic) _Bool layoutInvalidate; // @synthesize layoutInvalidate=mLayoutInvalidate;

@end
