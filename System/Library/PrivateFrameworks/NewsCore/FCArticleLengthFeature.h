//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface FCArticleLengthFeature
{
    NSString *_lengthID;	// 40 = 0x28
}

+ (id)longLengthFeature;	// IMP=0x00000000000f4076
+ (id)mediumLengthFeature;	// IMP=0x00000000000f400a
+ (id)shortLengthFeature;	// IMP=0x00000000000f3f9e
- (void).cxx_destruct;	// IMP=0x00000000000f43eb
@property(retain, nonatomic) NSString *lengthID; // @synthesize lengthID=_lengthID;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;	// IMP=0x00000000000f43b1
- (id)initWithPersonalizationIdentifier:(id)arg1;	// IMP=0x00000000000f42ec
- (id)initWithLengthIdentifier:(id)arg1;	// IMP=0x00000000000f423b
- (id)init;	// IMP=0x00000000000f40e2

@end

