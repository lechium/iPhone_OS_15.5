//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SSNewsResultBuilder
{
    NSDate *_publishedDate;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subTitle;	// 24 = 0x18
    NSString *_newsSource;	// 32 = 0x20
}

+ (id)newsFootnoteWithNewsSource:(id)arg1 publishedDate:(id)arg2;	// IMP=0x0000000000008c53
+ (id)bundleId;	// IMP=0x0000000000008c3f
- (void).cxx_destruct;	// IMP=0x0000000000009085
@property(retain, nonatomic) NSString *newsSource; // @synthesize newsSource=_newsSource;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *publishedDate; // @synthesize publishedDate=_publishedDate;
- (id)buildInlineCardSection;	// IMP=0x0000000000008ef2
- (id)initWithResult:(id)arg1;	// IMP=0x0000000000008d54

@end
