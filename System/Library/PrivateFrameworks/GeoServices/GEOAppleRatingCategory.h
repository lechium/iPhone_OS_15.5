//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDRatingCategory, NSString;

@interface GEOAppleRatingCategory : NSObject
{
    GEOPDRatingCategory *_ratingCategory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f3f578
@property(readonly, nonatomic) NSString *key;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
- (id)initWithRatingCategory:(id)arg1;	// IMP=0x0000000000f3f4e9

@end

