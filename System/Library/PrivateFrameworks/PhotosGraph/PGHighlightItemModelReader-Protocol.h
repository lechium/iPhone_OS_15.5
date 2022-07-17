//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray;
@protocol NSFastEnumeration, PGHighlightItem;

@protocol PGHighlightItemModelReader <NSObject>
- (unsigned short)visibilityStateForHighlightItem:(id <PGHighlightItem>)arg1;
- (NSArray *)fetchParentHighlightItemsForHighlightItems:(id <NSFastEnumeration>)arg1;
- (NSArray *)fetchChildHighlightItemsForHighlightItem:(id <PGHighlightItem>)arg1;
@end
