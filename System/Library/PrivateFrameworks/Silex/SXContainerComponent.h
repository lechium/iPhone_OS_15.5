//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SXJSONArray;
@protocol SXContentDisplay;

@interface SXContainerComponent
{
}

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000003c490
+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;	// IMP=0x000000000003c3ce
+ (CDUnknownBlockType)objectValueClassBlockForPropertyWithName:(id)arg1;	// IMP=0x000000000003c30c
+ (id)typeString;	// IMP=0x000000000003c2ff
- (_Bool)allowAutoplacedAdsWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x000000000003c5dc

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *allComponents; // @dynamic allComponents;
@property(readonly, nonatomic) _Bool allowAutoplacedAds; // @dynamic allowAutoplacedAds;
@property(readonly, nonatomic) SXJSONArray *components; // @dynamic components;
@property(readonly, nonatomic) id <SXContentDisplay> contentDisplay; // @dynamic contentDisplay;

@end

