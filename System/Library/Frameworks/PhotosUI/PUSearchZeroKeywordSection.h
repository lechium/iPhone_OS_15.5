//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PUSearchZeroKeywordSection : NSObject
{
    long long _sectionType;	// 8 = 0x8
    NSArray *_viewModels;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003ea11a
@property(readonly, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
- (id)description;	// IMP=0x00000000003ea06a
- (void)removeItem:(id)arg1;	// IMP=0x00000000003e9f99
- (id)initWithType:(long long)arg1 viewModels:(id)arg2;	// IMP=0x00000000003e9f1b

@end
