//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOStyleAttributes, NSString;

@interface GEOCategorySearchResultSection : NSObject
{
    long long _cellType;	// 8 = 0x8
    NSString *_headerDisplayName;	// 16 = 0x10
    NSString *_subHeaderDisplayName;	// 24 = 0x18
    GEOStyleAttributes *_styleAttributes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007a54c7
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(copy, nonatomic) NSString *subHeaderDisplayName; // @synthesize subHeaderDisplayName=_subHeaderDisplayName;
@property(copy, nonatomic) NSString *headerDisplayName; // @synthesize headerDisplayName=_headerDisplayName;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (id)initWithCategorySearchResultSection:(id)arg1;	// IMP=0x00000000007a538e
- (id)init;	// IMP=0x00000000007a5364

@end
