//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSLocale, NSString, NSURL;
@protocol SWLocation;

@interface SWMutableConfiguration
{
    NSString *storeFront;	// 8 = 0x8
    NSLocale *locale;	// 16 = 0x10
    NSString *contentSizeCategory;	// 24 = 0x18
    NSDictionary *dataSources;	// 32 = 0x20
    id <SWLocation> location;	// 40 = 0x28
    NSURL *sourceURL;	// 48 = 0x30
    NSURL *activePictureInPictureURL;	// 56 = 0x38
    struct CGSize canvasSize;	// 64 = 0x40
    struct CGRect contentFrame;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000077a7
@property(copy, nonatomic) NSURL *activePictureInPictureURL; // @synthesize activePictureInPictureURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL;
@property(copy, nonatomic) id <SWLocation> location; // @synthesize location;
@property(copy, nonatomic) NSDictionary *dataSources; // @synthesize dataSources;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale;
@property(copy, nonatomic) NSString *storeFront; // @synthesize storeFront;

@end

