//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOMiniBrowseCategories : NSObject
{
    NSArray *_categoriesStyleAttributes;	// 8 = 0x8
    NSArray *_topChildNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a2d4f2
@property(readonly, nonatomic) NSArray *topChildNames; // @synthesize topChildNames=_topChildNames;
@property(readonly, nonatomic) NSArray *categoriesStyleAttributes; // @synthesize categoriesStyleAttributes=_categoriesStyleAttributes;
- (id)initWithMiniPDBrowseCategories:(id)arg1 topChildNames:(id)arg2;	// IMP=0x0000000000a2d222

@end

