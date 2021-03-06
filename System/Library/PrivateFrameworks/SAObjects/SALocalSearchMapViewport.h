//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SALocalSearchMapViewport
{
}

+ (id)mapViewportWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003e280
+ (id)mapViewport;	// IMP=0x000000000003e26e
@property(nonatomic) double westLongitude;
@property(copy, nonatomic) NSArray *vertices;
@property(nonatomic) double timeInSecondsSinceViewportEnteredForeground;
@property(nonatomic) double timeInSecondsSinceViewportChanged;
@property(nonatomic) double southLatitude;
@property(nonatomic) double northLatitude;
@property(nonatomic) double eastLongitude;
- (id)encodedClassName;	// IMP=0x000000000003e261
- (id)groupIdentifier;	// IMP=0x000000000003e24d

@end

