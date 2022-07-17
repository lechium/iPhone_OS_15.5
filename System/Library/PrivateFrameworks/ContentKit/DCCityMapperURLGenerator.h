//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface DCCityMapperURLGenerator
{
    NSString *_startCoordinate;	// 8 = 0x8
    NSString *_endCoordinate;	// 16 = 0x10
}

+ (void)generateURLWithMapsLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c99b
- (void).cxx_destruct;	// IMP=0x000000000000c96a
@property(retain, nonatomic) NSString *endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(retain, nonatomic) NSString *startCoordinate; // @synthesize startCoordinate=_startCoordinate;
- (void)populateQueryDictionary;	// IMP=0x000000000000c6cb
- (id)path;	// IMP=0x000000000000c6c3
- (id)host;	// IMP=0x000000000000c6b6
- (id)scheme;	// IMP=0x000000000000c697

@end
