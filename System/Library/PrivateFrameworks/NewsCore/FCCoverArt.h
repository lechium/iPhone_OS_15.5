//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCCoverArt : NSObject
{
    NSArray *_images;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001b15e6
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
- (id)initWithJSONData:(id)arg1;	// IMP=0x00000000001b147f
- (id)initWithJSONString:(id)arg1;	// IMP=0x00000000001b1421

@end
