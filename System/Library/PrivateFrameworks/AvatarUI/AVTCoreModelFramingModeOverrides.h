//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTCoreModelFramingModeOverrides : NSObject
{
    NSArray *_orderedTags;	// 8 = 0x8
    NSArray *_orderedFramingModeOverrides;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000052f9a
@property(readonly, nonatomic) NSArray *orderedFramingModeOverrides; // @synthesize orderedFramingModeOverrides=_orderedFramingModeOverrides;
@property(readonly, nonatomic) NSArray *orderedTags; // @synthesize orderedTags=_orderedTags;
- (id)initWithCameraOverrides:(id)arg1;	// IMP=0x00000000000529f9

@end

