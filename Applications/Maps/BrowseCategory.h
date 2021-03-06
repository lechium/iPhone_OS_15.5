//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BrowseCategory : NSObject
{
    NSArray *_subCategories;	// 8 = 0x8
    GEOSearchCategory *_category;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000006772aa
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
- (unsigned long long)hash;	// IMP=0x0010000000677241
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000067716e
- (id)description;	// IMP=0x00100000006770ac
@property(readonly, nonatomic) NSString *alternativeName;
@property(readonly, nonatomic) NSString *name;
- (void)imageWithScale:(double)arg1 isCarplay:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000676fc1
- (void)imageWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000676fa7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000676f9c
- (id)initWithCategory:(id)arg1;	// IMP=0x0010000000676d40

@end

