//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject
{
    NSString *_ratingName;	// 8 = 0x8
    NSString *_ratingDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000062127
@property(readonly, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(retain, nonatomic) NSString *ratingName; // @synthesize ratingName=_ratingName;
- (id)description;	// IMP=0x000000000006206f
- (id)initWithRatingDescription:(id)arg1;	// IMP=0x0000000000062004

@end

