//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SGContactDetailSummary : NSObject
{
    NSArray *_phones;	// 8 = 0x8
    NSString *_email;	// 16 = 0x10
    NSArray *_socialProfileIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c0402
@property(copy, nonatomic) NSArray *socialProfileIdentifiers; // @synthesize socialProfileIdentifiers=_socialProfileIdentifiers;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSArray *phones; // @synthesize phones=_phones;

@end

